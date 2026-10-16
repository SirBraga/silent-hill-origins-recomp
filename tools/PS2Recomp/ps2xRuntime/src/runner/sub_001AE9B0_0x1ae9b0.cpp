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

// Function: sub_001AE9B0
// Address: 0x1ae9b0 - 0x1aeb78
void sub_001AE9B0_0x1ae9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE9B0_0x1ae9b0");
#endif

    switch (ctx->pc) {
        case 0x1ae9b0u: goto label_1ae9b0;
        case 0x1ae9b4u: goto label_1ae9b4;
        case 0x1ae9b8u: goto label_1ae9b8;
        case 0x1ae9bcu: goto label_1ae9bc;
        case 0x1ae9c0u: goto label_1ae9c0;
        case 0x1ae9c4u: goto label_1ae9c4;
        case 0x1ae9c8u: goto label_1ae9c8;
        case 0x1ae9ccu: goto label_1ae9cc;
        case 0x1ae9d0u: goto label_1ae9d0;
        case 0x1ae9d4u: goto label_1ae9d4;
        case 0x1ae9d8u: goto label_1ae9d8;
        case 0x1ae9dcu: goto label_1ae9dc;
        case 0x1ae9e0u: goto label_1ae9e0;
        case 0x1ae9e4u: goto label_1ae9e4;
        case 0x1ae9e8u: goto label_1ae9e8;
        case 0x1ae9ecu: goto label_1ae9ec;
        case 0x1ae9f0u: goto label_1ae9f0;
        case 0x1ae9f4u: goto label_1ae9f4;
        case 0x1ae9f8u: goto label_1ae9f8;
        case 0x1ae9fcu: goto label_1ae9fc;
        case 0x1aea00u: goto label_1aea00;
        case 0x1aea04u: goto label_1aea04;
        case 0x1aea08u: goto label_1aea08;
        case 0x1aea0cu: goto label_1aea0c;
        case 0x1aea10u: goto label_1aea10;
        case 0x1aea14u: goto label_1aea14;
        case 0x1aea18u: goto label_1aea18;
        case 0x1aea1cu: goto label_1aea1c;
        case 0x1aea20u: goto label_1aea20;
        case 0x1aea24u: goto label_1aea24;
        case 0x1aea28u: goto label_1aea28;
        case 0x1aea2cu: goto label_1aea2c;
        case 0x1aea30u: goto label_1aea30;
        case 0x1aea34u: goto label_1aea34;
        case 0x1aea38u: goto label_1aea38;
        case 0x1aea3cu: goto label_1aea3c;
        case 0x1aea40u: goto label_1aea40;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea48u: goto label_1aea48;
        case 0x1aea4cu: goto label_1aea4c;
        case 0x1aea50u: goto label_1aea50;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea58u: goto label_1aea58;
        case 0x1aea5cu: goto label_1aea5c;
        case 0x1aea60u: goto label_1aea60;
        case 0x1aea64u: goto label_1aea64;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea70u: goto label_1aea70;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea78u: goto label_1aea78;
        case 0x1aea7cu: goto label_1aea7c;
        case 0x1aea80u: goto label_1aea80;
        case 0x1aea84u: goto label_1aea84;
        case 0x1aea88u: goto label_1aea88;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea90u: goto label_1aea90;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aea9cu: goto label_1aea9c;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeaa4u: goto label_1aeaa4;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeaacu: goto label_1aeaac;
        case 0x1aeab0u: goto label_1aeab0;
        case 0x1aeab4u: goto label_1aeab4;
        case 0x1aeab8u: goto label_1aeab8;
        case 0x1aeabcu: goto label_1aeabc;
        case 0x1aeac0u: goto label_1aeac0;
        case 0x1aeac4u: goto label_1aeac4;
        case 0x1aeac8u: goto label_1aeac8;
        case 0x1aeaccu: goto label_1aeacc;
        case 0x1aead0u: goto label_1aead0;
        case 0x1aead4u: goto label_1aead4;
        case 0x1aead8u: goto label_1aead8;
        case 0x1aeadcu: goto label_1aeadc;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeae4u: goto label_1aeae4;
        case 0x1aeae8u: goto label_1aeae8;
        case 0x1aeaecu: goto label_1aeaec;
        case 0x1aeaf0u: goto label_1aeaf0;
        case 0x1aeaf4u: goto label_1aeaf4;
        case 0x1aeaf8u: goto label_1aeaf8;
        case 0x1aeafcu: goto label_1aeafc;
        case 0x1aeb00u: goto label_1aeb00;
        case 0x1aeb04u: goto label_1aeb04;
        case 0x1aeb08u: goto label_1aeb08;
        case 0x1aeb0cu: goto label_1aeb0c;
        case 0x1aeb10u: goto label_1aeb10;
        case 0x1aeb14u: goto label_1aeb14;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb1cu: goto label_1aeb1c;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb24u: goto label_1aeb24;
        case 0x1aeb28u: goto label_1aeb28;
        case 0x1aeb2cu: goto label_1aeb2c;
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb34u: goto label_1aeb34;
        case 0x1aeb38u: goto label_1aeb38;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb40u: goto label_1aeb40;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb48u: goto label_1aeb48;
        case 0x1aeb4cu: goto label_1aeb4c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb5cu: goto label_1aeb5c;
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb68u: goto label_1aeb68;
        case 0x1aeb6cu: goto label_1aeb6c;
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb74u: goto label_1aeb74;
        default: break;
    }

    ctx->pc = 0x1ae9b0u;

