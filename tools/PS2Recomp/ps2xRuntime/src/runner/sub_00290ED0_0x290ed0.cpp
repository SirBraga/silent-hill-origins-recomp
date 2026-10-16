#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00290ED0
// Address: 0x290ed0 - 0x290fa8
void sub_00290ED0_0x290ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290ED0_0x290ed0");
#endif

    switch (ctx->pc) {
        case 0x290ed0u: goto label_290ed0;
        case 0x290ed4u: goto label_290ed4;
        case 0x290ed8u: goto label_290ed8;
        case 0x290edcu: goto label_290edc;
        case 0x290ee0u: goto label_290ee0;
        case 0x290ee4u: goto label_290ee4;
        case 0x290ee8u: goto label_290ee8;
        case 0x290eecu: goto label_290eec;
        case 0x290ef0u: goto label_290ef0;
        case 0x290ef4u: goto label_290ef4;
        case 0x290ef8u: goto label_290ef8;
        case 0x290efcu: goto label_290efc;
        case 0x290f00u: goto label_290f00;
        case 0x290f04u: goto label_290f04;
        case 0x290f08u: goto label_290f08;
        case 0x290f0cu: goto label_290f0c;
        case 0x290f10u: goto label_290f10;
        case 0x290f14u: goto label_290f14;
        case 0x290f18u: goto label_290f18;
        case 0x290f1cu: goto label_290f1c;
        case 0x290f20u: goto label_290f20;
        case 0x290f24u: goto label_290f24;
        case 0x290f28u: goto label_290f28;
        case 0x290f2cu: goto label_290f2c;
        case 0x290f30u: goto label_290f30;
        case 0x290f34u: goto label_290f34;
        case 0x290f38u: goto label_290f38;
        case 0x290f3cu: goto label_290f3c;
        case 0x290f40u: goto label_290f40;
        case 0x290f44u: goto label_290f44;
        case 0x290f48u: goto label_290f48;
        case 0x290f4cu: goto label_290f4c;
        case 0x290f50u: goto label_290f50;
        case 0x290f54u: goto label_290f54;
        case 0x290f58u: goto label_290f58;
        case 0x290f5cu: goto label_290f5c;
        case 0x290f60u: goto label_290f60;
        case 0x290f64u: goto label_290f64;
        case 0x290f68u: goto label_290f68;
        case 0x290f6cu: goto label_290f6c;
        case 0x290f70u: goto label_290f70;
        case 0x290f74u: goto label_290f74;
        case 0x290f78u: goto label_290f78;
        case 0x290f7cu: goto label_290f7c;
        case 0x290f80u: goto label_290f80;
        case 0x290f84u: goto label_290f84;
        case 0x290f88u: goto label_290f88;
        case 0x290f8cu: goto label_290f8c;
        case 0x290f90u: goto label_290f90;
        case 0x290f94u: goto label_290f94;
        case 0x290f98u: goto label_290f98;
        case 0x290f9cu: goto label_290f9c;
        case 0x290fa0u: goto label_290fa0;
        case 0x290fa4u: goto label_290fa4;
        default: break;
    }

    ctx->pc = 0x290ed0u;

label_290ed0:
    // 0x290ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_290ed4:
    // 0x290ed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_290ed8:
    // 0x290ed8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x290ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_290edc:
    // 0x290edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_290ee0:
    // 0x290ee0: 0xc0a25b2  jal         func_2896C8
label_290ee4:
    if (ctx->pc == 0x290EE4u) {
        ctx->pc = 0x290EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EE0u;
        // 0x290ee4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EE8u;
        goto label_290ee8;
    }
    ctx->pc = 0x290EE0u;
    SET_GPR_U32(ctx, 31, 0x290EE8u);
    ctx->pc = 0x290EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290EE0u;
    // 0x290ee4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896C8u, 0x290EE0u, 0x290EE8u)) {
        return;
    }
    ctx->pc = 0x290EE8u;
