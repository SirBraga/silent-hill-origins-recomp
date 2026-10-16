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

// Function: sub_00106EF8
// Address: 0x106ef8 - 0x107030
void sub_00106EF8_0x106ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106EF8_0x106ef8");
#endif

    switch (ctx->pc) {
        case 0x106ef8u: goto label_106ef8;
        case 0x106efcu: goto label_106efc;
        case 0x106f00u: goto label_106f00;
        case 0x106f04u: goto label_106f04;
        case 0x106f08u: goto label_106f08;
        case 0x106f0cu: goto label_106f0c;
        case 0x106f10u: goto label_106f10;
        case 0x106f14u: goto label_106f14;
        case 0x106f18u: goto label_106f18;
        case 0x106f1cu: goto label_106f1c;
        case 0x106f20u: goto label_106f20;
        case 0x106f24u: goto label_106f24;
        case 0x106f28u: goto label_106f28;
        case 0x106f2cu: goto label_106f2c;
        case 0x106f30u: goto label_106f30;
        case 0x106f34u: goto label_106f34;
        case 0x106f38u: goto label_106f38;
        case 0x106f3cu: goto label_106f3c;
        case 0x106f40u: goto label_106f40;
        case 0x106f44u: goto label_106f44;
        case 0x106f48u: goto label_106f48;
        case 0x106f4cu: goto label_106f4c;
        case 0x106f50u: goto label_106f50;
        case 0x106f54u: goto label_106f54;
        case 0x106f58u: goto label_106f58;
        case 0x106f5cu: goto label_106f5c;
        case 0x106f60u: goto label_106f60;
        case 0x106f64u: goto label_106f64;
        case 0x106f68u: goto label_106f68;
        case 0x106f6cu: goto label_106f6c;
        case 0x106f70u: goto label_106f70;
        case 0x106f74u: goto label_106f74;
        case 0x106f78u: goto label_106f78;
        case 0x106f7cu: goto label_106f7c;
        case 0x106f80u: goto label_106f80;
        case 0x106f84u: goto label_106f84;
        case 0x106f88u: goto label_106f88;
        case 0x106f8cu: goto label_106f8c;
        case 0x106f90u: goto label_106f90;
        case 0x106f94u: goto label_106f94;
        case 0x106f98u: goto label_106f98;
        case 0x106f9cu: goto label_106f9c;
        case 0x106fa0u: goto label_106fa0;
        case 0x106fa4u: goto label_106fa4;
        case 0x106fa8u: goto label_106fa8;
        case 0x106facu: goto label_106fac;
        case 0x106fb0u: goto label_106fb0;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fb8u: goto label_106fb8;
        case 0x106fbcu: goto label_106fbc;
        case 0x106fc0u: goto label_106fc0;
        case 0x106fc4u: goto label_106fc4;
        case 0x106fc8u: goto label_106fc8;
        case 0x106fccu: goto label_106fcc;
        case 0x106fd0u: goto label_106fd0;
        case 0x106fd4u: goto label_106fd4;
        case 0x106fd8u: goto label_106fd8;
        case 0x106fdcu: goto label_106fdc;
        case 0x106fe0u: goto label_106fe0;
        case 0x106fe4u: goto label_106fe4;
        case 0x106fe8u: goto label_106fe8;
        case 0x106fecu: goto label_106fec;
        case 0x106ff0u: goto label_106ff0;
        case 0x106ff4u: goto label_106ff4;
        case 0x106ff8u: goto label_106ff8;
        case 0x106ffcu: goto label_106ffc;
        case 0x107000u: goto label_107000;
        case 0x107004u: goto label_107004;
        case 0x107008u: goto label_107008;
        case 0x10700cu: goto label_10700c;
        case 0x107010u: goto label_107010;
        case 0x107014u: goto label_107014;
        case 0x107018u: goto label_107018;
        case 0x10701cu: goto label_10701c;
        case 0x107020u: goto label_107020;
        case 0x107024u: goto label_107024;
        case 0x107028u: goto label_107028;
        case 0x10702cu: goto label_10702c;
        default: break;
    }

    ctx->pc = 0x106ef8u;

label_106ef8:
    // 0x106ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106efc:
    // 0x106efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x106efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_106f00:
    // 0x106f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_106f04:
    // 0x106f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106f08:
    // 0x106f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106f0c:
    // 0x106f0c: 0xc04f0bc  jal         func_13C2F0
label_106f10:
    if (ctx->pc == 0x106F10u) {
        ctx->pc = 0x106F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F0Cu;
        // 0x106f10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F14u;
        goto label_106f14;
    }
    ctx->pc = 0x106F0Cu;
    SET_GPR_U32(ctx, 31, 0x106F14u);
    ctx->pc = 0x106F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F0Cu;
    // 0x106f10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x106F0Cu, 0x106F14u)) {
        return;
    }
    ctx->pc = 0x106F14u;
label_106f14:
    // 0x106f14: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x106f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_106f18:
    // 0x106f18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x106f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106f1c:
    // 0x106f1c: 0x8c4346a0  lw          $v1, 0x46A0($v0)
    ctx->pc = 0x106f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18080)));