label_1ae9b0:
    // 0x1ae9b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ae9b4:
    // 0x1ae9b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ae9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ae9b8:
    // 0x1ae9b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ae9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ae9bc:
    // 0x1ae9bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ae9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ae9c0:
    // 0x1ae9c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9c4:
    // 0x1ae9c4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1ae9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1ae9c8:
    // 0x1ae9c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9cc:
    // 0x1ae9cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ae9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ae9d0:
    // 0x1ae9d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ae9d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1ae9d4:
    // 0x1ae9d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ae9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1ae9d8:
    // 0x1ae9d8: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_1ae9dc:
    if (ctx->pc == 0x1AE9DCu) {
        ctx->pc = 0x1AE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9D8u;
        // 0x1ae9dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE9E0u;
        goto label_1ae9e0;
    }
    ctx->pc = 0x1AE9D8u;
    {
        const bool branch_taken_0x1ae9d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9D8u;
        // 0x1ae9dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9d8) {
            ctx->pc = 0x1AE9F0u;
            goto label_1ae9f0;
        }
    }
    ctx->pc = 0x1AE9E0u;
label_1ae9e0:
    // 0x1ae9e0: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1ae9e4:
    // 0x1ae9e4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1ae9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1ae9e8:
    // 0x1ae9e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ae9ec:
    if (ctx->pc == 0x1AE9ECu) {
        ctx->pc = 0x1AE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9E8u;
        // 0x1ae9ec: 0x8c430094  lw          $v1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE9F0u;
        goto label_1ae9f0;
    }
    ctx->pc = 0x1AE9E8u;
    {
        const bool branch_taken_0x1ae9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9E8u;
        // 0x1ae9ec: 0x8c430094  lw          $v1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9e8) {
            ctx->pc = 0x1AEA0Cu;
            goto label_1aea0c;
        }
    }
    ctx->pc = 0x1AE9F0u;
label_1ae9f0:
    // 0x1ae9f0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ae9f4:
    // 0x1ae9f4: 0x16500009  bne         $s2, $s0, . + 4 + (0x9 << 2)
label_1ae9f8:
    if (ctx->pc == 0x1AE9F8u) {
        ctx->pc = 0x1AE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9F4u;
        // 0x1ae9f8: 0x2e42000e  sltiu       $v0, $s2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE9FCu;
        goto label_1ae9fc;
    }
    ctx->pc = 0x1AE9F4u;
    {
        const bool branch_taken_0x1ae9f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1AE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9F4u;
        // 0x1ae9f8: 0x2e42000e  sltiu       $v0, $s2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9f4) {
            ctx->pc = 0x1AEA1Cu;
            goto label_1aea1c;
        }
    }
    ctx->pc = 0x1AE9FCu;
label_1ae9fc:
    // 0x1ae9fc: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1ae9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1aea00:
    // 0x1aea00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1aea00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1aea04:
    // 0x1aea04: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1aea08:
    // 0x1aea08: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1aea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1aea0c:
    // 0x1aea0c: 0x60f809  jalr        $v1
