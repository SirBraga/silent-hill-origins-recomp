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

// Function: sub_0030D888
// Address: 0x30d888 - 0x30d998
void sub_0030D888_0x30d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D888_0x30d888");
#endif

    switch (ctx->pc) {
        case 0x30d888u: goto label_30d888;
        case 0x30d88cu: goto label_30d88c;
        case 0x30d890u: goto label_30d890;
        case 0x30d894u: goto label_30d894;
        case 0x30d898u: goto label_30d898;
        case 0x30d89cu: goto label_30d89c;
        case 0x30d8a0u: goto label_30d8a0;
        case 0x30d8a4u: goto label_30d8a4;
        case 0x30d8a8u: goto label_30d8a8;
        case 0x30d8acu: goto label_30d8ac;
        case 0x30d8b0u: goto label_30d8b0;
        case 0x30d8b4u: goto label_30d8b4;
        case 0x30d8b8u: goto label_30d8b8;
        case 0x30d8bcu: goto label_30d8bc;
        case 0x30d8c0u: goto label_30d8c0;
        case 0x30d8c4u: goto label_30d8c4;
        case 0x30d8c8u: goto label_30d8c8;
        case 0x30d8ccu: goto label_30d8cc;
        case 0x30d8d0u: goto label_30d8d0;
        case 0x30d8d4u: goto label_30d8d4;
        case 0x30d8d8u: goto label_30d8d8;
        case 0x30d8dcu: goto label_30d8dc;
        case 0x30d8e0u: goto label_30d8e0;
        case 0x30d8e4u: goto label_30d8e4;
        case 0x30d8e8u: goto label_30d8e8;
        case 0x30d8ecu: goto label_30d8ec;
        case 0x30d8f0u: goto label_30d8f0;
        case 0x30d8f4u: goto label_30d8f4;
        case 0x30d8f8u: goto label_30d8f8;
        case 0x30d8fcu: goto label_30d8fc;
        case 0x30d900u: goto label_30d900;
        case 0x30d904u: goto label_30d904;
        case 0x30d908u: goto label_30d908;
        case 0x30d90cu: goto label_30d90c;
        case 0x30d910u: goto label_30d910;
        case 0x30d914u: goto label_30d914;
        case 0x30d918u: goto label_30d918;
        case 0x30d91cu: goto label_30d91c;
        case 0x30d920u: goto label_30d920;
        case 0x30d924u: goto label_30d924;
        case 0x30d928u: goto label_30d928;
        case 0x30d92cu: goto label_30d92c;
        case 0x30d930u: goto label_30d930;
        case 0x30d934u: goto label_30d934;
        case 0x30d938u: goto label_30d938;
        case 0x30d93cu: goto label_30d93c;
        case 0x30d940u: goto label_30d940;
        case 0x30d944u: goto label_30d944;
        case 0x30d948u: goto label_30d948;
        case 0x30d94cu: goto label_30d94c;
        case 0x30d950u: goto label_30d950;
        case 0x30d954u: goto label_30d954;
        case 0x30d958u: goto label_30d958;
        case 0x30d95cu: goto label_30d95c;
        case 0x30d960u: goto label_30d960;
        case 0x30d964u: goto label_30d964;
        case 0x30d968u: goto label_30d968;
        case 0x30d96cu: goto label_30d96c;
        case 0x30d970u: goto label_30d970;
        case 0x30d974u: goto label_30d974;
        case 0x30d978u: goto label_30d978;
        case 0x30d97cu: goto label_30d97c;
        case 0x30d980u: goto label_30d980;
        case 0x30d984u: goto label_30d984;
        case 0x30d988u: goto label_30d988;
        case 0x30d98cu: goto label_30d98c;
        case 0x30d990u: goto label_30d990;
        case 0x30d994u: goto label_30d994;
        default: break;
    }

    ctx->pc = 0x30d888u;

label_30d888:
    // 0x30d888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30d88c:
    // 0x30d88c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30d890:
    // 0x30d890: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30d894:
    // 0x30d894: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30d898:
    // 0x30d898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30d89c:
    // 0x30d89c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30d8a0:
    // 0x30d8a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30d8a4:
    // 0x30d8a4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x30d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_30d8a8:
    // 0x30d8a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30d8ac:
    // 0x30d8ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_30d8b0:
    if (ctx->pc == 0x30D8B0u) {
        ctx->pc = 0x30D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8ACu;
        // 0x30d8b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8B4u;
        goto label_30d8b4;
    }
    ctx->pc = 0x30D8ACu;
    {
        const bool branch_taken_0x30d8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8ACu;
        // 0x30d8b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8ac) {
            ctx->pc = 0x30D8C8u;
            goto label_30d8c8;
        }
    }
    ctx->pc = 0x30D8B4u;
