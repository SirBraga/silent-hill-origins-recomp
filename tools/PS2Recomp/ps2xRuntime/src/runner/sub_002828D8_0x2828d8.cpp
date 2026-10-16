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

// Function: sub_002828D8
// Address: 0x2828d8 - 0x282cb8
void sub_002828D8_0x2828d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002828D8_0x2828d8");
#endif

    switch (ctx->pc) {
        case 0x28290cu: goto label_28290c;
        case 0x282924u: goto label_282924;
        case 0x28294cu: goto label_28294c;
        case 0x28295cu: goto label_28295c;
        case 0x282970u: goto label_282970;
        case 0x282984u: goto label_282984;
        case 0x282990u: goto label_282990;
        case 0x2829a8u: goto label_2829a8;
        case 0x2829b4u: goto label_2829b4;
        case 0x2829ccu: goto label_2829cc;
        case 0x282a38u: goto label_282a38;
        case 0x282a80u: goto label_282a80;
        case 0x282ac0u: goto label_282ac0;
        case 0x282b38u: goto label_282b38;
        case 0x282ba0u: goto label_282ba0;
        case 0x282bc0u: goto label_282bc0;
        case 0x282c08u: goto label_282c08;
        case 0x282c6cu: goto label_282c6c;
        case 0x282c7cu: goto label_282c7c;
        default: break;
    }

    ctx->pc = 0x2828d8u;

    // 0x2828d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2828d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2828dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2828dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2828e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2828e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2828e4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2828e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2828e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2828ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2828ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2828f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2828f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2828f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2828f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2828f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2828fc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2828fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x282900: 0x8cd50018  lw          $s5, 0x18($a2)
    ctx->pc = 0x282900u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x282904: 0xc0a0b9c  jal         func_282E70
    ctx->pc = 0x282904u;
    SET_GPR_U32(ctx, 31, 0x28290Cu);
    ctx->pc = 0x282908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282904u;
    // 0x282908: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E70u, 0x282904u, 0x28290Cu)) {
        return;
    }
    ctx->pc = 0x28290Cu;
label_28290c:
    // 0x28290c: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x28290Cu;
    {
        const bool branch_taken_0x28290c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28290Cu;
        // 0x282910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28290c) {
            ctx->pc = 0x282C74u;
            goto label_282c74;
        }
    }
    ctx->pc = 0x282914u;
    // 0x282914: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x282914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x282918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28291c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x28291Cu;
    SET_GPR_U32(ctx, 31, 0x282924u);
    ctx->pc = 0x282920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28291Cu;
    // 0x282920: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x28291Cu, 0x282924u)) {
        return;
    }
    ctx->pc = 0x282924u;
label_282924:
    // 0x282924: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x282924u;
    {
        const bool branch_taken_0x282924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282924u;
        // 0x282928: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282924) {
            ctx->pc = 0x282990u;
            goto label_282990;
        }
    }
    ctx->pc = 0x28292Cu;
    // 0x28292c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x28292cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282930: 0x8eb30014  lw          $s3, 0x14($s5)
    ctx->pc = 0x282930u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x282934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282938: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x282938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28293c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28293cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x282940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282944: 0xc0a081a  jal         func_282068
    ctx->pc = 0x282944u;
    SET_GPR_U32(ctx, 31, 0x28294Cu);
    ctx->pc = 0x282948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282944u;
    // 0x282948: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282068u, 0x282944u, 0x28294Cu)) {
        return;
    }
    ctx->pc = 0x28294Cu;
label_28294c:
    // 0x28294c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28294cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282950: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x282950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282954: 0xc093620  jal         func_24D880
    ctx->pc = 0x282954u;
    SET_GPR_U32(ctx, 31, 0x28295Cu);
    ctx->pc = 0x282958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282954u;
    // 0x282958: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x282954u, 0x28295Cu)) {
        return;
    }
    ctx->pc = 0x28295Cu;
label_28295c:
    // 0x28295c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28295Cu;
    {
        const bool branch_taken_0x28295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28295Cu;
        // 0x282960: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28295c) {
            ctx->pc = 0x282990u;
            goto label_282990;
        }
    }
    ctx->pc = 0x282964u;
    // 0x282964: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x282964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x282968: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x282968u;
    SET_GPR_U32(ctx, 31, 0x282970u);
    ctx->pc = 0x28296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282968u;
    // 0x28296c: 0x133080  sll         $a2, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x282968u, 0x282970u)) {
        return;
    }
    ctx->pc = 0x282970u;
