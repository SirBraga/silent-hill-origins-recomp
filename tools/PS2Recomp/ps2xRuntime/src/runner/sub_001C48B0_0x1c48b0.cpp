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

// Function: sub_001C48B0
// Address: 0x1c48b0 - 0x1c4ad8
void sub_001C48B0_0x1c48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C48B0_0x1c48b0");
#endif

    switch (ctx->pc) {
        case 0x1c48f4u: goto label_1c48f4;
        case 0x1c494cu: goto label_1c494c;
        case 0x1c495cu: goto label_1c495c;
        case 0x1c4974u: goto label_1c4974;
        case 0x1c4990u: goto label_1c4990;
        case 0x1c499cu: goto label_1c499c;
        case 0x1c49c4u: goto label_1c49c4;
        case 0x1c49d8u: goto label_1c49d8;
        case 0x1c49ecu: goto label_1c49ec;
        case 0x1c4a00u: goto label_1c4a00;
        case 0x1c4a14u: goto label_1c4a14;
        case 0x1c4a28u: goto label_1c4a28;
        case 0x1c4a3cu: goto label_1c4a3c;
        case 0x1c4a50u: goto label_1c4a50;
        case 0x1c4a64u: goto label_1c4a64;
        case 0x1c4a7cu: goto label_1c4a7c;
        case 0x1c4a90u: goto label_1c4a90;
        case 0x1c4aa4u: goto label_1c4aa4;
        default: break;
    }

    ctx->pc = 0x1c48b0u;

    // 0x1c48b0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1c48b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x1c48b4: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x1c48b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x1c48b8: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x1c48b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
    // 0x1c48bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c48bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c48c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48c4: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x1c48c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
    // 0x1c48c8: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x1c48c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
    // 0x1c48cc: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x1c48ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
    // 0x1c48d0: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x1c48d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
    // 0x1c48d4: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1c48d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
    // 0x1c48d8: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x1c48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
    // 0x1c48dc: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x1c48dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x1c48e0: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x1c48e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x1c48e4: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x1c48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
    // 0x1c48e8: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x1c48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x1c48ec: 0xc06d512  jal         func_1B5448
    ctx->pc = 0x1C48ECu;
    SET_GPR_U32(ctx, 31, 0x1C48F4u);
    ctx->pc = 0x1C48F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48ECu;
    // 0x1c48f0: 0x3c1e006a  lui         $fp, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5448u, 0x1C48ECu, 0x1C48F4u)) {
        return;
    }
    ctx->pc = 0x1C48F4u;
label_1c48f4:
    // 0x1c48f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c48f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c48fc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1c48fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c4900: 0x2442e818  addiu       $v0, $v0, -0x17E8
    ctx->pc = 0x1c4900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961176));
    // 0x1c4904: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x1c4904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x1c4908: 0x26040304  addiu       $a0, $s0, 0x304
    ctx->pc = 0x1c4908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    // 0x1c490c: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x1c490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x1c4910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4914: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1c4914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x1c4918: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c491c: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x1c491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x1c4920: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x1c4920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x1c4924: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x1c4924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x1c4928: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x1c4928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x1c492c: 0xae0002f4  sw          $zero, 0x2F4($s0)
    ctx->pc = 0x1c492cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x1c4930: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x1c4930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x1c4934: 0xae0002fc  sw          $zero, 0x2FC($s0)
    ctx->pc = 0x1c4934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
    // 0x1c4938: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x1c4938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x1c493c: 0xae0302e4  sw          $v1, 0x2E4($s0)
    ctx->pc = 0x1c493cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 3));
    // 0x1c4940: 0xae0702d8  sw          $a3, 0x2D8($s0)
    ctx->pc = 0x1c4940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 7));
    // 0x1c4944: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C4944u;
    SET_GPR_U32(ctx, 31, 0x1C494Cu);
    ctx->pc = 0x1C4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4944u;
    // 0x1c4948: 0xae020258  sw          $v0, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C4944u, 0x1C494Cu)) {
        return;
    }
    ctx->pc = 0x1C494Cu;
label_1c494c:
    // 0x1c494c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4954: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C4954u;
    SET_GPR_U32(ctx, 31, 0x1C495Cu);
    ctx->pc = 0x1C4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4954u;
    // 0x1c4958: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C4954u, 0x1C495Cu)) {
        return;
    }
    ctx->pc = 0x1C495Cu;