label_30d8b4:
    // 0x30d8b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30d8b8:
    // 0x30d8b8: 0xc092782  jal         func_249E08
label_30d8bc:
    if (ctx->pc == 0x30D8BCu) {
        ctx->pc = 0x30D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8B8u;
        // 0x30d8bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8C0u;
        goto label_30d8c0;
    }
    ctx->pc = 0x30D8B8u;
    SET_GPR_U32(ctx, 31, 0x30D8C0u);
    ctx->pc = 0x30D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D8B8u;
    // 0x30d8bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D8B8u, 0x30D8C0u)) {
        return;
    }
    ctx->pc = 0x30D8C0u;
label_30d8c0:
    // 0x30d8c0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_30d8c4:
    if (ctx->pc == 0x30D8C4u) {
        ctx->pc = 0x30D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8C0u;
        // 0x30d8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8C8u;
        goto label_30d8c8;
    }
    ctx->pc = 0x30D8C0u;
    {
        const bool branch_taken_0x30d8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8C0u;
        // 0x30d8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8c0) {
            ctx->pc = 0x30D97Cu;
            goto label_30d97c;
        }
    }
    ctx->pc = 0x30D8C8u;
label_30d8c8:
    // 0x30d8c8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x30d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_30d8cc:
    // 0x30d8cc: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x30d8ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_30d8d0:
    // 0x30d8d0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x30d8d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_30d8d4:
    // 0x30d8d4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_30d8d8:
    // 0x30d8d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30d8dc:
    // 0x30d8dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30d8e0:
    // 0x30d8e0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_30d8e4:
    if (ctx->pc == 0x30D8E4u) {
        ctx->pc = 0x30D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8E0u;
        // 0x30d8e4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8E8u;
        goto label_30d8e8;
    }
    ctx->pc = 0x30D8E0u;
    {
        const bool branch_taken_0x30d8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8E0u;
        // 0x30d8e4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8e0) {
            ctx->pc = 0x30D928u;
            goto label_30d928;
        }
    }
    ctx->pc = 0x30D8E8u;
label_30d8e8:
    // 0x30d8e8: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x30d8e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_30d8ec:
    // 0x30d8ec: 0xc092782  jal         func_249E08
label_30d8f0:
    if (ctx->pc == 0x30D8F0u) {
        ctx->pc = 0x30D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8ECu;
        // 0x30d8f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8F4u;
        goto label_30d8f4;
    }
    ctx->pc = 0x30D8ECu;
    SET_GPR_U32(ctx, 31, 0x30D8F4u);
    ctx->pc = 0x30D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D8ECu;
    // 0x30d8f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D8ECu, 0x30D8F4u)) {
        return;
    }
    ctx->pc = 0x30D8F4u;
label_30d8f4:
    // 0x30d8f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_30d8f8:
    if (ctx->pc == 0x30D8F8u) {
        ctx->pc = 0x30D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8F4u;
        // 0x30d8f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8FCu;
        goto label_30d8fc;
    }
    ctx->pc = 0x30D8F4u;
    {
        const bool branch_taken_0x30d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8F4u;
        // 0x30d8f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8f4) {
            ctx->pc = 0x30D940u;
            goto label_30d940;
        }
    }
    ctx->pc = 0x30D8FCu;
label_30d8fc:
    // 0x30d8fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30d900:
    // 0x30d900: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_30d904:
    if (ctx->pc == 0x30D904u) {
        ctx->pc = 0x30D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D900u;
        // 0x30d904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D908u;
        goto label_30d908;
    }
    ctx->pc = 0x30D900u;
    {
        const bool branch_taken_0x30d900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D900u;
        // 0x30d904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d900) {
            ctx->pc = 0x30D928u;
            goto label_30d928;
        }
    }
    ctx->pc = 0x30D908u;
label_30d908:
    // 0x30d908: 0xc092782  jal         func_249E08
label_30d90c:
    if (ctx->pc == 0x30D90Cu) {
        ctx->pc = 0x30D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D908u;
        // 0x30d90c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D910u;
        goto label_30d910;
    }
    ctx->pc = 0x30D908u;
    SET_GPR_U32(ctx, 31, 0x30D910u);
    ctx->pc = 0x30D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D908u;
    // 0x30d90c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D908u, 0x30D910u)) {
        return;
    }
    ctx->pc = 0x30D910u;