label_282970:
    // 0x282970: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x282970u;
    {
        const bool branch_taken_0x282970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282970u;
        // 0x282974: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282970) {
            ctx->pc = 0x282990u;
            goto label_282990;
        }
    }
    ctx->pc = 0x282978u;
    // 0x282978: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x282978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28297c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x28297Cu;
    SET_GPR_U32(ctx, 31, 0x282984u);
    ctx->pc = 0x282980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28297Cu;
    // 0x282980: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x28297Cu, 0x282984u)) {
        return;
    }
    ctx->pc = 0x282984u;
label_282984:
    // 0x282984: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x282984u;
    {
        const bool branch_taken_0x282984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282984) {
            ctx->pc = 0x282988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282984u;
            // 0x282988: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282998u;
            goto label_282998;
        }
    }
    ctx->pc = 0x28298Cu;
    // 0x28298c: 0x0  nop
    ctx->pc = 0x28298cu;
    // NOP
label_282990:
    // 0x282990: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x282990u;
    {
        const bool branch_taken_0x282990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282990u;
        // 0x282994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282990) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282998u;
label_282998:
    // 0x282998: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x282998u;
    {
        const bool branch_taken_0x282998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282998u;
        // 0x28299c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282998) {
            ctx->pc = 0x2829E8u;
            goto label_2829e8;
        }
    }
    ctx->pc = 0x2829A0u;
    // 0x2829a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2829a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829a4: 0x0  nop
    ctx->pc = 0x2829a4u;
    // NOP
label_2829a8:
    // 0x2829a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2829a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829ac: 0xc093620  jal         func_24D880
    ctx->pc = 0x2829ACu;
    SET_GPR_U32(ctx, 31, 0x2829B4u);
    ctx->pc = 0x2829B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829ACu;
    // 0x2829b0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x2829ACu, 0x2829B4u)) {
        return;
    }
    ctx->pc = 0x2829B4u;
label_2829b4:
    // 0x2829b4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2829B4u;
    {
        const bool branch_taken_0x2829b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829B4u;
        // 0x2829b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829b4) {
            ctx->pc = 0x282990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282990;
        }
    }
    ctx->pc = 0x2829BCu;
    // 0x2829bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2829bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2829c0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2829c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2829c4: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x2829C4u;
    SET_GPR_U32(ctx, 31, 0x2829CCu);
    ctx->pc = 0x2829C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829C4u;
    // 0x2829c8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x2829C4u, 0x2829CCu)) {
        return;
    }
    ctx->pc = 0x2829CCu;
label_2829cc:
    // 0x2829cc: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2829CCu;
    {
        const bool branch_taken_0x2829cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829CCu;
        // 0x2829d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829cc) {
            ctx->pc = 0x282990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282990;
        }
    }
    ctx->pc = 0x2829D4u;
    // 0x2829d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2829d8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2829d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2829dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2829DCu;
    {
        const bool branch_taken_0x2829dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2829E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829DCu;
        // 0x2829e0: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829dc) {
            ctx->pc = 0x2829A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2829a8;
        }
    }
    ctx->pc = 0x2829E4u;
    // 0x2829e4: 0x0  nop
    ctx->pc = 0x2829e4u;
    // NOP
label_2829e8:
    // 0x2829e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2829e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2829ec: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x2829ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2829f0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2829f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2829f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2829f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829f8: 0x12600061  beqz        $s3, . + 4 + (0x61 << 2)
    ctx->pc = 0x2829F8u;
    {
        const bool branch_taken_0x2829f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829F8u;
        // 0x2829fc: 0x260c0004  addiu       $t4, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829f8) {
            ctx->pc = 0x282B80u;
            goto label_282b80;
        }
    }
    ctx->pc = 0x282A00u;
    // 0x282a00: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x282a00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282a04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a08: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x282a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a0c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x282A0Cu;
    {
        const bool branch_taken_0x282a0c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x282A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A0Cu;
        // 0x282a10: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a0c) {
            ctx->pc = 0x282A1Cu;
            goto label_282a1c;
        }
    }
    ctx->pc = 0x282A14u;
    // 0x282a14: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x282A14u;
    {
        const bool branch_taken_0x282a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a14) {
            ctx->pc = 0x282A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282A14u;
            // 0x282a18: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282A84u;
            goto label_282a84;
        }
    }
    ctx->pc = 0x282A1Cu;