label_1aea10:
    if (ctx->pc == 0x1AEA10u) {
        ctx->pc = 0x1AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA0Cu;
        // 0x1aea10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA14u;
        goto label_1aea14;
    }
    ctx->pc = 0x1AEA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AEA14u);
        ctx->pc = 0x1AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA0Cu;
        // 0x1aea10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA0Cu, 0x1AEA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEA14u;
label_1aea14:
    // 0x1aea14: 0x10000051  b           . + 4 + (0x51 << 2)
label_1aea18:
    if (ctx->pc == 0x1AEA18u) {
        ctx->pc = 0x1AEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA14u;
        // 0x1aea18: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA1Cu;
        goto label_1aea1c;
    }
    ctx->pc = 0x1AEA14u;
    {
        const bool branch_taken_0x1aea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA14u;
        // 0x1aea18: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea14) {
            ctx->pc = 0x1AEB5Cu;
            goto label_1aeb5c;
        }
    }
    ctx->pc = 0x1AEA1Cu;
label_1aea1c:
    // 0x1aea1c: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_1aea20:
    if (ctx->pc == 0x1AEA20u) {
        ctx->pc = 0x1AEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA1Cu;
        // 0x1aea20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA24u;
        goto label_1aea24;
    }
    ctx->pc = 0x1AEA1Cu;
    {
        const bool branch_taken_0x1aea1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea1c) {
            ctx->pc = 0x1AEA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEA1Cu;
            // 0x1aea20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB5Cu;
            goto label_1aeb5c;
        }
    }
    ctx->pc = 0x1AEA24u;
label_1aea24:
    // 0x1aea24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aea28:
    // 0x1aea28: 0xc06bd3c  jal         func_1AF4F0
label_1aea2c:
    if (ctx->pc == 0x1AEA2Cu) {
        ctx->pc = 0x1AEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA28u;
        // 0x1aea2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA30u;
        goto label_1aea30;
    }
    ctx->pc = 0x1AEA28u;
    SET_GPR_U32(ctx, 31, 0x1AEA30u);
    ctx->pc = 0x1AEA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA28u;
    // 0x1aea2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF4F0u, 0x1AEA28u, 0x1AEA30u)) {
        return;
    }
    ctx->pc = 0x1AEA30u;
label_1aea30:
    // 0x1aea30: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_1aea34:
    if (ctx->pc == 0x1AEA34u) {
        ctx->pc = 0x1AEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA30u;
        // 0x1aea34: 0x2501818  mult        $v1, $s2, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA38u;
        goto label_1aea38;
    }
    ctx->pc = 0x1AEA30u;
    {
        const bool branch_taken_0x1aea30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA30u;
        // 0x1aea34: 0x2501818  mult        $v1, $s2, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea30) {
            ctx->pc = 0x1AEB58u;
            goto label_1aeb58;
        }
    }
    ctx->pc = 0x1AEA38u;
label_1aea38:
    // 0x1aea38: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1aea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1aea3c:
    // 0x1aea3c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1aea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1aea40:
    // 0x1aea40: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
label_1aea44:
    if (ctx->pc == 0x1AEA44u) {
        ctx->pc = 0x1AEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA40u;
        // 0x1aea44: 0x8e260040  lw          $a2, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA48u;
        goto label_1aea48;
    }
    ctx->pc = 0x1AEA40u;
    {
        const bool branch_taken_0x1aea40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea40) {
            ctx->pc = 0x1AEA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEA40u;
            // 0x1aea44: 0x8e260040  lw          $a2, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB18u;
            goto label_1aeb18;
        }
    }
    ctx->pc = 0x1AEA48u;
label_1aea48:
    // 0x1aea48: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1aea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1aea4c:
    // 0x1aea4c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1aea50:
    if (ctx->pc == 0x1AEA50u) {
        ctx->pc = 0x1AEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA4Cu;
        // 0x1aea50: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA54u;
        goto label_1aea54;
    }
    ctx->pc = 0x1AEA4Cu;
    {
        const bool branch_taken_0x1aea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA4Cu;
        // 0x1aea50: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea4c) {
            ctx->pc = 0x1AEB14u;
            goto label_1aeb14;
        }
    }
    ctx->pc = 0x1AEA54u;
