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

// Function: sub_001FF980
// Address: 0x1ff980 - 0x1ffaa0
void sub_001FF980_0x1ff980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF980_0x1ff980");
#endif

    switch (ctx->pc) {
        case 0x1ff980u: goto label_1ff980;
        case 0x1ff984u: goto label_1ff984;
        case 0x1ff988u: goto label_1ff988;
        case 0x1ff98cu: goto label_1ff98c;
        case 0x1ff990u: goto label_1ff990;
        case 0x1ff994u: goto label_1ff994;
        case 0x1ff998u: goto label_1ff998;
        case 0x1ff99cu: goto label_1ff99c;
        case 0x1ff9a0u: goto label_1ff9a0;
        case 0x1ff9a4u: goto label_1ff9a4;
        case 0x1ff9a8u: goto label_1ff9a8;
        case 0x1ff9acu: goto label_1ff9ac;
        case 0x1ff9b0u: goto label_1ff9b0;
        case 0x1ff9b4u: goto label_1ff9b4;
        case 0x1ff9b8u: goto label_1ff9b8;
        case 0x1ff9bcu: goto label_1ff9bc;
        case 0x1ff9c0u: goto label_1ff9c0;
        case 0x1ff9c4u: goto label_1ff9c4;
        case 0x1ff9c8u: goto label_1ff9c8;
        case 0x1ff9ccu: goto label_1ff9cc;
        case 0x1ff9d0u: goto label_1ff9d0;
        case 0x1ff9d4u: goto label_1ff9d4;
        case 0x1ff9d8u: goto label_1ff9d8;
        case 0x1ff9dcu: goto label_1ff9dc;
        case 0x1ff9e0u: goto label_1ff9e0;
        case 0x1ff9e4u: goto label_1ff9e4;
        case 0x1ff9e8u: goto label_1ff9e8;
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ff9f0u: goto label_1ff9f0;
        case 0x1ff9f4u: goto label_1ff9f4;
        case 0x1ff9f8u: goto label_1ff9f8;
        case 0x1ff9fcu: goto label_1ff9fc;
        case 0x1ffa00u: goto label_1ffa00;
        case 0x1ffa04u: goto label_1ffa04;
        case 0x1ffa08u: goto label_1ffa08;
        case 0x1ffa0cu: goto label_1ffa0c;
        case 0x1ffa10u: goto label_1ffa10;
        case 0x1ffa14u: goto label_1ffa14;
        case 0x1ffa18u: goto label_1ffa18;
        case 0x1ffa1cu: goto label_1ffa1c;
        case 0x1ffa20u: goto label_1ffa20;
        case 0x1ffa24u: goto label_1ffa24;
        case 0x1ffa28u: goto label_1ffa28;
        case 0x1ffa2cu: goto label_1ffa2c;
        case 0x1ffa30u: goto label_1ffa30;
        case 0x1ffa34u: goto label_1ffa34;
        case 0x1ffa38u: goto label_1ffa38;
        case 0x1ffa3cu: goto label_1ffa3c;
        case 0x1ffa40u: goto label_1ffa40;
        case 0x1ffa44u: goto label_1ffa44;
        case 0x1ffa48u: goto label_1ffa48;
        case 0x1ffa4cu: goto label_1ffa4c;
        case 0x1ffa50u: goto label_1ffa50;
        case 0x1ffa54u: goto label_1ffa54;
        case 0x1ffa58u: goto label_1ffa58;
        case 0x1ffa5cu: goto label_1ffa5c;
        case 0x1ffa60u: goto label_1ffa60;
        case 0x1ffa64u: goto label_1ffa64;
        case 0x1ffa68u: goto label_1ffa68;
        case 0x1ffa6cu: goto label_1ffa6c;
        case 0x1ffa70u: goto label_1ffa70;
        case 0x1ffa74u: goto label_1ffa74;
        case 0x1ffa78u: goto label_1ffa78;
        case 0x1ffa7cu: goto label_1ffa7c;
        case 0x1ffa80u: goto label_1ffa80;
        case 0x1ffa84u: goto label_1ffa84;
        case 0x1ffa88u: goto label_1ffa88;
        case 0x1ffa8cu: goto label_1ffa8c;
        case 0x1ffa90u: goto label_1ffa90;
        case 0x1ffa94u: goto label_1ffa94;
        case 0x1ffa98u: goto label_1ffa98;
        case 0x1ffa9cu: goto label_1ffa9c;
        default: break;
    }

    ctx->pc = 0x1ff980u;