label_282a1c:
    // 0x282a1c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x282a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x282a20: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x282A20u;
    {
        const bool branch_taken_0x282a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A20u;
        // 0x282a24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a20) {
            ctx->pc = 0x282A6Cu;
            goto label_282a6c;
        }
    }
    ctx->pc = 0x282A28u;
    // 0x282a28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x282a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282a2c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x282a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x282a30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x282a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282a34: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x282a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_282a38:
    // 0x282a38: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x282a3c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x282A3Cu;
    {
        const bool branch_taken_0x282a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a3c) {
            ctx->pc = 0x282A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282A3Cu;
            // 0x282a40: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282A70u;
            goto label_282a70;
        }
    }
    ctx->pc = 0x282A44u;
    // 0x282a44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x282a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282a48: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x282A48u;
    {
        const bool branch_taken_0x282a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a48) {
            ctx->pc = 0x282A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282A48u;
            // 0x282a4c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282A70u;
            goto label_282a70;
        }
    }
    ctx->pc = 0x282A50u;
    // 0x282a50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x282a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x282a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282a58: 0x10450049  beq         $v0, $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x282A58u;
    {
        const bool branch_taken_0x282a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x282A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A58u;
        // 0x282a5c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a58) {
            ctx->pc = 0x282B80u;
            goto label_282b80;
        }
    }
    ctx->pc = 0x282A60u;
    // 0x282a60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x282a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x282a64: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x282A64u;
    {
        const bool branch_taken_0x282a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A64u;
        // 0x282a68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a64) {
            ctx->pc = 0x282A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282a38;
        }
    }
    ctx->pc = 0x282A6Cu;
label_282a6c:
    // 0x282a6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x282a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_282a70:
    // 0x282a70: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x282a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x282a74: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x282a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x282a78: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x282A78u;
    {
        const bool branch_taken_0x282a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A78u;
        // 0x282a7c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a78) {
            ctx->pc = 0x282B80u;
            goto label_282b80;
        }
    }
    ctx->pc = 0x282A80u;
label_282a80:
    // 0x282a80: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x282a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_282a84:
    // 0x282a84: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x282a88: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x282A88u;
    {
        const bool branch_taken_0x282a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A88u;
        // 0x282a8c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a88) {
            ctx->pc = 0x282AF4u;
            goto label_282af4;
        }
    }
    ctx->pc = 0x282A90u;
    // 0x282a90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x282a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x282a94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282a98: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x282A98u;
    {
        const bool branch_taken_0x282a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A98u;
        // 0x282a9c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a98) {
            ctx->pc = 0x282AF4u;
            goto label_282af4;
        }
    }
    ctx->pc = 0x282AA0u;
    // 0x282aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282aa4: 0x108a0036  beq         $a0, $t2, . + 4 + (0x36 << 2)
    ctx->pc = 0x282AA4u;
    {
        const bool branch_taken_0x282aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x282AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AA4u;
        // 0x282aa8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282aa4) {
            ctx->pc = 0x282B80u;
            goto label_282b80;
        }
    }
    ctx->pc = 0x282AACu;
    // 0x282aac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x282aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x282ab0: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x282ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x282ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x282ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282ab8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x282ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282abc: 0x0  nop
    ctx->pc = 0x282abcu;
    // NOP
label_282ac0:
    // 0x282ac0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x282ac4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x282AC4u;
    {
        const bool branch_taken_0x282ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282ac4) {
            ctx->pc = 0x282AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282AC4u;
            // 0x282ac8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282AF8u;
            goto label_282af8;
        }
    }
    ctx->pc = 0x282ACCu;
    // 0x282acc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x282accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282ad0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x282AD0u;
    {
        const bool branch_taken_0x282ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282ad0) {
            ctx->pc = 0x282AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282AD0u;
            // 0x282ad4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282AF8u;
            goto label_282af8;
        }
    }
    ctx->pc = 0x282AD8u;
    // 0x282ad8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x282ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x282adc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282ae0: 0x10450027  beq         $v0, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x282AE0u;
    {
        const bool branch_taken_0x282ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x282AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AE0u;
        // 0x282ae4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ae0) {
            ctx->pc = 0x282B80u;
            goto label_282b80;
        }
    }
    ctx->pc = 0x282AE8u;
    // 0x282ae8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x282ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x282aec: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x282AECu;
    {
        const bool branch_taken_0x282aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AECu;
        // 0x282af0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282aec) {
            ctx->pc = 0x282AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282ac0;
        }
    }
    ctx->pc = 0x282AF4u;
