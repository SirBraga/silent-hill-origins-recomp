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

// Function: sub_00203EA8
// Address: 0x203ea8 - 0x203f88
void sub_00203EA8_0x203ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203EA8_0x203ea8");
#endif

    switch (ctx->pc) {
        case 0x203ea8u: goto label_203ea8;
        case 0x203eacu: goto label_203eac;
        case 0x203eb0u: goto label_203eb0;
        case 0x203eb4u: goto label_203eb4;
        case 0x203eb8u: goto label_203eb8;
        case 0x203ebcu: goto label_203ebc;
        case 0x203ec0u: goto label_203ec0;
        case 0x203ec4u: goto label_203ec4;
        case 0x203ec8u: goto label_203ec8;
        case 0x203eccu: goto label_203ecc;
        case 0x203ed0u: goto label_203ed0;
        case 0x203ed4u: goto label_203ed4;
        case 0x203ed8u: goto label_203ed8;
        case 0x203edcu: goto label_203edc;
        case 0x203ee0u: goto label_203ee0;
        case 0x203ee4u: goto label_203ee4;
        case 0x203ee8u: goto label_203ee8;
        case 0x203eecu: goto label_203eec;
        case 0x203ef0u: goto label_203ef0;
        case 0x203ef4u: goto label_203ef4;
        case 0x203ef8u: goto label_203ef8;
        case 0x203efcu: goto label_203efc;
        case 0x203f00u: goto label_203f00;
        case 0x203f04u: goto label_203f04;
        case 0x203f08u: goto label_203f08;
        case 0x203f0cu: goto label_203f0c;
        case 0x203f10u: goto label_203f10;
        case 0x203f14u: goto label_203f14;
        case 0x203f18u: goto label_203f18;
        case 0x203f1cu: goto label_203f1c;
        case 0x203f20u: goto label_203f20;
        case 0x203f24u: goto label_203f24;
        case 0x203f28u: goto label_203f28;
        case 0x203f2cu: goto label_203f2c;
        case 0x203f30u: goto label_203f30;
        case 0x203f34u: goto label_203f34;
        case 0x203f38u: goto label_203f38;
        case 0x203f3cu: goto label_203f3c;
        case 0x203f40u: goto label_203f40;
        case 0x203f44u: goto label_203f44;
        case 0x203f48u: goto label_203f48;
        case 0x203f4cu: goto label_203f4c;
        case 0x203f50u: goto label_203f50;
        case 0x203f54u: goto label_203f54;
        case 0x203f58u: goto label_203f58;
        case 0x203f5cu: goto label_203f5c;
        case 0x203f60u: goto label_203f60;
        case 0x203f64u: goto label_203f64;
        case 0x203f68u: goto label_203f68;
        case 0x203f6cu: goto label_203f6c;
        case 0x203f70u: goto label_203f70;
        case 0x203f74u: goto label_203f74;
        case 0x203f78u: goto label_203f78;
        case 0x203f7cu: goto label_203f7c;
        case 0x203f80u: goto label_203f80;
        case 0x203f84u: goto label_203f84;
        default: break;
    }

    ctx->pc = 0x203ea8u;

label_203ea8:
    // 0x203ea8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x203ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_203eac:
    // 0x203eac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x203eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_203eb0:
    // 0x203eb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x203eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_203eb4:
    // 0x203eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203eb8:
    // 0x203eb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x203eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_203ebc:
    // 0x203ebc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x203ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203ec0:
    // 0x203ec0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x203ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_203ec4:
    // 0x203ec4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x203ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_203ec8:
    // 0x203ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203ecc:
    // 0x203ecc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x203eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_203ed0:
    // 0x203ed0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_203ed4:
    if (ctx->pc == 0x203ED4u) {
        ctx->pc = 0x203ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED0u;
        // 0x203ed4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203ED8u;
        goto label_203ed8;
    }
    ctx->pc = 0x203ED0u;
    {
        const bool branch_taken_0x203ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED0u;
        // 0x203ed4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ed0) {
            ctx->pc = 0x203EE4u;
            goto label_203ee4;
        }
    }
    ctx->pc = 0x203ED8u;
label_203ed8:
    // 0x203ed8: 0xc080faa  jal         func_203EA8
label_203edc:
    if (ctx->pc == 0x203EDCu) {
        ctx->pc = 0x203EE0u;
        goto label_203ee0;
    }
    ctx->pc = 0x203ED8u;
    SET_GPR_U32(ctx, 31, 0x203EE0u);
    ctx->pc = 0x203EA8u;
    goto label_203ea8;
    ctx->pc = 0x203EE0u;
label_203ee0:
    // 0x203ee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x203ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203ee4:
    // 0x203ee4: 0x1640001f  bnez        $s2, . + 4 + (0x1F << 2)
label_203ee8:
    if (ctx->pc == 0x203EE8u) {
        ctx->pc = 0x203EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE4u;
        // 0x203ee8: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203EECu;
        goto label_203eec;
    }
    ctx->pc = 0x203EE4u;
    {
        const bool branch_taken_0x203ee4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x203EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE4u;
        // 0x203ee8: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee4) {
            ctx->pc = 0x203F64u;
            goto label_203f64;
        }
    }
    ctx->pc = 0x203EECu;
label_203eec:
    // 0x203eec: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_203ef0:
    if (ctx->pc == 0x203EF0u) {
        ctx->pc = 0x203EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EECu;
        // 0x203ef0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203EF4u;
        goto label_203ef4;
    }
    ctx->pc = 0x203EECu;
    {
        const bool branch_taken_0x203eec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EECu;
        // 0x203ef0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eec) {
            ctx->pc = 0x203F64u;
            goto label_203f64;
        }
    }
    ctx->pc = 0x203EF4u;