label_1aea54:
    // 0x1aea54: 0x10000011  b           . + 4 + (0x11 << 2)
label_1aea58:
    if (ctx->pc == 0x1AEA58u) {
        ctx->pc = 0x1AEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA54u;
        // 0x1aea58: 0x2a530010  slti        $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA5Cu;
        goto label_1aea5c;
    }
    ctx->pc = 0x1AEA54u;
    {
        const bool branch_taken_0x1aea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA54u;
        // 0x1aea58: 0x2a530010  slti        $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea54) {
            ctx->pc = 0x1AEA9Cu;
            goto label_1aea9c;
        }
    }
    ctx->pc = 0x1AEA5Cu;
label_1aea5c:
    // 0x1aea5c: 0x0  nop
    ctx->pc = 0x1aea5cu;
    // NOP
label_1aea60:
    // 0x1aea60: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1aea60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1aea64:
    // 0x1aea64: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
label_1aea68:
    // 0x1aea68: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1aea68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1aea6c:
    // 0x1aea6c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_1aea70:
    if (ctx->pc == 0x1AEA70u) {
        ctx->pc = 0x1AEA74u;
        goto label_1aea74;
    }
    ctx->pc = 0x1AEA6Cu;
    {
        const bool branch_taken_0x1aea6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1aea6c) {
            ctx->pc = 0x1AEA8Cu;
            goto label_1aea8c;
        }
    }
    ctx->pc = 0x1AEA74u;
label_1aea74:
    // 0x1aea74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1aea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1aea78:
    // 0x1aea78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aea7c:
    if (ctx->pc == 0x1AEA7Cu) {
        ctx->pc = 0x1AEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA78u;
        // 0x1aea7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA80u;
        goto label_1aea80;
    }
    ctx->pc = 0x1AEA78u;
    {
        const bool branch_taken_0x1aea78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA78u;
        // 0x1aea7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea78) {
            ctx->pc = 0x1AEA8Cu;
            goto label_1aea8c;
        }
    }
    ctx->pc = 0x1AEA80u;
label_1aea80:
    // 0x1aea80: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1aea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1aea84:
    // 0x1aea84: 0xc07fd18  jal         func_1FF460
label_1aea88:
    if (ctx->pc == 0x1AEA88u) {
        ctx->pc = 0x1AEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA84u;
        // 0x1aea88: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA8Cu;
        goto label_1aea8c;
    }
    ctx->pc = 0x1AEA84u;
    SET_GPR_U32(ctx, 31, 0x1AEA8Cu);
    ctx->pc = 0x1AEA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA84u;
    // 0x1aea88: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AEA84u, 0x1AEA8Cu)) {
        return;
    }
    ctx->pc = 0x1AEA8Cu;
label_1aea8c:
    // 0x1aea8c: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
label_1aea90:
    if (ctx->pc == 0x1AEA90u) {
        ctx->pc = 0x1AEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA8Cu;
        // 0x1aea90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA94u;
        goto label_1aea94;
    }
    ctx->pc = 0x1AEA8Cu;
    {
        const bool branch_taken_0x1aea8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea8c) {
            ctx->pc = 0x1AEA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEA8Cu;
            // 0x1aea90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB5Cu;
            goto label_1aeb5c;
        }
    }
    ctx->pc = 0x1AEA94u;
label_1aea94:
    // 0x1aea94: 0x52110031  beql        $s0, $s1, . + 4 + (0x31 << 2)
label_1aea98:
    if (ctx->pc == 0x1AEA98u) {
        ctx->pc = 0x1AEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA94u;
        // 0x1aea98: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA9Cu;
        goto label_1aea9c;
    }
    ctx->pc = 0x1AEA94u;
    {
        const bool branch_taken_0x1aea94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x1aea94) {
            ctx->pc = 0x1AEA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEA94u;
            // 0x1aea98: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB5Cu;
            goto label_1aeb5c;
        }
    }
    ctx->pc = 0x1AEA9Cu;