label_282af4:
    // 0x282af4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x282af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_282af8:
    // 0x282af8: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x282af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x282afc: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x282b00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x282B00u;
    {
        const bool branch_taken_0x282b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B00u;
        // 0x282b04: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b00) {
            ctx->pc = 0x282B6Cu;
            goto label_282b6c;
        }
    }
    ctx->pc = 0x282B08u;
    // 0x282b08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x282b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x282b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282b10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282b14: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x282B14u;
    {
        const bool branch_taken_0x282b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B14u;
        // 0x282b18: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b14) {
            ctx->pc = 0x282B6Cu;
            goto label_282b6c;
        }
    }
    ctx->pc = 0x282B1Cu;
    // 0x282b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b20: 0x108a0017  beq         $a0, $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x282B20u;
    {
        const bool branch_taken_0x282b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x282B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B20u;
        // 0x282b24: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b20) {
            ctx->pc = 0x282B80u;
            goto label_282b80;
        }
    }
    ctx->pc = 0x282B28u;
    // 0x282b28: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x282b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x282b2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x282b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x282b30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x282b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282b34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x282b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_282b38:
    // 0x282b38: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x282b3c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x282B3Cu;
    {
        const bool branch_taken_0x282b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b3c) {
            ctx->pc = 0x282B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B3Cu;
            // 0x282b40: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282B70u;
            goto label_282b70;
        }
    }
    ctx->pc = 0x282B44u;
    // 0x282b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x282b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282b48: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x282B48u;
    {
        const bool branch_taken_0x282b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b48) {
            ctx->pc = 0x282B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B48u;
            // 0x282b4c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282B70u;
            goto label_282b70;
        }
    }
    ctx->pc = 0x282B50u;
    // 0x282b50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x282b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x282b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282b58: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x282B58u;
    {
        const bool branch_taken_0x282b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x282B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B58u;
        // 0x282b5c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b58) {
            ctx->pc = 0x282B80u;
            goto label_282b80;
        }
    }
    ctx->pc = 0x282B60u;
    // 0x282b60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x282b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x282b64: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x282B64u;
    {
        const bool branch_taken_0x282b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B64u;
        // 0x282b68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b64) {
            ctx->pc = 0x282B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282b38;
        }
    }
    ctx->pc = 0x282B6Cu;
label_282b6c:
    // 0x282b6c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x282b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_282b70:
    // 0x282b70: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x282b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x282b74: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x282b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x282b78: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x282B78u;
    {
        const bool branch_taken_0x282b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B78u;
        // 0x282b7c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b78) {
            ctx->pc = 0x282A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282a80;
        }
    }
    ctx->pc = 0x282B80u;
label_282b80:
    // 0x282b80: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x282b80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x282b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b88: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x282b88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x282b8c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x282b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x282b90: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x282B90u;
    {
        const bool branch_taken_0x282b90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B90u;
        // 0x282b94: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b90) {
            ctx->pc = 0x282C60u;
            goto label_282c60;
        }
    }
    ctx->pc = 0x282B98u;
    // 0x282b98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x282b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x282b9c: 0x0  nop
    ctx->pc = 0x282b9cu;
    // NOP
label_282ba0:
    // 0x282ba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ba4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x282BA4u;
    {
        const bool branch_taken_0x282ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BA4u;
        // 0x282ba8: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ba4) {
            ctx->pc = 0x282C50u;
            goto label_282c50;
        }
    }
    ctx->pc = 0x282BACu;
    // 0x282bac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x282bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x282bb0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x282bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x282bb4: 0x4e5821  addu        $t3, $v0, $t6
    ctx->pc = 0x282bb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x282bb8: 0x6f5021  addu        $t2, $v1, $t7
    ctx->pc = 0x282bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x282bbc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x282bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_282bc0:
    // 0x282bc0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x282bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x282bc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282bc8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x282BC8u;
    {
        const bool branch_taken_0x282bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BC8u;
        // 0x282bcc: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bc8) {
            ctx->pc = 0x282C3Cu;
            goto label_282c3c;
        }
    }
    ctx->pc = 0x282BD0u;
    // 0x282bd0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x282bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x282bd4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x282bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x282bd8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x282bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x282bdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x282bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282be0: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x282be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x282be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282be8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x282be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x282BECu;
    {
        const bool branch_taken_0x282bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BECu;
        // 0x282bf0: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bec) {
            ctx->pc = 0x282C24u;
            goto label_282c24;
        }
    }
    ctx->pc = 0x282BF4u;
    // 0x282bf4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x282bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x282bf8: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x282BF8u;
    {
        const bool branch_taken_0x282bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x282bf8) {
            ctx->pc = 0x282BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282BF8u;
            // 0x282bfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282C24u;
            goto label_282c24;
        }
    }
    ctx->pc = 0x282C00u;
    // 0x282c00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x282c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x282c04: 0x0  nop
    ctx->pc = 0x282c04u;
    // NOP
