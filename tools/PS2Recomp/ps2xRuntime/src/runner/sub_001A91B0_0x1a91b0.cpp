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

// Function: sub_001A91B0
// Address: 0x1a91b0 - 0x1a9248
void sub_001A91B0_0x1a91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A91B0_0x1a91b0");
#endif

    switch (ctx->pc) {
        case 0x1a91b0u: goto label_1a91b0;
        case 0x1a91b4u: goto label_1a91b4;
        case 0x1a91b8u: goto label_1a91b8;
        case 0x1a91bcu: goto label_1a91bc;
        case 0x1a91c0u: goto label_1a91c0;
        case 0x1a91c4u: goto label_1a91c4;
        case 0x1a91c8u: goto label_1a91c8;
        case 0x1a91ccu: goto label_1a91cc;
        case 0x1a91d0u: goto label_1a91d0;
        case 0x1a91d4u: goto label_1a91d4;
        case 0x1a91d8u: goto label_1a91d8;
        case 0x1a91dcu: goto label_1a91dc;
        case 0x1a91e0u: goto label_1a91e0;
        case 0x1a91e4u: goto label_1a91e4;
        case 0x1a91e8u: goto label_1a91e8;
        case 0x1a91ecu: goto label_1a91ec;
        case 0x1a91f0u: goto label_1a91f0;
        case 0x1a91f4u: goto label_1a91f4;
        case 0x1a91f8u: goto label_1a91f8;
        case 0x1a91fcu: goto label_1a91fc;
        case 0x1a9200u: goto label_1a9200;
        case 0x1a9204u: goto label_1a9204;
        case 0x1a9208u: goto label_1a9208;
        case 0x1a920cu: goto label_1a920c;
        case 0x1a9210u: goto label_1a9210;
        case 0x1a9214u: goto label_1a9214;
        case 0x1a9218u: goto label_1a9218;
        case 0x1a921cu: goto label_1a921c;
        case 0x1a9220u: goto label_1a9220;
        case 0x1a9224u: goto label_1a9224;
        case 0x1a9228u: goto label_1a9228;
        case 0x1a922cu: goto label_1a922c;
        case 0x1a9230u: goto label_1a9230;
        case 0x1a9234u: goto label_1a9234;
        case 0x1a9238u: goto label_1a9238;
        case 0x1a923cu: goto label_1a923c;
        case 0x1a9240u: goto label_1a9240;
        case 0x1a9244u: goto label_1a9244;
        default: break;
    }

    ctx->pc = 0x1a91b0u;

label_1a91b0:
    // 0x1a91b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a91b4:
    // 0x1a91b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a91b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a91b8:
    // 0x1a91b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a91b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a91bc:
    // 0x1a91bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a91bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a91c0:
    // 0x1a91c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a91c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1a91c4:
    // 0x1a91c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a91c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a91c8:
    // 0x1a91c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a91c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a91cc:
    // 0x1a91cc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a91ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a91d0:
    // 0x1a91d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a91d4:
    // 0x1a91d4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1a91d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1a91d8:
    // 0x1a91d8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a91dc:
    // 0x1a91dc: 0x40f809  jalr        $v0
label_1a91e0:
    if (ctx->pc == 0x1A91E0u) {
        ctx->pc = 0x1A91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91DCu;
        // 0x1a91e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91E4u;
        goto label_1a91e4;
    }
    ctx->pc = 0x1A91DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A91E4u);
        ctx->pc = 0x1A91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91DCu;
        // 0x1a91e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A91DCu, 0x1A91E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A91E4u;
label_1a91e4:
    // 0x1a91e4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a91e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a91e8:
    // 0x1a91e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a91e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a91ec:
    // 0x1a91ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a91ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a91f0:
    // 0x1a91f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a91f4:
    // 0x1a91f4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1a91f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1a91f8:
    // 0x1a91f8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a91fc:
    // 0x1a91fc: 0x40f809  jalr        $v0
label_1a9200:
    if (ctx->pc == 0x1A9200u) {
        ctx->pc = 0x1A9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91FCu;
        // 0x1a9200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9204u;
        goto label_1a9204;
    }
    ctx->pc = 0x1A91FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9204u);
        ctx->pc = 0x1A9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91FCu;
        // 0x1a9200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A91FCu, 0x1A9204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9204u;
label_1a9204:
    // 0x1a9204: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1a9204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1a9208:
    // 0x1a9208: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a9208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a920c:
    // 0x1a920c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a920cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1a9210:
    // 0x1a9210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9214:
    // 0x1a9214: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a9214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a9218:
    // 0x1a9218: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a921c:
    // 0x1a921c: 0x40f809  jalr        $v0
label_1a9220:
    if (ctx->pc == 0x1A9220u) {
        ctx->pc = 0x1A9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A921Cu;
        // 0x1a9220: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9224u;
        goto label_1a9224;
    }
    ctx->pc = 0x1A921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9224u);
        ctx->pc = 0x1A9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A921Cu;
        // 0x1a9220: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A921Cu, 0x1A9224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9224u;
label_1a9224:
    // 0x1a9224: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a9224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a9228:
    // 0x1a9228: 0xc06a492  jal         func_1A9248
label_1a922c:
    if (ctx->pc == 0x1A922Cu) {
        ctx->pc = 0x1A922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9228u;
        // 0x1a922c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9230u;
        goto label_1a9230;
    }
    ctx->pc = 0x1A9228u;
    SET_GPR_U32(ctx, 31, 0x1A9230u);
    ctx->pc = 0x1A922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9228u;
    // 0x1a922c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9248u, 0x1A9228u, 0x1A9230u)) {
        return;
    }
    ctx->pc = 0x1A9230u;
label_1a9230:
    // 0x1a9230: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a9230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9234:
    // 0x1a9234: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a9234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9238:
    // 0x1a9238: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a9238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a923c:
    // 0x1a923c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a923cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9240:
    // 0x1a9240: 0x3e00008  jr          $ra
label_1a9244:
    if (ctx->pc == 0x1A9244u) {
        ctx->pc = 0x1A9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9240u;
        // 0x1a9244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9248u;
        goto label_fallthrough_0x1a9240;
    }
    ctx->pc = 0x1A9240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9240u;
        // 0x1a9244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9240:
    ctx->pc = 0x1A9248u;
}