label_1ff980:
    // 0x1ff980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ff984:
    // 0x1ff984: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ff984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1ff988:
    // 0x1ff988: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x1ff988u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
label_1ff98c:
    // 0x1ff98c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ff98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1ff990:
    // 0x1ff990: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ff990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1ff994:
    // 0x1ff994: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1ff994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
label_1ff998:
    // 0x1ff998: 0x8e422cb8  lw          $v0, 0x2CB8($s2)
    ctx->pc = 0x1ff998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11448)));
label_1ff99c:
    // 0x1ff99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9a0:
    // 0x1ff9a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ff9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ff9a4:
    // 0x1ff9a4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ff9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1ff9a8:
    // 0x1ff9a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1ff9ac:
    if (ctx->pc == 0x1FF9ACu) {
        ctx->pc = 0x1FF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9A8u;
        // 0x1ff9ac: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF9B0u;
        goto label_1ff9b0;
    }
    ctx->pc = 0x1FF9A8u;
    {
        const bool branch_taken_0x1ff9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9A8u;
        // 0x1ff9ac: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9a8) {
            ctx->pc = 0x1FF9CCu;
            goto label_1ff9cc;
        }
    }
    ctx->pc = 0x1FF9B0u;
label_1ff9b0:
    // 0x1ff9b0: 0xc08002c  jal         func_2000B0
label_1ff9b4:
    if (ctx->pc == 0x1FF9B4u) {
        ctx->pc = 0x1FF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9B0u;
        // 0x1ff9b4: 0x26042c98  addiu       $a0, $s0, 0x2C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF9B8u;
        goto label_1ff9b8;
    }
    ctx->pc = 0x1FF9B0u;
    SET_GPR_U32(ctx, 31, 0x1FF9B8u);
    ctx->pc = 0x1FF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9B0u;
    // 0x1ff9b4: 0x26042c98  addiu       $a0, $s0, 0x2C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2000B0u, 0x1FF9B0u, 0x1FF9B8u)) {
        return;
    }
    ctx->pc = 0x1FF9B8u;
label_1ff9b8:
    // 0x1ff9b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff9bc:
    // 0x1ff9bc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1ff9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1ff9c0:
    // 0x1ff9c0: 0xae422cb8  sw          $v0, 0x2CB8($s2)
    ctx->pc = 0x1ff9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11448), GPR_U32(ctx, 2));
label_1ff9c4:
    // 0x1ff9c4: 0xc0c53ae  jal         func_314EB8
label_1ff9c8:
    if (ctx->pc == 0x1FF9C8u) {
        ctx->pc = 0x1FF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9C4u;
        // 0x1ff9c8: 0x2484f908  addiu       $a0, $a0, -0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF9CCu;
        goto label_1ff9cc;
    }
    ctx->pc = 0x1FF9C4u;
    SET_GPR_U32(ctx, 31, 0x1FF9CCu);
    ctx->pc = 0x1FF9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9C4u;
    // 0x1ff9c8: 0x2484f908  addiu       $a0, $a0, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x1FF9C4u, 0x1FF9CCu)) {
        return;
    }
    ctx->pc = 0x1FF9CCu;
label_1ff9cc:
    // 0x1ff9cc: 0x26122c98  addiu       $s2, $s0, 0x2C98
    ctx->pc = 0x1ff9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
label_1ff9d0:
    // 0x1ff9d0: 0x3c140070  lui         $s4, 0x70
    ctx->pc = 0x1ff9d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
label_1ff9d4:
    // 0x1ff9d4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1ff9d8:
    if (ctx->pc == 0x1FF9D8u) {
        ctx->pc = 0x1FF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9D4u;
        // 0x1ff9d8: 0x3c130070  lui         $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF9DCu;
        goto label_1ff9dc;
    }
    ctx->pc = 0x1FF9D4u;
    {
        const bool branch_taken_0x1ff9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9D4u;
        // 0x1ff9d8: 0x3c130070  lui         $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9d4) {
            ctx->pc = 0x1FFA54u;
            goto label_1ffa54;
        }
    }
    ctx->pc = 0x1FF9DCu;
label_1ff9dc:
    // 0x1ff9dc: 0x0  nop
    ctx->pc = 0x1ff9dcu;
    // NOP
label_1ff9e0:
    // 0x1ff9e0: 0xc0927d2  jal         func_249F48
