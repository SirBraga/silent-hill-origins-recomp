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

// Function: sub_0016E898
// Address: 0x16e898 - 0x16e9b0
void sub_0016E898_0x16e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E898_0x16e898");
#endif

    switch (ctx->pc) {
        case 0x16e8f0u: goto label_16e8f0;
        case 0x16e904u: goto label_16e904;
        case 0x16e914u: goto label_16e914;
        case 0x16e920u: goto label_16e920;
        case 0x16e928u: goto label_16e928;
        case 0x16e934u: goto label_16e934;
        case 0x16e93cu: goto label_16e93c;
        case 0x16e94cu: goto label_16e94c;
        case 0x16e958u: goto label_16e958;
        case 0x16e964u: goto label_16e964;
        case 0x16e970u: goto label_16e970;
        case 0x16e97cu: goto label_16e97c;
        case 0x16e988u: goto label_16e988;
        default: break;
    }

    ctx->pc = 0x16e898u;

    // 0x16e898: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16e89c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16e8a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x16e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x16e8a4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16e8a8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x16e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x16e8ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16e8acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16e8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16e8b4: 0x24424eb0  addiu       $v0, $v0, 0x4EB0
    ctx->pc = 0x16e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
    // 0x16e8b8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16e8bc: 0x24634ed0  addiu       $v1, $v1, 0x4ED0
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20176));
    // 0x16e8c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16e8c4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16e8c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16e8cc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x16e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x16e8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8d4: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x16e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x16e8d8: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x16e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x16e8dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E8DCu;
    {
        const bool branch_taken_0x16e8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8DCu;
        // 0x16e8e0: 0xaea30034  sw          $v1, 0x34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8dc) {
            ctx->pc = 0x16E8F0u;
            goto label_16e8f0;
        }
    }
    ctx->pc = 0x16E8E4u;
    // 0x16e8e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16e8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8e8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16E8E8u;
    SET_GPR_U32(ctx, 31, 0x16E8F0u);
    ctx->pc = 0x16E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E8E8u;
    // 0x16e8ec: 0x26a40038  addiu       $a0, $s5, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16E8E8u, 0x16E8F0u)) {
        return;
    }
    ctx->pc = 0x16E8F0u;
label_16e8f0:
    // 0x16e8f0: 0x26b40048  addiu       $s4, $s5, 0x48
    ctx->pc = 0x16e8f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x16e8f4: 0x26b30050  addiu       $s3, $s5, 0x50
    ctx->pc = 0x16e8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x16e8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16E8FCu;
    SET_GPR_U32(ctx, 31, 0x16E904u);
    ctx->pc = 0x16E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E8FCu;
    // 0x16e900: 0x26b10038  addiu       $s1, $s5, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16E8FCu, 0x16E904u)) {
        return;
    }
    ctx->pc = 0x16E904u;
label_16e904:
    // 0x16e904: 0x26b200bc  addiu       $s2, $s5, 0xBC
    ctx->pc = 0x16e904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 188));
    // 0x16e908: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16e908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e90c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16E90Cu;
    SET_GPR_U32(ctx, 31, 0x16E914u);
    ctx->pc = 0x16E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E90Cu;
    // 0x16e910: 0x26b000c4  addiu       $s0, $s5, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16E90Cu, 0x16E914u)) {
        return;
    }
    ctx->pc = 0x16E914u;
label_16e914:
    // 0x16e914: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16e914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e918: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16E918u;
    SET_GPR_U32(ctx, 31, 0x16E920u);
    ctx->pc = 0x16E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E918u;
    // 0x16e91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16E918u, 0x16E920u)) {
        return;
    }
    ctx->pc = 0x16E920u;
label_16e920:
    // 0x16e920: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16E920u;
    SET_GPR_U32(ctx, 31, 0x16E928u);
    ctx->pc = 0x16E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E920u;
    // 0x16e924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16E920u, 0x16E928u)) {
        return;
    }
    ctx->pc = 0x16E928u;
label_16e928:
    // 0x16e928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e92c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16E92Cu;
    SET_GPR_U32(ctx, 31, 0x16E934u);
    ctx->pc = 0x16E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E92Cu;
    // 0x16e930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16E92Cu, 0x16E934u)) {
        return;
    }
    ctx->pc = 0x16E934u;
label_16e934:
    // 0x16e934: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16E934u;
    SET_GPR_U32(ctx, 31, 0x16E93Cu);
    ctx->pc = 0x16E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E934u;
    // 0x16e938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16E934u, 0x16E93Cu)) {
        return;
    }
    ctx->pc = 0x16E93Cu;
label_16e93c:
    // 0x16e93c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16e940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e944: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16E944u;
    SET_GPR_U32(ctx, 31, 0x16E94Cu);
    ctx->pc = 0x16E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E944u;
    // 0x16e948: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16E944u, 0x16E94Cu)) {
        return;
    }
    ctx->pc = 0x16E94Cu;
label_16e94c:
    // 0x16e94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e950: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16E950u;
    SET_GPR_U32(ctx, 31, 0x16E958u);
    ctx->pc = 0x16E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E950u;
    // 0x16e954: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16E950u, 0x16E958u)) {
        return;
    }
    ctx->pc = 0x16E958u;
label_16e958:
    // 0x16e958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e95c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16E95Cu;
    SET_GPR_U32(ctx, 31, 0x16E964u);
    ctx->pc = 0x16E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E95Cu;
    // 0x16e960: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16E95Cu, 0x16E964u)) {
        return;
    }
    ctx->pc = 0x16E964u;
label_16e964:
    // 0x16e964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e968: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16E968u;
    SET_GPR_U32(ctx, 31, 0x16E970u);
    ctx->pc = 0x16E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E968u;
    // 0x16e96c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16E968u, 0x16E970u)) {
        return;
    }
    ctx->pc = 0x16E970u;
label_16e970:
    // 0x16e970: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e974: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16E974u;
    SET_GPR_U32(ctx, 31, 0x16E97Cu);
    ctx->pc = 0x16E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E974u;
    // 0x16e978: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16E974u, 0x16E97Cu)) {
        return;
    }
    ctx->pc = 0x16E97Cu;
label_16e97c:
    // 0x16e97c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e980: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16E980u;
    SET_GPR_U32(ctx, 31, 0x16E988u);
    ctx->pc = 0x16E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E980u;
    // 0x16e984: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16E980u, 0x16E988u)) {
        return;
    }
    ctx->pc = 0x16E988u;
label_16e988:
    // 0x16e988: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16e988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16e98c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16e98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16e990: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16e990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e994: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16e994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e998: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x16e998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e99c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x16e99cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e9a0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x16e9a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9A8u;
        // 0x16e9ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E9B0u;
}