label_106f20:
    // 0x106f20: 0x54830013  bnel        $a0, $v1, . + 4 + (0x13 << 2)
label_106f24:
    if (ctx->pc == 0x106F24u) {
        ctx->pc = 0x106F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F20u;
        // 0x106f24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F28u;
        goto label_106f28;
    }
    ctx->pc = 0x106F20u;
    {
        const bool branch_taken_0x106f20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x106f20) {
            ctx->pc = 0x106F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106F20u;
            // 0x106f24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106F70u;
            goto label_106f70;
        }
    }
    ctx->pc = 0x106F28u;
label_106f28:
    // 0x106f28: 0x8e100048  lw          $s0, 0x48($s0)
    ctx->pc = 0x106f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_106f2c:
    // 0x106f2c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_106f30:
    if (ctx->pc == 0x106F30u) {
        ctx->pc = 0x106F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F2Cu;
        // 0x106f30: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F34u;
        goto label_106f34;
    }
    ctx->pc = 0x106F2Cu;
    {
        const bool branch_taken_0x106f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F2Cu;
        // 0x106f30: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f2c) {
            ctx->pc = 0x106F58u;
            goto label_106f58;
        }
    }
    ctx->pc = 0x106F34u;
label_106f34:
    // 0x106f34: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x106f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_106f38:
    // 0x106f38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x106f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106f3c:
    // 0x106f3c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x106f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_106f40:
    // 0x106f40: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x106f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_106f44:
    // 0x106f44: 0x60f809  jalr        $v1
label_106f48:
    if (ctx->pc == 0x106F48u) {
        ctx->pc = 0x106F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F44u;
        // 0x106f48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F4Cu;
        goto label_106f4c;
    }
    ctx->pc = 0x106F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106F4Cu);
        ctx->pc = 0x106F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F44u;
        // 0x106f48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F44u, 0x106F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106F4Cu;
label_106f4c:
    // 0x106f4c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x106f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106f50:
    // 0x106f50: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_106f54:
    if (ctx->pc == 0x106F54u) {
        ctx->pc = 0x106F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F50u;
        // 0x106f54: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F58u;
        goto label_106f58;
    }
    ctx->pc = 0x106F50u;
    {
        const bool branch_taken_0x106f50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x106f50) {
            ctx->pc = 0x106F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106F50u;
            // 0x106f54: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106f38;
        }
    }
    ctx->pc = 0x106F58u;
label_106f58:
    // 0x106f58: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x106f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_106f5c:
    // 0x106f5c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x106f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_106f60:
    // 0x106f60: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x106f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_106f64:
    // 0x106f64: 0x60f809  jalr        $v1
label_106f68:
    if (ctx->pc == 0x106F68u) {
        ctx->pc = 0x106F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F64u;
        // 0x106f68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F6Cu;
        goto label_106f6c;
    }
    ctx->pc = 0x106F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106F6Cu);
        ctx->pc = 0x106F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F64u;
        // 0x106f68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F64u, 0x106F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106F6Cu;
label_106f6c:
    // 0x106f6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x106f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106f70:
    // 0x106f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106f74:
    // 0x106f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106f78:
    // 0x106f78: 0x3e00008  jr          $ra
label_106f7c:
    if (ctx->pc == 0x106F7Cu) {
        ctx->pc = 0x106F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F78u;
        // 0x106f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F80u;
        goto label_106f80;
    }
    ctx->pc = 0x106F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F78u;
        // 0x106f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106F80u;
label_106f80:
    // 0x106f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106f84:
    // 0x106f84: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x106f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_106f88:
    // 0x106f88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x106f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_106f8c:
    // 0x106f8c: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x106f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
label_106f90:
    // 0x106f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_106f94:
    // 0x106f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106f98:
    // 0x106f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106f9c:
    // 0x106f9c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x106f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_106fa0:
    // 0x106fa0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x106fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106fa4:
    // 0x106fa4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_106fa8:
    if (ctx->pc == 0x106FA8u) {
        ctx->pc = 0x106FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FA4u;
        // 0x106fa8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FACu;
        goto label_106fac;
    }
    ctx->pc = 0x106FA4u;
    {
        const bool branch_taken_0x106fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FA4u;
        // 0x106fa8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fa4) {
            ctx->pc = 0x107008u;
            goto label_107008;
        }
    }
    ctx->pc = 0x106FACu;
label_106fac:
    // 0x106fac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x106facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106fb0:
    // 0x106fb0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_106fb4:
    if (ctx->pc == 0x106FB4u) {
        ctx->pc = 0x106FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FB0u;
        // 0x106fb4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FB8u;
        goto label_106fb8;
    }
    ctx->pc = 0x106FB0u;
    {
        const bool branch_taken_0x106fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106fb0) {
            ctx->pc = 0x106FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106FB0u;
            // 0x106fb4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107000u;
            goto label_107000;
        }
    }
    ctx->pc = 0x106FB8u;
