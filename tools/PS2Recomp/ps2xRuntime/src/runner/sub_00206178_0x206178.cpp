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

// Function: sub_00206178
// Address: 0x206178 - 0x206238
void sub_00206178_0x206178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206178_0x206178");
#endif

    switch (ctx->pc) {
        case 0x2061b4u: goto label_2061b4;
        case 0x2061c8u: goto label_2061c8;
        case 0x2061dcu: goto label_2061dc;
        default: break;
    }

    ctx->pc = 0x206178u;

    // 0x206178: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x206178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20617c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x206180: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x206180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x206184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206188: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x206188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x20618c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20618cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206190: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x206190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x206194: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x206194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206198: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x206198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x20619c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2061a0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2061a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2061a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2061a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2061a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2061a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2061ac: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2061ACu;
    SET_GPR_U32(ctx, 31, 0x2061B4u);
    ctx->pc = 0x2061B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061ACu;
    // 0x2061b0: 0x3c150070  lui         $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2061ACu, 0x2061B4u)) {
        return;
    }
    ctx->pc = 0x2061B4u;
label_2061b4:
    // 0x2061b4: 0x26b42d18  addiu       $s4, $s5, 0x2D18
    ctx->pc = 0x2061b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 11544));
    // 0x2061b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2061b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2061bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2061bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2061c0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x2061C0u;
    SET_GPR_U32(ctx, 31, 0x2061C8u);
    ctx->pc = 0x2061C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061C0u;
    // 0x2061c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x2061C0u, 0x2061C8u)) {
        return;
    }
    ctx->pc = 0x2061C8u;
label_2061c8:
    // 0x2061c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2061c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2061cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2061ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2061d0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2061d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2061d4: 0xc080858  jal         func_202160
    ctx->pc = 0x2061D4u;
    SET_GPR_U32(ctx, 31, 0x2061DCu);
    ctx->pc = 0x2061D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061D4u;
    // 0x2061d8: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x2061D4u, 0x2061DCu)) {
        return;
    }
    ctx->pc = 0x2061DCu;
label_2061dc:
    // 0x2061dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2061dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2061e0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2061e4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2061e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2061e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2061e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2061ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2061ECu;
    {
        const bool branch_taken_0x2061ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061ECu;
        // 0x2061f0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061ec) {
            ctx->pc = 0x2061F8u;
            goto label_2061f8;
        }
    }
    ctx->pc = 0x2061F4u;
    // 0x2061f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2061f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2061f8:
    // 0x2061f8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2061f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2061fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2061FCu;
    {
        const bool branch_taken_0x2061fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2061fc) {
            ctx->pc = 0x206200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2061FCu;
            // 0x206200: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206204u;
            goto label_206204;
        }
    }
    ctx->pc = 0x206204u;
label_206204:
    // 0x206204: 0x8ea22d18  lw          $v0, 0x2D18($s5)
    ctx->pc = 0x206204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11544)));
    // 0x206208: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x206208u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x20620c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206210: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x206210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206214: 0xaea22d18  sw          $v0, 0x2D18($s5)
    ctx->pc = 0x206214u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 11544), GPR_U32(ctx, 2));
    // 0x206218: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x206218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20621c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20621cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206220: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x206220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206224: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x206224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206228: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x206228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20622c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20622cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206230: 0x3e00008  jr          $ra
    ctx->pc = 0x206230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206230u;
        // 0x206234: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206238u;
}