label_203ef4:
    // 0x203ef4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x203ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203ef8:
    // 0x203ef8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203efc:
    // 0x203efc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x203efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_203f00:
    // 0x203f00: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x203f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_203f04:
    // 0x203f04: 0x40f809  jalr        $v0
label_203f08:
    if (ctx->pc == 0x203F08u) {
        ctx->pc = 0x203F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F04u;
        // 0x203f08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F0Cu;
        goto label_203f0c;
    }
    ctx->pc = 0x203F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203F0Cu);
        ctx->pc = 0x203F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F04u;
        // 0x203f08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F04u, 0x203F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203F0Cu;
label_203f0c:
    // 0x203f0c: 0x54540011  bnel        $v0, $s4, . + 4 + (0x11 << 2)
label_203f10:
    if (ctx->pc == 0x203F10u) {
        ctx->pc = 0x203F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F0Cu;
        // 0x203f10: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F14u;
        goto label_203f14;
    }
    ctx->pc = 0x203F0Cu;
    {
        const bool branch_taken_0x203f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x203f0c) {
            ctx->pc = 0x203F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F0Cu;
            // 0x203f10: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F54u;
            goto label_203f54;
        }
    }
    ctx->pc = 0x203F14u;
label_203f14:
    // 0x203f14: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x203f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203f18:
    // 0x203f18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203f1c:
    // 0x203f1c: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_203f20:
    // 0x203f20: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x203f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_203f24:
    // 0x203f24: 0x40f809  jalr        $v0
label_203f28:
    if (ctx->pc == 0x203F28u) {
        ctx->pc = 0x203F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F24u;
        // 0x203f28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F2Cu;
        goto label_203f2c;
    }
    ctx->pc = 0x203F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203F2Cu);
        ctx->pc = 0x203F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F24u;
        // 0x203f28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F24u, 0x203F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203F2Cu;
label_203f2c:
    // 0x203f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f30:
    // 0x203f30: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_203f34:
    if (ctx->pc == 0x203F34u) {
        ctx->pc = 0x203F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F30u;
        // 0x203f34: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F38u;
        goto label_203f38;
    }
    ctx->pc = 0x203F30u;
    {
        const bool branch_taken_0x203f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f30) {
            ctx->pc = 0x203F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F30u;
            // 0x203f34: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F54u;
            goto label_203f54;
        }
    }
    ctx->pc = 0x203F38u;
label_203f38:
    // 0x203f38: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_203f3c:
    // 0x203f3c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_203f40:
    if (ctx->pc == 0x203F40u) {
        ctx->pc = 0x203F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F3Cu;
        // 0x203f40: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F44u;
        goto label_203f44;
    }
    ctx->pc = 0x203F3Cu;
    {
        const bool branch_taken_0x203f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f3c) {
            ctx->pc = 0x203F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F3Cu;
            // 0x203f40: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F54u;
            goto label_203f54;
        }
    }
    ctx->pc = 0x203F44u;
label_203f44:
    // 0x203f44: 0xc0c5c96  jal         func_317258
label_203f48:
    if (ctx->pc == 0x203F48u) {
        ctx->pc = 0x203F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F44u;
        // 0x203f48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F4Cu;
        goto label_203f4c;
    }
    ctx->pc = 0x203F44u;
    SET_GPR_U32(ctx, 31, 0x203F4Cu);
    ctx->pc = 0x203F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F44u;
    // 0x203f48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x203F44u, 0x203F4Cu)) {
        return;
    }
    ctx->pc = 0x203F4Cu;
label_203f4c:
    // 0x203f4c: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x203f4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
label_203f50:
    // 0x203f50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x203f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_203f54:
    // 0x203f54: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_203f58:
    if (ctx->pc == 0x203F58u) {
        ctx->pc = 0x203F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F54u;
        // 0x203f58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F5Cu;
        goto label_203f5c;
    }
    ctx->pc = 0x203F54u;
    {
        const bool branch_taken_0x203f54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x203F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F54u;
        // 0x203f58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f54) {
            ctx->pc = 0x203F64u;
            goto label_203f64;
        }
    }
    ctx->pc = 0x203F5Cu;
label_203f5c:
    // 0x203f5c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_203f60:
    if (ctx->pc == 0x203F60u) {
        ctx->pc = 0x203F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F5Cu;
        // 0x203f60: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F64u;
        goto label_203f64;
    }
    ctx->pc = 0x203F5Cu;
    {
        const bool branch_taken_0x203f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203f5c) {
            ctx->pc = 0x203F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F5Cu;
            // 0x203f60: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203ef8;
        }
    }
    ctx->pc = 0x203F64u;
label_203f64:
    // 0x203f64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x203f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203f68:
    // 0x203f68: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x203f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_203f6c:
    // 0x203f6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x203f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_203f70:
    // 0x203f70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x203f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203f74:
    // 0x203f74: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x203f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203f78:
    // 0x203f78: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x203f78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203f7c:
    // 0x203f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203f80:
    // 0x203f80: 0x3e00008  jr          $ra
label_203f84:
    if (ctx->pc == 0x203F84u) {
        ctx->pc = 0x203F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F80u;
        // 0x203f84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F88u;
        goto label_fallthrough_0x203f80;
    }
    ctx->pc = 0x203F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F80u;
        // 0x203f84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203f80:
    ctx->pc = 0x203F88u;
}