label_290ee8:
    // 0x290ee8: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x290ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_290eec:
    // 0x290eec: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_290ef0:
    if (ctx->pc == 0x290EF0u) {
        ctx->pc = 0x290EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EECu;
        // 0x290ef0: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EF4u;
        goto label_290ef4;
    }
    ctx->pc = 0x290EECu;
    {
        const bool branch_taken_0x290eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EECu;
        // 0x290ef0: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290eec) {
            ctx->pc = 0x290F64u;
            goto label_290f64;
        }
    }
    ctx->pc = 0x290EF4u;
label_290ef4:
    // 0x290ef4: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x290ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_290ef8:
    // 0x290ef8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x290ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_290efc:
    // 0x290efc: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_290f00:
    if (ctx->pc == 0x290F00u) {
        ctx->pc = 0x290F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EFCu;
        // 0x290f00: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F04u;
        goto label_290f04;
    }
    ctx->pc = 0x290EFCu;
    {
        const bool branch_taken_0x290efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EFCu;
        // 0x290f00: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290efc) {
            ctx->pc = 0x290F54u;
            goto label_290f54;
        }
    }
    ctx->pc = 0x290F04u;
label_290f04:
    // 0x290f04: 0xc0a3f78  jal         func_28FDE0
label_290f08:
    if (ctx->pc == 0x290F08u) {
        ctx->pc = 0x290F0Cu;
        goto label_290f0c;
    }
    ctx->pc = 0x290F04u;
    SET_GPR_U32(ctx, 31, 0x290F0Cu);
    ctx->pc = 0x28FDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FDE0u, 0x290F04u, 0x290F0Cu)) {
        return;
    }
    ctx->pc = 0x290F0Cu;
label_290f0c:
    // 0x290f0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_290f10:
    if (ctx->pc == 0x290F10u) {
        ctx->pc = 0x290F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F0Cu;
        // 0x290f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F14u;
        goto label_290f14;
    }
    ctx->pc = 0x290F0Cu;
    {
        const bool branch_taken_0x290f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F0Cu;
        // 0x290f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f0c) {
            ctx->pc = 0x290F50u;
            goto label_290f50;
        }
    }
    ctx->pc = 0x290F14u;
label_290f14:
    // 0x290f14: 0x10000003  b           . + 4 + (0x3 << 2)
label_290f18:
    if (ctx->pc == 0x290F18u) {
        ctx->pc = 0x290F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F14u;
        // 0x290f18: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F1Cu;
        goto label_290f1c;
    }
    ctx->pc = 0x290F14u;
    {
        const bool branch_taken_0x290f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F14u;
        // 0x290f18: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f14) {
            ctx->pc = 0x290F24u;
            goto label_290f24;
        }
    }
    ctx->pc = 0x290F1Cu;
label_290f1c:
    // 0x290f1c: 0x0  nop
    ctx->pc = 0x290f1cu;
    // NOP
label_290f20:
    // 0x290f20: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x290f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_290f24:
    // 0x290f24: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x290f24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_290f28:
    // 0x290f28: 0x0  nop
    ctx->pc = 0x290f28u;
    // NOP
label_290f2c:
    // 0x290f2c: 0x0  nop
    ctx->pc = 0x290f2cu;
    // NOP
label_290f30:
    // 0x290f30: 0x0  nop
    ctx->pc = 0x290f30u;
    // NOP
label_290f34:
    // 0x290f34: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_290f38:
    if (ctx->pc == 0x290F38u) {
        ctx->pc = 0x290F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F34u;
        // 0x290f38: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F3Cu;
        goto label_290f3c;
    }
    ctx->pc = 0x290F34u;
    {
        const bool branch_taken_0x290f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290f34) {
            ctx->pc = 0x290F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F34u;
            // 0x290f38: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290f20;
        }
    }
    ctx->pc = 0x290F3Cu;
