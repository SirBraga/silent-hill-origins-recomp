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

// Function: sub_0015E520
// Address: 0x15e520 - 0x15e600
void sub_0015E520_0x15e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E520_0x15e520");
#endif

    switch (ctx->pc) {
        case 0x15e55cu: goto label_15e55c;
        case 0x15e5a8u: goto label_15e5a8;
        case 0x15e5c8u: goto label_15e5c8;
        case 0x15e5dcu: goto label_15e5dc;
        default: break;
    }

    ctx->pc = 0x15e520u;

    // 0x15e520: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15e524: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x15e524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x15e528: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x15e52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e530: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x15e530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x15e534: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15e534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e538: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x15e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x15e53c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15e53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e540: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15e544: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x15e544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e54c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e554: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15E554u;
    SET_GPR_U32(ctx, 31, 0x15E55Cu);
    ctx->pc = 0x15E558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E554u;
    // 0x15e558: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15E554u, 0x15E55Cu)) {
        return;
    }
    ctx->pc = 0x15E55Cu;
label_15e55c:
    // 0x15e55c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15e560: 0x3c070016  lui         $a3, 0x16
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)22 << 16));
    // 0x15e564: 0x8c738668  lw          $s3, -0x7998($v1)
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x338668u));
    // 0x15e568: 0x24e7e0f8  addiu       $a3, $a3, -0x1F08
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959352));
    // 0x15e56c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e570: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15e574: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15e574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x15e578: 0x2442e210  addiu       $v0, $v0, -0x1DF0
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
    // 0x15e57c: 0x2463e0d0  addiu       $v1, $v1, -0x1F30
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959312));
    // 0x15e580: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x15e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x15e584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e588: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15e588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15e58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e590: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15e590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e594: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x15e594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x15e598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e59c: 0xafb2001c  sw          $s2, 0x1C($sp)
    ctx->pc = 0x15e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
    // 0x15e5a0: 0xc0596ae  jal         func_165AB8
    ctx->pc = 0x15E5A0u;
    SET_GPR_U32(ctx, 31, 0x15E5A8u);
    ctx->pc = 0x15E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5A0u;
    // 0x15e5a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x15E5A0u, 0x15E5A8u)) {
        return;
    }
    ctx->pc = 0x15E5A8u;
label_15e5a8:
    // 0x15e5a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15e5b0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15E5B0u;
    {
        const bool branch_taken_0x15e5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5b0) {
            ctx->pc = 0x15E5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E5B0u;
            // 0x15e5b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E5E0u;
            goto label_15e5e0;
        }
    }
    ctx->pc = 0x15E5B8u;
    // 0x15e5b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e5bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5c0: 0xc0595c6  jal         func_165718
    ctx->pc = 0x15E5C0u;
    SET_GPR_U32(ctx, 31, 0x15E5C8u);
    ctx->pc = 0x15E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5C0u;
    // 0x15e5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165718u, 0x15E5C0u, 0x15E5C8u)) {
        return;
    }
    ctx->pc = 0x15E5C8u;
label_15e5c8:
    // 0x15e5c8: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E5C8u;
    {
        const bool branch_taken_0x15e5c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c8) {
            ctx->pc = 0x15E5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E5C8u;
            // 0x15e5cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E5E0u;
            goto label_15e5e0;
        }
    }
    ctx->pc = 0x15E5D0u;
    // 0x15e5d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e5d4: 0xc0596be  jal         func_165AF8
    ctx->pc = 0x15E5D4u;
    SET_GPR_U32(ctx, 31, 0x15E5DCu);
    ctx->pc = 0x15E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5D4u;
    // 0x15e5d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AF8u, 0x15E5D4u, 0x15E5DCu)) {
        return;
    }
    ctx->pc = 0x15E5DCu;
label_15e5dc:
    // 0x15e5dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e5e0:
    // 0x15e5e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x15e5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e5e4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x15e5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e5e8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x15e5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e5ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15e5ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e5f0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x15e5f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e5f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5F8u;
        // 0x15e5fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E600u;
}