label_1ff9e4:
    if (ctx->pc == 0x1FF9E4u) {
        ctx->pc = 0x1FF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9E0u;
        // 0x1ff9e4: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF9E8u;
        goto label_1ff9e8;
    }
    ctx->pc = 0x1FF9E0u;
    SET_GPR_U32(ctx, 31, 0x1FF9E8u);
    ctx->pc = 0x1FF9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9E0u;
    // 0x1ff9e4: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249F48u, 0x1FF9E0u, 0x1FF9E8u)) {
        return;
    }
    ctx->pc = 0x1FF9E8u;
label_1ff9e8:
    // 0x1ff9e8: 0x8e832d10  lw          $v1, 0x2D10($s4)
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11536)));
label_1ff9ec:
    // 0x1ff9ec: 0x8e621a70  lw          $v0, 0x1A70($s3)
    ctx->pc = 0x1ff9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
label_1ff9f0:
    // 0x1ff9f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1ff9f4:
    if (ctx->pc == 0x1FF9F4u) {
        ctx->pc = 0x1FF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9F0u;
        // 0x1ff9f4: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF9F8u;
        goto label_1ff9f8;
    }
    ctx->pc = 0x1FF9F0u;
    {
        const bool branch_taken_0x1ff9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9F0u;
        // 0x1ff9f4: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9f0) {
            ctx->pc = 0x1FFA10u;
            goto label_1ffa10;
        }
    }
    ctx->pc = 0x1FF9F8u;
label_1ff9f8:
    // 0x1ff9f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ff9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ff9fc:
    // 0x1ff9fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ffa00:
    if (ctx->pc == 0x1FFA00u) {
        ctx->pc = 0x1FFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9FCu;
        // 0x1ffa00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA04u;
        goto label_1ffa04;
    }
    ctx->pc = 0x1FF9FCu;
    {
        const bool branch_taken_0x1ff9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9FCu;
        // 0x1ffa00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9fc) {
            ctx->pc = 0x1FFA10u;
            goto label_1ffa10;
        }
    }
    ctx->pc = 0x1FFA04u;
label_1ffa04:
    // 0x1ffa04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ffa04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1ffa08:
    // 0x1ffa08: 0xc07fd18  jal         func_1FF460
label_1ffa0c:
    if (ctx->pc == 0x1FFA0Cu) {
        ctx->pc = 0x1FFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA08u;
        // 0x1ffa0c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA10u;
        goto label_1ffa10;
    }
    ctx->pc = 0x1FFA08u;
    SET_GPR_U32(ctx, 31, 0x1FFA10u);
    ctx->pc = 0x1FFA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA08u;
    // 0x1ffa0c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1FFA08u, 0x1FFA10u)) {
        return;
    }
    ctx->pc = 0x1FFA10u;
label_1ffa10:
    // 0x1ffa10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ffa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa14:
    // 0x1ffa14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ffa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa18:
    // 0x1ffa18: 0xc07fed4  jal         func_1FFB50
label_1ffa1c:
    if (ctx->pc == 0x1FFA1Cu) {
        ctx->pc = 0x1FFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA18u;
        // 0x1ffa1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA20u;
        goto label_1ffa20;
    }
    ctx->pc = 0x1FFA18u;
    SET_GPR_U32(ctx, 31, 0x1FFA20u);
    ctx->pc = 0x1FFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA18u;
    // 0x1ffa1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFB50u, 0x1FFA18u, 0x1FFA20u)) {
        return;
    }
    ctx->pc = 0x1FFA20u;
label_1ffa20:
    // 0x1ffa20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ffa24:
    // 0x1ffa24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ffa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffa28:
    // 0x1ffa28: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1ffa2c:
    if (ctx->pc == 0x1FFA2Cu) {
        ctx->pc = 0x1FFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA28u;
        // 0x1ffa2c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA30u;
        goto label_1ffa30;
    }
    ctx->pc = 0x1FFA28u;
    {
        const bool branch_taken_0x1ffa28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA28u;
        // 0x1ffa2c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa28) {
            ctx->pc = 0x1FFA48u;
            goto label_1ffa48;
        }
    }
    ctx->pc = 0x1FFA30u;
label_1ffa30:
    // 0x1ffa30: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1ffa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1ffa34:
    // 0x1ffa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa38:
    // 0x1ffa38: 0x40f809  jalr        $v0
label_1ffa3c:
    if (ctx->pc == 0x1FFA3Cu) {
        ctx->pc = 0x1FFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA38u;
        // 0x1ffa3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA40u;
        goto label_1ffa40;
    }
    ctx->pc = 0x1FFA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFA40u);
        ctx->pc = 0x1FFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA38u;
        // 0x1ffa3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA38u, 0x1FFA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFA40u;