label_106fb8:
    // 0x106fb8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x106fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_106fbc:
    // 0x106fbc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_106fc0:
    if (ctx->pc == 0x106FC0u) {
        ctx->pc = 0x106FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FBCu;
        // 0x106fc0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FC4u;
        goto label_106fc4;
    }
    ctx->pc = 0x106FBCu;
    {
        const bool branch_taken_0x106fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FBCu;
        // 0x106fc0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fbc) {
            ctx->pc = 0x106FCCu;
            goto label_106fcc;
        }
    }
    ctx->pc = 0x106FC4u;
label_106fc4:
    // 0x106fc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_106fc8:
    if (ctx->pc == 0x106FC8u) {
        ctx->pc = 0x106FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FC4u;
        // 0x106fc8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FCCu;
        goto label_106fcc;
    }
    ctx->pc = 0x106FC4u;
    {
        const bool branch_taken_0x106fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FC4u;
        // 0x106fc8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fc4) {
            ctx->pc = 0x106FD0u;
            goto label_106fd0;
        }
    }
    ctx->pc = 0x106FCCu;
label_106fcc:
    // 0x106fcc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x106fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_106fd0:
    // 0x106fd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x106fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_106fd4:
    // 0x106fd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_106fd8:
    if (ctx->pc == 0x106FD8u) {
        ctx->pc = 0x106FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD4u;
        // 0x106fd8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FDCu;
        goto label_106fdc;
    }
    ctx->pc = 0x106FD4u;
    {
        const bool branch_taken_0x106fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD4u;
        // 0x106fd8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fd4) {
            ctx->pc = 0x106FE4u;
            goto label_106fe4;
        }
    }
    ctx->pc = 0x106FDCu;
label_106fdc:
    // 0x106fdc: 0x10000002  b           . + 4 + (0x2 << 2)
label_106fe0:
    if (ctx->pc == 0x106FE0u) {
        ctx->pc = 0x106FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FDCu;
        // 0x106fe0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FE4u;
        goto label_106fe4;
    }
    ctx->pc = 0x106FDCu;
    {
        const bool branch_taken_0x106fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FDCu;
        // 0x106fe0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fdc) {
            ctx->pc = 0x106FE8u;
            goto label_106fe8;
        }
    }
    ctx->pc = 0x106FE4u;
label_106fe4:
    // 0x106fe4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x106fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_106fe8:
    // 0x106fe8: 0xc0808b8  jal         func_2022E0
label_106fec:
    if (ctx->pc == 0x106FECu) {
        ctx->pc = 0x106FF0u;
        goto label_106ff0;
    }
    ctx->pc = 0x106FE8u;
    SET_GPR_U32(ctx, 31, 0x106FF0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x106FE8u, 0x106FF0u)) {
        return;
    }
    ctx->pc = 0x106FF0u;
label_106ff0:
    // 0x106ff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106ff4:
    // 0x106ff4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_106ff8:
    // 0x106ff8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_106ffc:
    // 0x106ffc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x106ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_107000:
    // 0x107000: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_107004:
    if (ctx->pc == 0x107004u) {
        ctx->pc = 0x107004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107000u;
        // 0x107004: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107008u;
        goto label_107008;
    }
    ctx->pc = 0x107000u;
    {
        const bool branch_taken_0x107000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107000) {
            ctx->pc = 0x107004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107000u;
            // 0x107004: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106fb0;
        }
    }
    ctx->pc = 0x107008u;
label_107008:
    // 0x107008: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x107008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_10700c:
    // 0x10700c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_107010:
    if (ctx->pc == 0x107010u) {
        ctx->pc = 0x107010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10700Cu;
        // 0x107010: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107014u;
        goto label_107014;
    }
    ctx->pc = 0x10700Cu;
    {
        const bool branch_taken_0x10700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10700c) {
            ctx->pc = 0x107010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10700Cu;
            // 0x107010: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107020u;
            goto label_107020;
        }
    }
    ctx->pc = 0x107014u;
label_107014:
    // 0x107014: 0xc0808b8  jal         func_2022E0
label_107018:
    if (ctx->pc == 0x107018u) {
        ctx->pc = 0x107018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107014u;
        // 0x107018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10701Cu;
        goto label_10701c;
    }
    ctx->pc = 0x107014u;
    SET_GPR_U32(ctx, 31, 0x10701Cu);
    ctx->pc = 0x107018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107014u;
    // 0x107018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x107014u, 0x10701Cu)) {
        return;
    }
    ctx->pc = 0x10701Cu;
label_10701c:
    // 0x10701c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10701cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_107020:
    // 0x107020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_107024:
    // 0x107024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107028:
    // 0x107028: 0x3e00008  jr          $ra
label_10702c:
    if (ctx->pc == 0x10702Cu) {
        ctx->pc = 0x10702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107028u;
        // 0x10702c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107030u;
        goto label_fallthrough_0x107028;
    }
    ctx->pc = 0x107028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107028u;
        // 0x10702c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107028:
    ctx->pc = 0x107030u;
}