label_290f3c:
    // 0x290f3c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x290f3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_290f40:
    // 0x290f40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_290f44:
    if (ctx->pc == 0x290F44u) {
        ctx->pc = 0x290F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F40u;
        // 0x290f44: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F48u;
        goto label_290f48;
    }
    ctx->pc = 0x290F40u;
    {
        const bool branch_taken_0x290f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F40u;
        // 0x290f44: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f40) {
            ctx->pc = 0x290F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290f20;
        }
    }
    ctx->pc = 0x290F48u;
label_290f48:
    // 0x290f48: 0x10000006  b           . + 4 + (0x6 << 2)
label_290f4c:
    if (ctx->pc == 0x290F4Cu) {
        ctx->pc = 0x290F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F48u;
        // 0x290f4c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F50u;
        goto label_290f50;
    }
    ctx->pc = 0x290F48u;
    {
        const bool branch_taken_0x290f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F48u;
        // 0x290f4c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f48) {
            ctx->pc = 0x290F64u;
            goto label_290f64;
        }
    }
    ctx->pc = 0x290F50u;
label_290f50:
    // 0x290f50: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x290f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_290f54:
    // 0x290f54: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x290f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_290f58:
    // 0x290f58: 0x40f809  jalr        $v0
label_290f5c:
    if (ctx->pc == 0x290F5Cu) {
        ctx->pc = 0x290F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F58u;
        // 0x290f5c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F60u;
        goto label_290f60;
    }
    ctx->pc = 0x290F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290F60u);
        ctx->pc = 0x290F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F58u;
        // 0x290f5c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F58u, 0x290F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290F60u;
label_290f60:
    // 0x290f60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x290f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_290f64:
    // 0x290f64: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x290f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_290f68:
    // 0x290f68: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_290f6c:
    if (ctx->pc == 0x290F6Cu) {
        ctx->pc = 0x290F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F68u;
        // 0x290f6c: 0x26100005  addiu       $s0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F70u;
        goto label_290f70;
    }
    ctx->pc = 0x290F68u;
    {
        const bool branch_taken_0x290f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F68u;
        // 0x290f6c: 0x26100005  addiu       $s0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f68) {
            ctx->pc = 0x290F8Cu;
            goto label_290f8c;
        }
    }
    ctx->pc = 0x290F70u;
label_290f70:
    // 0x290f70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x290f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_290f74:
    // 0x290f74: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_290f78:
    if (ctx->pc == 0x290F78u) {
        ctx->pc = 0x290F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F74u;
        // 0x290f78: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F7Cu;
        goto label_290f7c;
    }
    ctx->pc = 0x290F74u;
    {
        const bool branch_taken_0x290f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F74u;
        // 0x290f78: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f74) {
            ctx->pc = 0x290F8Cu;
            goto label_290f8c;
        }
    }
    ctx->pc = 0x290F7Cu;
label_290f7c:
    // 0x290f7c: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x290f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_290f80:
    // 0x290f80: 0x40f809  jalr        $v0
label_290f84:
    if (ctx->pc == 0x290F84u) {
        ctx->pc = 0x290F88u;
        goto label_290f88;
    }
    ctx->pc = 0x290F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290F88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F80u, 0x290F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290F88u;
label_290f88:
    // 0x290f88: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x290f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_290f8c:
    // 0x290f8c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_290f90:
    // 0x290f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_290f94:
    // 0x290f94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x290f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_290f98:
    // 0x290f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290f9c:
    // 0x290f9c: 0x3e00008  jr          $ra
label_290fa0:
    if (ctx->pc == 0x290FA0u) {
        ctx->pc = 0x290FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F9Cu;
        // 0x290fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290FA4u;
        goto label_290fa4;
    }
    ctx->pc = 0x290F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F9Cu;
        // 0x290fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290FA4u;
label_290fa4:
    // 0x290fa4: 0x0  nop
    ctx->pc = 0x290fa4u;
    // NOP
    ctx->pc = 0x290fa8u;
}