label_1ffa40:
    // 0x1ffa40: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ffa44:
    if (ctx->pc == 0x1FFA44u) {
        ctx->pc = 0x1FFA48u;
        goto label_1ffa48;
    }
    ctx->pc = 0x1FFA40u;
    {
        const bool branch_taken_0x1ffa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa40) {
            ctx->pc = 0x1FFA54u;
            goto label_1ffa54;
        }
    }
    ctx->pc = 0x1FFA48u;
label_1ffa48:
    // 0x1ffa48: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1ffa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1ffa4c:
    // 0x1ffa4c: 0xc093620  jal         func_24D880
label_1ffa50:
    if (ctx->pc == 0x1FFA50u) {
        ctx->pc = 0x1FFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA4Cu;
        // 0x1ffa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA54u;
        goto label_1ffa54;
    }
    ctx->pc = 0x1FFA4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFA54u);
    ctx->pc = 0x1FFA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA4Cu;
    // 0x1ffa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x1FFA4Cu, 0x1FFA54u)) {
        return;
    }
    ctx->pc = 0x1FFA54u;
label_1ffa54:
    // 0x1ffa54: 0xc08181a  jal         func_206068
label_1ffa58:
    if (ctx->pc == 0x1FFA58u) {
        ctx->pc = 0x1FFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA54u;
        // 0x1ffa58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA5Cu;
        goto label_1ffa5c;
    }
    ctx->pc = 0x1FFA54u;
    SET_GPR_U32(ctx, 31, 0x1FFA5Cu);
    ctx->pc = 0x1FFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA54u;
    // 0x1ffa58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206068u, 0x1FFA54u, 0x1FFA5Cu)) {
        return;
    }
    ctx->pc = 0x1FFA5Cu;
label_1ffa5c:
    // 0x1ffa5c: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
label_1ffa60:
    if (ctx->pc == 0x1FFA60u) {
        ctx->pc = 0x1FFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA5Cu;
        // 0x1ffa60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA64u;
        goto label_1ffa64;
    }
    ctx->pc = 0x1FFA5Cu;
    {
        const bool branch_taken_0x1ffa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA5Cu;
        // 0x1ffa60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa5c) {
            ctx->pc = 0x1FF9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff9e0;
        }
    }
    ctx->pc = 0x1FFA64u;
label_1ffa64:
    // 0x1ffa64: 0xc080fe2  jal         func_203F88
label_1ffa68:
    if (ctx->pc == 0x1FFA68u) {
        ctx->pc = 0x1FFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA64u;
        // 0x1ffa68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA6Cu;
        goto label_1ffa6c;
    }
    ctx->pc = 0x1FFA64u;
    SET_GPR_U32(ctx, 31, 0x1FFA6Cu);
    ctx->pc = 0x1FFA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA64u;
    // 0x1ffa68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203F88u, 0x1FFA64u, 0x1FFA6Cu)) {
        return;
    }
    ctx->pc = 0x1FFA6Cu;
label_1ffa6c:
    // 0x1ffa6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ffa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa70:
    // 0x1ffa70: 0xc081326  jal         func_204C98
label_1ffa74:
    if (ctx->pc == 0x1FFA74u) {
        ctx->pc = 0x1FFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA70u;
        // 0x1ffa74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA78u;
        goto label_1ffa78;
    }
    ctx->pc = 0x1FFA70u;
    SET_GPR_U32(ctx, 31, 0x1FFA78u);
    ctx->pc = 0x1FFA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA70u;
    // 0x1ffa74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204C98u, 0x1FFA70u, 0x1FFA78u)) {
        return;
    }
    ctx->pc = 0x1FFA78u;
label_1ffa78:
    // 0x1ffa78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ffa78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa7c:
    // 0x1ffa7c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ffa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ffa80:
    // 0x1ffa80: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ffa80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ffa84:
    // 0x1ffa84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ffa84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ffa88:
    // 0x1ffa88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ffa88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ffa8c:
    // 0x1ffa8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ffa8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ffa90:
    // 0x1ffa90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ffa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ffa94:
    // 0x1ffa94: 0x3e00008  jr          $ra
label_1ffa98:
    if (ctx->pc == 0x1FFA98u) {
        ctx->pc = 0x1FFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA94u;
        // 0x1ffa98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA9Cu;
        goto label_1ffa9c;
    }
    ctx->pc = 0x1FFA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA94u;
        // 0x1ffa98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFA9Cu;
label_1ffa9c:
    // 0x1ffa9c: 0x0  nop
    ctx->pc = 0x1ffa9cu;
    // NOP
    ctx->pc = 0x1ffaa0u;
}
