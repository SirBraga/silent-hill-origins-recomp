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

// Function: sub_00153E38
// Address: 0x153e38 - 0x153ed0
void sub_00153E38_0x153e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153E38_0x153e38");
#endif

    switch (ctx->pc) {
        case 0x153ea0u: goto label_153ea0;
        case 0x153ea8u: goto label_153ea8;
        default: break;
    }

    ctx->pc = 0x153e38u;

    // 0x153e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153e3c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x153e40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x153e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x153e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153e48: 0x8ca39168  lw          $v1, -0x6E98($a1)
    ctx->pc = 0x153e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339168u));
    // 0x153e4c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x153e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x153e50: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x153e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x153e54: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x153E54u;
    {
        const bool branch_taken_0x153e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E54u;
        // 0x153e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e54) {
            ctx->pc = 0x153EC0u;
            goto label_153ec0;
        }
    }
    ctx->pc = 0x153E5Cu;
    // 0x153e5c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x153e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x153e60: 0x54800013  bnel        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x153E60u;
    {
        const bool branch_taken_0x153e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x153e60) {
            ctx->pc = 0x153E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153E60u;
            // 0x153e64: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E68u;
    // 0x153e68: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x153e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x153e6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x153E6Cu;
    {
        const bool branch_taken_0x153e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E6Cu;
        // 0x153e70: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e6c) {
            ctx->pc = 0x153EA0u;
            goto label_153ea0;
        }
    }
    ctx->pc = 0x153E74u;
    // 0x153e74: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x153e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x153e78: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x153e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
    // 0x153e7c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x153e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x153e80: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x153E80u;
    {
        const bool branch_taken_0x153e80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153e80) {
            ctx->pc = 0x153EA0u;
            goto label_153ea0;
        }
    }
    ctx->pc = 0x153E88u;
    // 0x153e88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153e8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153E8Cu;
    {
        const bool branch_taken_0x153e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E8Cu;
        // 0x153e90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e8c) {
            ctx->pc = 0x153EA0u;
            goto label_153ea0;
        }
    }
    ctx->pc = 0x153E94u;
    // 0x153e94: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x153e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x153e98: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x153E98u;
    SET_GPR_U32(ctx, 31, 0x153EA0u);
    ctx->pc = 0x153E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E98u;
    // 0x153e9c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153E98u, 0x153EA0u)) {
        return;
    }
    ctx->pc = 0x153EA0u;
label_153ea0:
    // 0x153ea0: 0xc054c8e  jal         func_153238
    ctx->pc = 0x153EA0u;
    SET_GPR_U32(ctx, 31, 0x153EA8u);
    ctx->pc = 0x153EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153EA0u;
    // 0x153ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153238u, 0x153EA0u, 0x153EA8u)) {
        return;
    }
    ctx->pc = 0x153EA8u;
label_153ea8:
    // 0x153ea8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153EA8u;
    {
        const bool branch_taken_0x153ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EA8u;
        // 0x153eac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ea8) {
            ctx->pc = 0x153EC4u;
            goto label_153ec4;
        }
    }
    ctx->pc = 0x153EB0u;
label_153eb0:
    // 0x153eb0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x153eb4: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x153eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
    // 0x153eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153ebc: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x153ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_153ec0:
    // 0x153ec0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x153ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_153ec4:
    // 0x153ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x153EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EC8u;
        // 0x153ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153ED0u;
}
