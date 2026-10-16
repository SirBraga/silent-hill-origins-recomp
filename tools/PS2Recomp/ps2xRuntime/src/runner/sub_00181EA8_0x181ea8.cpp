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

// Function: sub_00181EA8
// Address: 0x181ea8 - 0x181fe0
void sub_00181EA8_0x181ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181EA8_0x181ea8");
#endif

    switch (ctx->pc) {
        case 0x181f54u: goto label_181f54;
        case 0x181f78u: goto label_181f78;
        case 0x181fa4u: goto label_181fa4;
        default: break;
    }

    ctx->pc = 0x181ea8u;

    // 0x181ea8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181eac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x181eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x181eb0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x181eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x181eb4: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x181eb8: 0x8c46fa88  lw          $a2, -0x578($v0)
    ctx->pc = 0x181eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BFA88u));
    // 0x181ebc: 0x8ea7fa84  lw          $a3, -0x57C($s5)
    ctx->pc = 0x181ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6BFA84u));
    // 0x181ec0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181ec4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x181ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x181ec8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x181ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ecc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x181eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x181ed0: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x181ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181ed4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x181ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x181ed8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x181ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x181edc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181EDCu;
    {
        const bool branch_taken_0x181edc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x181EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EDCu;
        // 0x181ee0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181edc) {
            ctx->pc = 0x181EECu;
            goto label_181eec;
        }
    }
    ctx->pc = 0x181EE4u;
    // 0x181ee4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x181ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x181ee8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x181ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_181eec:
    // 0x181eec: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x181EECu;
    {
        const bool branch_taken_0x181eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x181eec) {
            ctx->pc = 0x181EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181EECu;
            // 0x181ef0: 0x8e66000c  lw          $a2, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181F0Cu;
            goto label_181f0c;
        }
    }
    ctx->pc = 0x181EF4u;
    // 0x181ef4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x181ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x181ef8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x181ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x181efc: 0x8c62fa8c  lw          $v0, -0x574($v1)
    ctx->pc = 0x181efcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA8Cu));
    // 0x181f00: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x181f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x181f04: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x181f04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x181f08: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x181f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_181f0c:
    // 0x181f0c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x181f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x181f10: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x181F10u;
    {
        const bool branch_taken_0x181f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F10u;
        // 0x181f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f10) {
            ctx->pc = 0x181FB8u;
            goto label_181fb8;
        }
    }
    ctx->pc = 0x181F18u;
    // 0x181f18: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x181f18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x181f1c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x181f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x181f20: 0x8e82fa80  lw          $v0, -0x580($s4)
    ctx->pc = 0x181f20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA80u));
    // 0x181f24: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x181f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x181f28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x181f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x181f2c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x181f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181f30: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x181F30u;
    {
        const bool branch_taken_0x181f30 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x181F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F30u;
        // 0x181f34: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f30) {
            ctx->pc = 0x181F88u;
            goto label_181f88;
        }
    }
    ctx->pc = 0x181F38u;
    // 0x181f38: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x181f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x181f3c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x181f3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x181f40: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x181f40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x181f44: 0xf02024  and         $a0, $a3, $s0
    ctx->pc = 0x181f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 16));
    // 0x181f48: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x181f48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x181f4c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x181F4Cu;
    SET_GPR_U32(ctx, 31, 0x181F54u);
    ctx->pc = 0x181F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F4Cu;
    // 0x181f50: 0x912025  or          $a0, $a0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x181F4Cu, 0x181F54u)) {
        return;
    }
    ctx->pc = 0x181F54u;
label_181f54:
    // 0x181f54: 0x8e84fa80  lw          $a0, -0x580($s4)
    ctx->pc = 0x181f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965888)));
    // 0x181f58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x181f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f5c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x181f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x181f60: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x181f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x181f64: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x181f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x181f68: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x181f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x181f6c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x181f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x181f70: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x181F70u;
    SET_GPR_U32(ctx, 31, 0x181F78u);
    ctx->pc = 0x181F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F70u;
    // 0x181f74: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x181F70u, 0x181F78u)) {
        return;
    }
    ctx->pc = 0x181F78u;
label_181f78:
    // 0x181f78: 0x8e83fa80  lw          $v1, -0x580($s4)
    ctx->pc = 0x181f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965888)));
    // 0x181f7c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x181f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x181f80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x181F80u;
    {
        const bool branch_taken_0x181f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F80u;
        // 0x181f84: 0xaea3fa84  sw          $v1, -0x57C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294965892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f80) {
            ctx->pc = 0x181FB4u;
            goto label_181fb4;
        }
    }
    ctx->pc = 0x181F88u;
label_181f88:
    // 0x181f88: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x181f8c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x181f90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x181f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x181f94: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x181f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x181f98: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x181f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x181f9c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x181F9Cu;
    SET_GPR_U32(ctx, 31, 0x181FA4u);
    ctx->pc = 0x181FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F9Cu;
    // 0x181fa0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x181F9Cu, 0x181FA4u)) {
        return;
    }
    ctx->pc = 0x181FA4u;
label_181fa4:
    // 0x181fa4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x181fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x181fa8: 0x8ea2fa84  lw          $v0, -0x57C($s5)
    ctx->pc = 0x181fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965892)));
    // 0x181fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181fb0: 0xaea2fa84  sw          $v0, -0x57C($s5)
    ctx->pc = 0x181fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965892), GPR_U32(ctx, 2));
label_181fb4:
    // 0x181fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181fb8:
    // 0x181fb8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181fbc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181fc0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x181fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181fc8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x181fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181fcc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x181fccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x181FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FD4u;
        // 0x181fd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181FDCu;
    // 0x181fdc: 0x0  nop
    ctx->pc = 0x181fdcu;
    // NOP
    ctx->pc = 0x181fe0u;
}