label_1aea9c:
    // 0x1aea9c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1aeaa0:
    if (ctx->pc == 0x1AEAA0u) {
        ctx->pc = 0x1AEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA9Cu;
        // 0x1aeaa0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAA4u;
        goto label_1aeaa4;
    }
    ctx->pc = 0x1AEA9Cu;
    {
        const bool branch_taken_0x1aea9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA9Cu;
        // 0x1aeaa0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea9c) {
            ctx->pc = 0x1AEAB4u;
            goto label_1aeab4;
        }
    }
    ctx->pc = 0x1AEAA4u;
label_1aeaa4:
    // 0x1aeaa4: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x1aeaa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1aeaa8:
    // 0x1aeaa8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1aeaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1aeaac:
    // 0x1aeaac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aeab0:
    if (ctx->pc == 0x1AEAB0u) {
        ctx->pc = 0x1AEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAACu;
        // 0x1aeab0: 0x8c450054  lw          $a1, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAB4u;
        goto label_1aeab4;
    }
    ctx->pc = 0x1AEAACu;
    {
        const bool branch_taken_0x1aeaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAACu;
        // 0x1aeab0: 0x8c450054  lw          $a1, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeaac) {
            ctx->pc = 0x1AEAB8u;
            goto label_1aeab8;
        }
    }
    ctx->pc = 0x1AEAB4u;
label_1aeab4:
    // 0x1aeab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aeab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeab8:
    // 0x1aeab8: 0xc06c994  jal         func_1B2650
label_1aeabc:
    if (ctx->pc == 0x1AEABCu) {
        ctx->pc = 0x1AEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAB8u;
        // 0x1aeabc: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAC0u;
        goto label_1aeac0;
    }
    ctx->pc = 0x1AEAB8u;
    SET_GPR_U32(ctx, 31, 0x1AEAC0u);
    ctx->pc = 0x1AEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAB8u;
    // 0x1aeabc: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1AEAB8u, 0x1AEAC0u)) {
        return;
    }
    ctx->pc = 0x1AEAC0u;
label_1aeac0:
    // 0x1aeac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aeac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aeac4:
    // 0x1aeac4: 0x1200ffe6  beqz        $s0, . + 4 + (-0x1A << 2)
label_1aeac8:
    if (ctx->pc == 0x1AEAC8u) {
        ctx->pc = 0x1AEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAC4u;
        // 0x1aeac8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEACCu;
        goto label_1aeacc;
    }
    ctx->pc = 0x1AEAC4u;
    {
        const bool branch_taken_0x1aeac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAC4u;
        // 0x1aeac8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeac4) {
            ctx->pc = 0x1AEA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea60;
        }
    }
    ctx->pc = 0x1AEACCu;
label_1aeacc:
    // 0x1aeacc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1aead0:
    // 0x1aead0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1aead4:
    if (ctx->pc == 0x1AEAD4u) {
        ctx->pc = 0x1AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAD0u;
        // 0x1aead4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAD8u;
        goto label_1aead8;
    }
    ctx->pc = 0x1AEAD0u;
    {
        const bool branch_taken_0x1aead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAD0u;
        // 0x1aead4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aead0) {
            ctx->pc = 0x1AEA8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea8c;
        }
    }
    ctx->pc = 0x1AEAD8u;
label_1aead8:
    // 0x1aead8: 0x8e030258  lw          $v1, 0x258($s0)
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1aeadc:
    // 0x1aeadc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aeae0:
    // 0x1aeae0: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1aeae4:
    // 0x1aeae4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1aeae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1aeae8:
    // 0x1aeae8: 0x40f809  jalr        $v0
label_1aeaec:
    if (ctx->pc == 0x1AEAECu) {
        ctx->pc = 0x1AEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAE8u;
        // 0x1aeaec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAF0u;
        goto label_1aeaf0;
    }
    ctx->pc = 0x1AEAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEAF0u);
        ctx->pc = 0x1AEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAE8u;
        // 0x1aeaec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEAE8u, 0x1AEAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEAF0u;
label_1aeaf0:
    // 0x1aeaf0: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1aeaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1aeaf4:
    // 0x1aeaf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1aeaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aeaf8:
    // 0x1aeaf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeafc:
    // 0x1aeafc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1aeb00:
    // 0x1aeb00: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1aeb04:
    // 0x1aeb04: 0x40f809  jalr        $v0