label_282c08:
    // 0x282c08: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x282c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x282c0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282C0Cu;
    {
        const bool branch_taken_0x282c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C0Cu;
        // 0x282c10: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c0c) {
            ctx->pc = 0x282C24u;
            goto label_282c24;
        }
    }
    ctx->pc = 0x282C14u;
    // 0x282c14: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x282c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282c18: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x282C18u;
    {
        const bool branch_taken_0x282c18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x282c18) {
            ctx->pc = 0x282C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282C18u;
            // 0x282c1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282c08;
        }
    }
    ctx->pc = 0x282C20u;
    // 0x282c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282c24:
    // 0x282c24: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x282C24u;
    {
        const bool branch_taken_0x282c24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C24u;
        // 0x282c28: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c24) {
            ctx->pc = 0x282C3Cu;
            goto label_282c3c;
        }
    }
    ctx->pc = 0x282C2Cu;
    // 0x282c2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x282c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x282c30: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x282c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x282c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282c38: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x282c38u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_282c3c:
    // 0x282c3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x282c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x282c40: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x282c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c44: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x282c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x282c48: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x282C48u;
    {
        const bool branch_taken_0x282c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C48u;
        // 0x282c4c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c48) {
            ctx->pc = 0x282BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282bc0;
        }
    }
    ctx->pc = 0x282C50u;
label_282c50:
    // 0x282c50: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x282c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c54: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x282c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x282c58: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x282C58u;
    {
        const bool branch_taken_0x282c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282c58) {
            ctx->pc = 0x282C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282C58u;
            // 0x282c5c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282ba0;
        }
    }
    ctx->pc = 0x282C60u;
label_282c60:
    // 0x282c60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x282c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c64: 0xc0a0b7a  jal         func_282DE8
    ctx->pc = 0x282C64u;
    SET_GPR_U32(ctx, 31, 0x282C6Cu);
    ctx->pc = 0x282C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C64u;
    // 0x282c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DE8u, 0x282C64u, 0x282C6Cu)) {
        return;
    }
    ctx->pc = 0x282C6Cu;
label_282c6c:
    // 0x282c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282C6Cu;
    {
        const bool branch_taken_0x282c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C6Cu;
        // 0x282c70: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c6c) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282C74u;
label_282c74:
    // 0x282c74: 0xc093620  jal         func_24D880
    ctx->pc = 0x282C74u;
    SET_GPR_U32(ctx, 31, 0x282C7Cu);
    ctx->pc = 0x282C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C74u;
    // 0x282c78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x282C74u, 0x282C7Cu)) {
        return;
    }
    ctx->pc = 0x282C7Cu;
label_282c7c:
    // 0x282c7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x282c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282C80u;
    {
        const bool branch_taken_0x282c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C80u;
        // 0x282c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c80) {
            ctx->pc = 0x282C90u;
            goto label_282c90;
        }
    }
    ctx->pc = 0x282C88u;
    // 0x282c88: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x282c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c8c: 0x0  nop
    ctx->pc = 0x282c8cu;
    // NOP
label_282c90:
    // 0x282c90: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x282c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282c94: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x282c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282c98: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x282c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282c9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x282c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282ca0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x282ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282ca4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x282ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282cac: 0x3e00008  jr          $ra
    ctx->pc = 0x282CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CACu;
        // 0x282cb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282CB4u;
    // 0x282cb4: 0x0  nop
    ctx->pc = 0x282cb4u;
    // NOP
    ctx->pc = 0x282cb8u;
}