label_1c495c:
    // 0x1c495c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c495cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c4960: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c4960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4964: 0x24a5e790  addiu       $a1, $a1, -0x1870
    ctx->pc = 0x1c4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961040));
    // 0x1c4968: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c4968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c496c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C496Cu;
    SET_GPR_U32(ctx, 31, 0x1C4974u);
    ctx->pc = 0x1C4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C496Cu;
    // 0x1c4970: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C496Cu, 0x1C4974u)) {
        return;
    }
    ctx->pc = 0x1C4974u;
label_1c4974:
    // 0x1c4974: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c4974u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4978: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c497c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C497Cu;
    {
        const bool branch_taken_0x1c497c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C497Cu;
        // 0x1c4980: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c497c) {
            ctx->pc = 0x1C49B4u;
            goto label_1c49b4;
        }
    }
    ctx->pc = 0x1C4984u;
    // 0x1c4984: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c4988: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c498c: 0x24539848  addiu       $s3, $v0, -0x67B8
    ctx->pc = 0x1c498cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940744));
label_1c4990:
    // 0x1c4990: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1c4990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c4994: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1C4994u;
    SET_GPR_U32(ctx, 31, 0x1C499Cu);
    ctx->pc = 0x1C4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4994u;
    // 0x1c4998: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1C4994u, 0x1C499Cu)) {
        return;
    }
    ctx->pc = 0x1C499Cu;
label_1c499c:
    // 0x1c499c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C499Cu;
    {
        const bool branch_taken_0x1c499c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c499c) {
            ctx->pc = 0x1C49A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C499Cu;
            // 0x1c49a0: 0xae1102d8  sw          $s1, 0x2D8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49A4u;
            goto label_1c49a4;
        }
    }
    ctx->pc = 0x1C49A4u;
label_1c49a4:
    // 0x1c49a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c49a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c49a8: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1c49a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c49ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C49ACu;
    {
        const bool branch_taken_0x1c49ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49ACu;
        // 0x1c49b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49ac) {
            ctx->pc = 0x1C4990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4990;
        }
    }
    ctx->pc = 0x1C49B4u;
label_1c49b4:
    // 0x1c49b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c49b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c49b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49bc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C49BCu;
    SET_GPR_U32(ctx, 31, 0x1C49C4u);
    ctx->pc = 0x1C49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49BCu;
    // 0x1c49c0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C49BCu, 0x1C49C4u)) {
        return;
    }
    ctx->pc = 0x1C49C4u;
label_1c49c4:
    // 0x1c49c4: 0x26e5e7a0  addiu       $a1, $s7, -0x1860
    ctx->pc = 0x1c49c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961056));
    // 0x1c49c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c49c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c49ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49d0: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C49D0u;
    SET_GPR_U32(ctx, 31, 0x1C49D8u);
    ctx->pc = 0x1C49D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49D0u;
    // 0x1c49d4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C49D0u, 0x1C49D8u)) {
        return;
    }
    ctx->pc = 0x1C49D8u;
label_1c49d8:
    // 0x1c49d8: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1c49d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c49dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C49DCu;
    {
        const bool branch_taken_0x1c49dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49DCu;
        // 0x1c49e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49dc) {
            ctx->pc = 0x1C49F0u;
            goto label_1c49f0;
        }
    }
    ctx->pc = 0x1C49E4u;
    // 0x1c49e4: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C49E4u;
    SET_GPR_U32(ctx, 31, 0x1C49ECu);
    ctx->pc = 0x1C49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49E4u;
    // 0x1c49e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C49E4u, 0x1C49ECu)) {
        return;
    }
    ctx->pc = 0x1C49ECu;
label_1c49ec:
    // 0x1c49ec: 0xae0202d4  sw          $v0, 0x2D4($s0)
    ctx->pc = 0x1c49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 2));
label_1c49f0:
    // 0x1c49f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c49f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c49f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49f8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C49F8u;
    SET_GPR_U32(ctx, 31, 0x1C4A00u);
    ctx->pc = 0x1C49FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49F8u;
    // 0x1c49fc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C49F8u, 0x1C4A00u)) {
        return;
    }
    ctx->pc = 0x1C4A00u;
label_1c4a00:
    // 0x1c4a00: 0x26c5e7b0  addiu       $a1, $s6, -0x1850
    ctx->pc = 0x1c4a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961072));
    // 0x1c4a04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c4a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c4a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a0c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C4A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C4A14u);
    ctx->pc = 0x1C4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A0Cu;
    // 0x1c4a10: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C4A0Cu, 0x1C4A14u)) {
        return;
    }
    ctx->pc = 0x1C4A14u;