label_30d910:
    // 0x30d910: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30d914:
    if (ctx->pc == 0x30D914u) {
        ctx->pc = 0x30D918u;
        goto label_30d918;
    }
    ctx->pc = 0x30D910u;
    {
        const bool branch_taken_0x30d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d910) {
            ctx->pc = 0x30D928u;
            goto label_30d928;
        }
    }
    ctx->pc = 0x30D918u;
label_30d918:
    // 0x30d918: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30d91c:
    // 0x30d91c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_30d920:
    if (ctx->pc == 0x30D920u) {
        ctx->pc = 0x30D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D91Cu;
        // 0x30d920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D924u;
        goto label_30d924;
    }
    ctx->pc = 0x30D91Cu;
    {
        const bool branch_taken_0x30d91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D91Cu;
        // 0x30d920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d91c) {
            ctx->pc = 0x30D940u;
            goto label_30d940;
        }
    }
    ctx->pc = 0x30D924u;
label_30d924:
    // 0x30d924: 0x0  nop
    ctx->pc = 0x30d924u;
    // NOP
label_30d928:
    // 0x30d928: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_30d92c:
    if (ctx->pc == 0x30D92Cu) {
        ctx->pc = 0x30D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D928u;
        // 0x30d92c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D930u;
        goto label_30d930;
    }
    ctx->pc = 0x30D928u;
    {
        const bool branch_taken_0x30d928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D928u;
        // 0x30d92c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d928) {
            ctx->pc = 0x30D940u;
            goto label_30d940;
        }
    }
    ctx->pc = 0x30D930u;
label_30d930:
    // 0x30d930: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30d934:
    // 0x30d934: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_30d938:
    // 0x30d938: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30d93c:
    // 0x30d93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d940:
    // 0x30d940: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_30d944:
    if (ctx->pc == 0x30D944u) {
        ctx->pc = 0x30D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D940u;
        // 0x30d944: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D948u;
        goto label_30d948;
    }
    ctx->pc = 0x30D940u;
    {
        const bool branch_taken_0x30d940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d940) {
            ctx->pc = 0x30D944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D940u;
            // 0x30d944: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D950u;
            goto label_30d950;
        }
    }
    ctx->pc = 0x30D948u;
label_30d948:
    // 0x30d948: 0x1000000c  b           . + 4 + (0xC << 2)
label_30d94c:
    if (ctx->pc == 0x30D94Cu) {
        ctx->pc = 0x30D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D948u;
        // 0x30d94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D950u;
        goto label_30d950;
    }
    ctx->pc = 0x30D948u;
    {
        const bool branch_taken_0x30d948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D948u;
        // 0x30d94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d948) {
            ctx->pc = 0x30D97Cu;
            goto label_30d97c;
        }
    }
    ctx->pc = 0x30D950u;
label_30d950:
    // 0x30d950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30d954:
    // 0x30d954: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30d958:
    // 0x30d958: 0x40f809  jalr        $v0
label_30d95c:
    if (ctx->pc == 0x30D95Cu) {
        ctx->pc = 0x30D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D958u;
        // 0x30d95c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D960u;
        goto label_30d960;
    }
    ctx->pc = 0x30D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30D960u);
        ctx->pc = 0x30D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D958u;
        // 0x30d95c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D958u, 0x30D960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D960u;
label_30d960:
    // 0x30d960: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_30d964:
    if (ctx->pc == 0x30D964u) {
        ctx->pc = 0x30D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D960u;
        // 0x30d964: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D968u;
        goto label_30d968;
    }
    ctx->pc = 0x30D960u;
    {
        const bool branch_taken_0x30d960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D960u;
        // 0x30d964: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d960) {
            ctx->pc = 0x30D978u;
            goto label_30d978;
        }
    }
    ctx->pc = 0x30D968u;
label_30d968:
    // 0x30d968: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30d96c:
    // 0x30d96c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30d970:
    // 0x30d970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30d974:
    // 0x30d974: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30d978:
    // 0x30d978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d97c:
    // 0x30d97c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30d97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30d980:
    // 0x30d980: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30d980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30d984:
    // 0x30d984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30d984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30d988:
    // 0x30d988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30d98c:
    // 0x30d98c: 0x3e00008  jr          $ra
label_30d990:
    if (ctx->pc == 0x30D990u) {
        ctx->pc = 0x30D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D98Cu;
        // 0x30d990: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D994u;
        goto label_30d994;
    }
    ctx->pc = 0x30D98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D98Cu;
        // 0x30d990: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D994u;
label_30d994:
    // 0x30d994: 0x0  nop
    ctx->pc = 0x30d994u;
    // NOP
    ctx->pc = 0x30d998u;
}
