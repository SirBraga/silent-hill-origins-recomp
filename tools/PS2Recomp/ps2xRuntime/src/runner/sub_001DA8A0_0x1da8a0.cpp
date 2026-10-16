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

// Function: sub_001DA8A0
// Address: 0x1da8a0 - 0x1da998
void sub_001DA8A0_0x1da8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA8A0_0x1da8a0");
#endif

    switch (ctx->pc) {
        case 0x1da8c8u: goto label_1da8c8;
        case 0x1da8e0u: goto label_1da8e0;
        case 0x1da8f8u: goto label_1da8f8;
        case 0x1da900u: goto label_1da900;
        case 0x1da90cu: goto label_1da90c;
        case 0x1da918u: goto label_1da918;
        case 0x1da924u: goto label_1da924;
        case 0x1da934u: goto label_1da934;
        case 0x1da948u: goto label_1da948;
        case 0x1da964u: goto label_1da964;
        case 0x1da978u: goto label_1da978;
        default: break;
    }

    ctx->pc = 0x1da8a0u;

    // 0x1da8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1da8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da8a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1da8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1da8a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1da8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1da8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da8b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1da8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1da8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1da8bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da8c0: 0xc08949c  jal         func_225270
    ctx->pc = 0x1DA8C0u;
    SET_GPR_U32(ctx, 31, 0x1DA8C8u);
    ctx->pc = 0x1DA8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8C0u;
    // 0x1da8c4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225270u, 0x1DA8C0u, 0x1DA8C8u)) {
        return;
    }
    ctx->pc = 0x1DA8C8u;
label_1da8c8:
    // 0x1da8c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1da8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1da8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d8: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1DA8D8u;
    SET_GPR_U32(ctx, 31, 0x1DA8E0u);
    ctx->pc = 0x1DA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8D8u;
    // 0x1da8dc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1DA8D8u, 0x1DA8E0u)) {
        return;
    }
    ctx->pc = 0x1DA8E0u;
label_1da8e0:
    // 0x1da8e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1da8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1da8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f0: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1DA8F0u;
    SET_GPR_U32(ctx, 31, 0x1DA8F8u);
    ctx->pc = 0x1DA8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8F0u;
    // 0x1da8f4: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1DA8F0u, 0x1DA8F8u)) {
        return;
    }
    ctx->pc = 0x1DA8F8u;
label_1da8f8:
    // 0x1da8f8: 0xc089892  jal         func_226248
    ctx->pc = 0x1DA8F8u;
    SET_GPR_U32(ctx, 31, 0x1DA900u);
    ctx->pc = 0x1DA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8F8u;
    // 0x1da8fc: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1DA8F8u, 0x1DA900u)) {
        return;
    }
    ctx->pc = 0x1DA900u;
label_1da900:
    // 0x1da900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da904: 0xc089a04  jal         func_226810
    ctx->pc = 0x1DA904u;
    SET_GPR_U32(ctx, 31, 0x1DA90Cu);
    ctx->pc = 0x1DA908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA904u;
    // 0x1da908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1DA904u, 0x1DA90Cu)) {
        return;
    }
    ctx->pc = 0x1DA90Cu;
label_1da90c:
    // 0x1da90c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da910: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1DA910u;
    SET_GPR_U32(ctx, 31, 0x1DA918u);
    ctx->pc = 0x1DA914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA910u;
    // 0x1da914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1DA910u, 0x1DA918u)) {
        return;
    }
    ctx->pc = 0x1DA918u;
label_1da918:
    // 0x1da918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1da918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da91c: 0xc089436  jal         func_2250D8
    ctx->pc = 0x1DA91Cu;
    SET_GPR_U32(ctx, 31, 0x1DA924u);
    ctx->pc = 0x1DA920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA91Cu;
    // 0x1da920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2250D8u, 0x1DA91Cu, 0x1DA924u)) {
        return;
    }
    ctx->pc = 0x1DA924u;
label_1da924:
    // 0x1da924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1da924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1da928: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1da928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da92c: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x1DA92Cu;
    SET_GPR_U32(ctx, 31, 0x1DA934u);
    ctx->pc = 0x1DA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA92Cu;
    // 0x1da930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x1DA92Cu, 0x1DA934u)) {
        return;
    }
    ctx->pc = 0x1DA934u;
label_1da934:
    // 0x1da934: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x1da934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x1da938: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1da938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1da93c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1da93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da940: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x1DA940u;
    SET_GPR_U32(ctx, 31, 0x1DA948u);
    ctx->pc = 0x1DA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA940u;
    // 0x1da944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x1DA940u, 0x1DA948u)) {
        return;
    }
    ctx->pc = 0x1DA948u;
label_1da948:
    // 0x1da948: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1DA948u;
    {
        const bool branch_taken_0x1da948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA948u;
        // 0x1da94c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da948) {
            ctx->pc = 0x1DA97Cu;
            goto label_1da97c;
        }
    }
    ctx->pc = 0x1DA950u;
    // 0x1da950: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1da950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1da954: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1da954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1da958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1da958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da95c: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x1DA95Cu;
    SET_GPR_U32(ctx, 31, 0x1DA964u);
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1DA95Cu, 0x1DA964u)) {
        return;
    }
    ctx->pc = 0x1DA964u;
label_1da964:
    // 0x1da964: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1da964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1da968: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1da968u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1da96c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1da96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da970: 0xc076a66  jal         func_1DA998
    ctx->pc = 0x1DA970u;
    SET_GPR_U32(ctx, 31, 0x1DA978u);
    ctx->pc = 0x1DA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA970u;
    // 0x1da974: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA998u, 0x1DA970u, 0x1DA978u)) {
        return;
    }
    ctx->pc = 0x1DA978u;
label_1da978:
    // 0x1da978: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1da978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da97c:
    // 0x1da97c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1da97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da980: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1da980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da988: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1da988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da990: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA990u;
        // 0x1da994: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA998u;
}