label_1c4a14:
    // 0x1c4a14: 0x83a30100  lb          $v1, 0x100($sp)
    ctx->pc = 0x1c4a14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c4a18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4A18u;
    {
        const bool branch_taken_0x1c4a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A18u;
        // 0x1c4a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a18) {
            ctx->pc = 0x1C4A2Cu;
            goto label_1c4a2c;
        }
    }
    ctx->pc = 0x1C4A20u;
    // 0x1c4a20: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C4A20u;
    SET_GPR_U32(ctx, 31, 0x1C4A28u);
    ctx->pc = 0x1C4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A20u;
    // 0x1c4a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C4A20u, 0x1C4A28u)) {
        return;
    }
    ctx->pc = 0x1C4A28u;
label_1c4a28:
    // 0x1c4a28: 0xae0202ec  sw          $v0, 0x2EC($s0)
    ctx->pc = 0x1c4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 2));
label_1c4a2c:
    // 0x1c4a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a34: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C4A34u;
    SET_GPR_U32(ctx, 31, 0x1C4A3Cu);
    ctx->pc = 0x1C4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A34u;
    // 0x1c4a38: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C4A34u, 0x1C4A3Cu)) {
        return;
    }
    ctx->pc = 0x1C4A3Cu;
label_1c4a3c:
    // 0x1c4a3c: 0x27c5e7b8  addiu       $a1, $fp, -0x1848
    ctx->pc = 0x1c4a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961080));
    // 0x1c4a40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c4a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c4a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a48: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C4A48u;
    SET_GPR_U32(ctx, 31, 0x1C4A50u);
    ctx->pc = 0x1C4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A48u;
    // 0x1c4a4c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C4A48u, 0x1C4A50u)) {
        return;
    }
    ctx->pc = 0x1C4A50u;
label_1c4a50:
    // 0x1c4a50: 0x83a30100  lb          $v1, 0x100($sp)
    ctx->pc = 0x1c4a50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c4a54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4A54u;
    {
        const bool branch_taken_0x1c4a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A54u;
        // 0x1c4a58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a54) {
            ctx->pc = 0x1C4A68u;
            goto label_1c4a68;
        }
    }
    ctx->pc = 0x1C4A5Cu;
    // 0x1c4a5c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C4A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C4A64u);
    ctx->pc = 0x1C4A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A5Cu;
    // 0x1c4a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C4A5Cu, 0x1C4A64u)) {
        return;
    }
    ctx->pc = 0x1C4A64u;
label_1c4a64:
    // 0x1c4a64: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x1c4a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
label_1c4a68:
    // 0x1c4a68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c4a6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c4a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a70: 0x260602dc  addiu       $a2, $s0, 0x2DC
    ctx->pc = 0x1c4a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 732));
    // 0x1c4a74: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1C4A74u;
    SET_GPR_U32(ctx, 31, 0x1C4A7Cu);
    ctx->pc = 0x1C4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A74u;
    // 0x1c4a78: 0x2445e7c0  addiu       $a1, $v0, -0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1C4A74u, 0x1C4A7Cu)) {
        return;
    }
    ctx->pc = 0x1C4A7Cu;
label_1c4a7c:
    // 0x1c4a7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c4a80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c4a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a84: 0x260602e0  addiu       $a2, $s0, 0x2E0
    ctx->pc = 0x1c4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x1c4a88: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1C4A88u;
    SET_GPR_U32(ctx, 31, 0x1C4A90u);
    ctx->pc = 0x1C4A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A88u;
    // 0x1c4a8c: 0x2445e7d0  addiu       $a1, $v0, -0x1830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1C4A88u, 0x1C4A90u)) {
        return;
    }
    ctx->pc = 0x1C4A90u;
label_1c4a90:
    // 0x1c4a90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c4a94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c4a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a98: 0x260602e4  addiu       $a2, $s0, 0x2E4
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
    // 0x1c4a9c: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1C4A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4AA4u);
    ctx->pc = 0x1C4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A9Cu;
    // 0x1c4aa0: 0x2445e7e8  addiu       $a1, $v0, -0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1C4A9Cu, 0x1C4AA4u)) {
        return;
    }
    ctx->pc = 0x1C4AA4u;
label_1c4aa4:
    // 0x1c4aa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c4aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4aa8: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x1c4aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c4aac: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x1c4aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c4ab0: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x1c4ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1c4ab4: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x1c4ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c4ab8: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x1c4ab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c4abc: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x1c4abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c4ac0: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x1c4ac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c4ac4: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x1c4ac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c4ac8: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x1c4ac8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c4acc: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x1c4accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c4ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AD0u;
        // 0x1c4ad4: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4AD8u;
}