label_1aeb08:
    if (ctx->pc == 0x1AEB08u) {
        ctx->pc = 0x1AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB04u;
        // 0x1aeb08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB0Cu;
        goto label_1aeb0c;
    }
    ctx->pc = 0x1AEB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEB0Cu);
        ctx->pc = 0x1AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB04u;
        // 0x1aeb08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB04u, 0x1AEB0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEB0Cu;
label_1aeb0c:
    // 0x1aeb0c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1aeb10:
    if (ctx->pc == 0x1AEB10u) {
        ctx->pc = 0x1AEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB0Cu;
        // 0x1aeb10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB14u;
        goto label_1aeb14;
    }
    ctx->pc = 0x1AEB0Cu;
    {
        const bool branch_taken_0x1aeb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB0Cu;
        // 0x1aeb10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb0c) {
            ctx->pc = 0x1AEB5Cu;
            goto label_1aeb5c;
        }
    }
    ctx->pc = 0x1AEB14u;
label_1aeb14:
    // 0x1aeb14: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x1aeb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1aeb18:
    // 0x1aeb18: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1aeb1c:
    if (ctx->pc == 0x1AEB1Cu) {
        ctx->pc = 0x1AEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB18u;
        // 0x1aeb1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB20u;
        goto label_1aeb20;
    }
    ctx->pc = 0x1AEB18u;
    {
        const bool branch_taken_0x1aeb18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB18u;
        // 0x1aeb1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb18) {
            ctx->pc = 0x1AEB40u;
            goto label_1aeb40;
        }
    }
    ctx->pc = 0x1AEB20u;
label_1aeb20:
    // 0x1aeb20: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1aeb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1aeb24:
    // 0x1aeb24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1aeb24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1aeb28:
    // 0x1aeb28: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1aeb28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1aeb2c:
    // 0x1aeb2c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1aeb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1aeb30:
    // 0x1aeb30: 0x60f809  jalr        $v1
label_1aeb34:
    if (ctx->pc == 0x1AEB34u) {
        ctx->pc = 0x1AEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB30u;
        // 0x1aeb34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB38u;
        goto label_1aeb38;
    }
    ctx->pc = 0x1AEB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AEB38u);
        ctx->pc = 0x1AEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB30u;
        // 0x1aeb34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB30u, 0x1AEB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEB38u;
label_1aeb38:
    // 0x1aeb38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1aeb3c:
    if (ctx->pc == 0x1AEB3Cu) {
        ctx->pc = 0x1AEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB38u;
        // 0x1aeb3c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB40u;
        goto label_1aeb40;
    }
    ctx->pc = 0x1AEB38u;
    {
        const bool branch_taken_0x1aeb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB38u;
        // 0x1aeb3c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb38) {
            ctx->pc = 0x1AEB5Cu;
            goto label_1aeb5c;
        }
    }
    ctx->pc = 0x1AEB40u;
label_1aeb40:
    // 0x1aeb40: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1aeb44:
    // 0x1aeb44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aeb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb48:
    // 0x1aeb48: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1aeb4c:
    // 0x1aeb4c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1aeb50:
    // 0x1aeb50: 0x60f809  jalr        $v1
label_1aeb54:
    if (ctx->pc == 0x1AEB54u) {
        ctx->pc = 0x1AEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB50u;
        // 0x1aeb54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB58u;
        goto label_1aeb58;
    }
    ctx->pc = 0x1AEB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AEB58u);
        ctx->pc = 0x1AEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB50u;
        // 0x1aeb54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB50u, 0x1AEB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEB58u;
label_1aeb58:
    // 0x1aeb58: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1aeb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aeb5c:
    // 0x1aeb5c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1aeb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aeb60:
    // 0x1aeb60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1aeb60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aeb64:
    // 0x1aeb64: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1aeb64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aeb68:
    // 0x1aeb68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aeb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aeb6c:
    // 0x1aeb6c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1aeb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aeb70:
    // 0x1aeb70: 0x3e00008  jr          $ra
label_1aeb74:
    if (ctx->pc == 0x1AEB74u) {
        ctx->pc = 0x1AEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB70u;
        // 0x1aeb74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB78u;
        goto label_fallthrough_0x1aeb70;
    }
    ctx->pc = 0x1AEB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB70u;
        // 0x1aeb74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aeb70:
    ctx->pc = 0x1AEB78u;
}
