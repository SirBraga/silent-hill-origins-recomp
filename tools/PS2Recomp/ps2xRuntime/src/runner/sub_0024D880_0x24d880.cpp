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

// Function: sub_0024D880
// Address: 0x24d880 - 0x24d9a8
void sub_0024D880_0x24d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D880_0x24d880");
#endif

    switch (ctx->pc) {
        case 0x24d880u: goto label_24d880;
        case 0x24d884u: goto label_24d884;
        case 0x24d888u: goto label_24d888;
        case 0x24d88cu: goto label_24d88c;
        case 0x24d890u: goto label_24d890;
        case 0x24d894u: goto label_24d894;
        case 0x24d898u: goto label_24d898;
        case 0x24d89cu: goto label_24d89c;
        case 0x24d8a0u: goto label_24d8a0;
        case 0x24d8a4u: goto label_24d8a4;
        case 0x24d8a8u: goto label_24d8a8;
        case 0x24d8acu: goto label_24d8ac;
        case 0x24d8b0u: goto label_24d8b0;
        case 0x24d8b4u: goto label_24d8b4;
        case 0x24d8b8u: goto label_24d8b8;
        case 0x24d8bcu: goto label_24d8bc;
        case 0x24d8c0u: goto label_24d8c0;
        case 0x24d8c4u: goto label_24d8c4;
        case 0x24d8c8u: goto label_24d8c8;
        case 0x24d8ccu: goto label_24d8cc;
        case 0x24d8d0u: goto label_24d8d0;
        case 0x24d8d4u: goto label_24d8d4;
        case 0x24d8d8u: goto label_24d8d8;
        case 0x24d8dcu: goto label_24d8dc;
        case 0x24d8e0u: goto label_24d8e0;
        case 0x24d8e4u: goto label_24d8e4;
        case 0x24d8e8u: goto label_24d8e8;
        case 0x24d8ecu: goto label_24d8ec;
        case 0x24d8f0u: goto label_24d8f0;
        case 0x24d8f4u: goto label_24d8f4;
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d8fcu: goto label_24d8fc;
        case 0x24d900u: goto label_24d900;
        case 0x24d904u: goto label_24d904;
        case 0x24d908u: goto label_24d908;
        case 0x24d90cu: goto label_24d90c;
        case 0x24d910u: goto label_24d910;
        case 0x24d914u: goto label_24d914;
        case 0x24d918u: goto label_24d918;
        case 0x24d91cu: goto label_24d91c;
        case 0x24d920u: goto label_24d920;
        case 0x24d924u: goto label_24d924;
        case 0x24d928u: goto label_24d928;
        case 0x24d92cu: goto label_24d92c;
        case 0x24d930u: goto label_24d930;
        case 0x24d934u: goto label_24d934;
        case 0x24d938u: goto label_24d938;
        case 0x24d93cu: goto label_24d93c;
        case 0x24d940u: goto label_24d940;
        case 0x24d944u: goto label_24d944;
        case 0x24d948u: goto label_24d948;
        case 0x24d94cu: goto label_24d94c;
        case 0x24d950u: goto label_24d950;
        case 0x24d954u: goto label_24d954;
        case 0x24d958u: goto label_24d958;
        case 0x24d95cu: goto label_24d95c;
        case 0x24d960u: goto label_24d960;
        case 0x24d964u: goto label_24d964;
        case 0x24d968u: goto label_24d968;
        case 0x24d96cu: goto label_24d96c;
        case 0x24d970u: goto label_24d970;
        case 0x24d974u: goto label_24d974;
        case 0x24d978u: goto label_24d978;
        case 0x24d97cu: goto label_24d97c;
        case 0x24d980u: goto label_24d980;
        case 0x24d984u: goto label_24d984;
        case 0x24d988u: goto label_24d988;
        case 0x24d98cu: goto label_24d98c;
        case 0x24d990u: goto label_24d990;
        case 0x24d994u: goto label_24d994;
        case 0x24d998u: goto label_24d998;
        case 0x24d99cu: goto label_24d99c;
        case 0x24d9a0u: goto label_24d9a0;
        case 0x24d9a4u: goto label_24d9a4;
        default: break;
    }

    ctx->pc = 0x24d880u;

label_24d880:
    // 0x24d880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24d884:
    // 0x24d884: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24d888:
    // 0x24d888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24d88c:
    // 0x24d88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d890:
    // 0x24d890: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_24d894:
    if (ctx->pc == 0x24D894u) {
        ctx->pc = 0x24D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D890u;
        // 0x24d894: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D898u;
        goto label_24d898;
    }
    ctx->pc = 0x24D890u;
    {
        const bool branch_taken_0x24d890 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D890u;
        // 0x24d894: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d890) {
            ctx->pc = 0x24D8A0u;
            goto label_24d8a0;
        }
    }
    ctx->pc = 0x24D898u;
label_24d898:
    // 0x24d898: 0x1000003d  b           . + 4 + (0x3D << 2)
label_24d89c:
    if (ctx->pc == 0x24D89Cu) {
        ctx->pc = 0x24D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D898u;
        // 0x24d89c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8A0u;
        goto label_24d8a0;
    }
    ctx->pc = 0x24D898u;
    {
        const bool branch_taken_0x24d898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D898u;
        // 0x24d89c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d898) {
            ctx->pc = 0x24D990u;
            goto label_24d990;
        }
    }
    ctx->pc = 0x24D8A0u;
label_24d8a0:
    // 0x24d8a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d8a4:
    // 0x24d8a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d8a8:
    // 0x24d8a8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_24d8ac:
    if (ctx->pc == 0x24D8ACu) {
        ctx->pc = 0x24D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A8u;
        // 0x24d8ac: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8B0u;
        goto label_24d8b0;
    }
    ctx->pc = 0x24D8A8u;
    {
        const bool branch_taken_0x24d8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A8u;
        // 0x24d8ac: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8a8) {
            ctx->pc = 0x24D920u;
            goto label_24d920;
        }
    }
    ctx->pc = 0x24D8B0u;
label_24d8b0:
    // 0x24d8b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_24d8b4:
    if (ctx->pc == 0x24D8B4u) {
        ctx->pc = 0x24D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B0u;
        // 0x24d8b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8B8u;
        goto label_24d8b8;
    }
    ctx->pc = 0x24D8B0u;
    {
        const bool branch_taken_0x24d8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B0u;
        // 0x24d8b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8b0) {
            ctx->pc = 0x24D8C8u;
            goto label_24d8c8;
        }
    }
    ctx->pc = 0x24D8B8u;
label_24d8b8:
    // 0x24d8b8: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
label_24d8bc:
    if (ctx->pc == 0x24D8BCu) {
        ctx->pc = 0x24D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B8u;
        // 0x24d8bc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8C0u;
        goto label_24d8c0;
    }
    ctx->pc = 0x24D8B8u;
    {
        const bool branch_taken_0x24d8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d8b8) {
            ctx->pc = 0x24D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D8B8u;
            // 0x24d8bc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D954u;
            goto label_24d954;
        }
    }
    ctx->pc = 0x24D8C0u;
label_24d8c0:
    // 0x24d8c0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_24d8c4:
    if (ctx->pc == 0x24D8C4u) {
        ctx->pc = 0x24D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C0u;
        // 0x24d8c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8C8u;
        goto label_24d8c8;
    }
    ctx->pc = 0x24D8C0u;
    {
        const bool branch_taken_0x24d8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C0u;
        // 0x24d8c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8c0) {
            ctx->pc = 0x24D970u;
            goto label_24d970;
        }
    }
    ctx->pc = 0x24D8C8u;
label_24d8c8:
    // 0x24d8c8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_24d8cc:
    if (ctx->pc == 0x24D8CCu) {
        ctx->pc = 0x24D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C8u;
        // 0x24d8cc: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8D0u;
        goto label_24d8d0;
    }
    ctx->pc = 0x24D8C8u;
    {
        const bool branch_taken_0x24d8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C8u;
        // 0x24d8cc: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8c8) {
            ctx->pc = 0x24D968u;
            goto label_24d968;
        }
    }
    ctx->pc = 0x24D8D0u;
label_24d8d0:
    // 0x24d8d0: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x24d8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d8d4:
    // 0x24d8d4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24d8d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_24d8d8:
    // 0x24d8d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24d8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d8dc:
    // 0x24d8dc: 0xc09cce2  jal         func_273388
label_24d8e0:
    if (ctx->pc == 0x24D8E0u) {
        ctx->pc = 0x24D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8DCu;
        // 0x24d8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8E4u;
        goto label_24d8e4;
    }
    ctx->pc = 0x24D8DCu;
    SET_GPR_U32(ctx, 31, 0x24D8E4u);
    ctx->pc = 0x24D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8DCu;
    // 0x24d8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273388u, 0x24D8DCu, 0x24D8E4u)) {
        return;
    }
    ctx->pc = 0x24D8E4u;
label_24d8e4:
    // 0x24d8e4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_24d8e8:
    if (ctx->pc == 0x24D8E8u) {
        ctx->pc = 0x24D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8E4u;
        // 0x24d8e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8ECu;
        goto label_24d8ec;
    }
    ctx->pc = 0x24D8E4u;
    {
        const bool branch_taken_0x24d8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8E4u;
        // 0x24d8e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8e4) {
            ctx->pc = 0x24D990u;
            goto label_24d990;
        }
    }
    ctx->pc = 0x24D8ECu;
label_24d8ec:
    // 0x24d8ec: 0xc09cd18  jal         func_273460
label_24d8f0:
    if (ctx->pc == 0x24D8F0u) {
        ctx->pc = 0x24D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8ECu;
        // 0x24d8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8F4u;
        goto label_24d8f4;
    }
    ctx->pc = 0x24D8ECu;
    SET_GPR_U32(ctx, 31, 0x24D8F4u);
    ctx->pc = 0x24D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8ECu;
    // 0x24d8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273460u, 0x24D8ECu, 0x24D8F4u)) {
        return;
    }
    ctx->pc = 0x24D8F4u;
label_24d8f4:
    // 0x24d8f4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_24d8f8:
    if (ctx->pc == 0x24D8F8u) {
        ctx->pc = 0x24D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8F4u;
        // 0x24d8f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8FCu;
        goto label_24d8fc;
    }
    ctx->pc = 0x24D8F4u;
    {
        const bool branch_taken_0x24d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8F4u;
        // 0x24d8f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8f4) {
            ctx->pc = 0x24D98Cu;
            goto label_24d98c;
        }
    }
    ctx->pc = 0x24D8FCu;
label_24d8fc:
    // 0x24d8fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24d900:
    // 0x24d900: 0xc092848  jal         func_24A120
label_24d904:
    if (ctx->pc == 0x24D904u) {
        ctx->pc = 0x24D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D900u;
        // 0x24d904: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D908u;
        goto label_24d908;
    }
    ctx->pc = 0x24D900u;
    SET_GPR_U32(ctx, 31, 0x24D908u);
    ctx->pc = 0x24D904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D900u;
    // 0x24d904: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D900u, 0x24D908u)) {
        return;
    }
    ctx->pc = 0x24D908u;
label_24d908:
    // 0x24d908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d90c:
    // 0x24d90c: 0xc09281a  jal         func_24A068
label_24d910:
    if (ctx->pc == 0x24D910u) {
        ctx->pc = 0x24D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D90Cu;
        // 0x24d910: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D914u;
        goto label_24d914;
    }
    ctx->pc = 0x24D90Cu;
    SET_GPR_U32(ctx, 31, 0x24D914u);
    ctx->pc = 0x24D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D90Cu;
    // 0x24d910: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D90Cu, 0x24D914u)) {
        return;
    }
    ctx->pc = 0x24D914u;
label_24d914:
    // 0x24d914: 0x1000001e  b           . + 4 + (0x1E << 2)
label_24d918:
    if (ctx->pc == 0x24D918u) {
        ctx->pc = 0x24D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D914u;
        // 0x24d918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D91Cu;
        goto label_24d91c;
    }
    ctx->pc = 0x24D914u;
    {
        const bool branch_taken_0x24d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D914u;
        // 0x24d918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d914) {
            ctx->pc = 0x24D990u;
            goto label_24d990;
        }
    }
    ctx->pc = 0x24D91Cu;
label_24d91c:
    // 0x24d91c: 0x0  nop
    ctx->pc = 0x24d91cu;
    // NOP
label_24d920:
    // 0x24d920: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d924:
    // 0x24d924: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x24d924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24d928:
    // 0x24d928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24d92c:
    // 0x24d92c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x24d92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_24d930:
    // 0x24d930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24d934:
    if (ctx->pc == 0x24D934u) {
        ctx->pc = 0x24D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D930u;
        // 0x24d934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D938u;
        goto label_24d938;
    }
    ctx->pc = 0x24D930u;
    {
        const bool branch_taken_0x24d930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D930u;
        // 0x24d934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d930) {
            ctx->pc = 0x24D948u;
            goto label_24d948;
        }
    }
    ctx->pc = 0x24D938u;
label_24d938:
    // 0x24d938: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x24d938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_24d93c:
    // 0x24d93c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24d940:
    // 0x24d940: 0x1000000d  b           . + 4 + (0xD << 2)
label_24d944:
    if (ctx->pc == 0x24D944u) {
        ctx->pc = 0x24D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D940u;
        // 0x24d944: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D948u;
        goto label_24d948;
    }
    ctx->pc = 0x24D940u;
    {
        const bool branch_taken_0x24d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D940u;
        // 0x24d944: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d940) {
            ctx->pc = 0x24D978u;
            goto label_24d978;
        }
    }
    ctx->pc = 0x24D948u;
label_24d948:
    // 0x24d948: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x24d948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_24d94c:
    // 0x24d94c: 0x10000010  b           . + 4 + (0x10 << 2)
label_24d950:
    if (ctx->pc == 0x24D950u) {
        ctx->pc = 0x24D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D94Cu;
        // 0x24d950: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D954u;
        goto label_24d954;
    }
    ctx->pc = 0x24D94Cu;
    {
        const bool branch_taken_0x24d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D94Cu;
        // 0x24d950: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d94c) {
            ctx->pc = 0x24D990u;
            goto label_24d990;
        }
    }
    ctx->pc = 0x24D954u;
label_24d954:
    // 0x24d954: 0x40f809  jalr        $v0
label_24d958:
    if (ctx->pc == 0x24D958u) {
        ctx->pc = 0x24D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D954u;
        // 0x24d958: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D95Cu;
        goto label_24d95c;
    }
    ctx->pc = 0x24D954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D95Cu);
        ctx->pc = 0x24D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D954u;
        // 0x24d958: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D954u, 0x24D95Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D95Cu;
label_24d95c:
    // 0x24d95c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x24d95cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_24d960:
    // 0x24d960: 0x1000000b  b           . + 4 + (0xB << 2)
label_24d964:
    if (ctx->pc == 0x24D964u) {
        ctx->pc = 0x24D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D960u;
        // 0x24d964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D968u;
        goto label_24d968;
    }
    ctx->pc = 0x24D960u;
    {
        const bool branch_taken_0x24d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D960u;
        // 0x24d964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d960) {
            ctx->pc = 0x24D990u;
            goto label_24d990;
        }
    }
    ctx->pc = 0x24D968u;
label_24d968:
    // 0x24d968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d96c:
    // 0x24d96c: 0x0  nop
    ctx->pc = 0x24d96cu;
    // NOP
label_24d970:
    // 0x24d970: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x24d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_24d974:
    // 0x24d974: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24d978:
    // 0x24d978: 0xc092848  jal         func_24A120
label_24d97c:
    if (ctx->pc == 0x24D97Cu) {
        ctx->pc = 0x24D980u;
        goto label_24d980;
    }
    ctx->pc = 0x24D978u;
    SET_GPR_U32(ctx, 31, 0x24D980u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D978u, 0x24D980u)) {
        return;
    }
    ctx->pc = 0x24D980u;
label_24d980:
    // 0x24d980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d984:
    // 0x24d984: 0xc09281a  jal         func_24A068
label_24d988:
    if (ctx->pc == 0x24D988u) {
        ctx->pc = 0x24D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D984u;
        // 0x24d988: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D98Cu;
        goto label_24d98c;
    }
    ctx->pc = 0x24D984u;
    SET_GPR_U32(ctx, 31, 0x24D98Cu);
    ctx->pc = 0x24D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D984u;
    // 0x24d988: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D984u, 0x24D98Cu)) {
        return;
    }
    ctx->pc = 0x24D98Cu;
label_24d98c:
    // 0x24d98c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d990:
    // 0x24d990: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24d990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d994:
    // 0x24d994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24d994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24d998:
    // 0x24d998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24d99c:
    // 0x24d99c: 0x3e00008  jr          $ra
label_24d9a0:
    if (ctx->pc == 0x24D9A0u) {
        ctx->pc = 0x24D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D99Cu;
        // 0x24d9a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9A4u;
        goto label_24d9a4;
    }
    ctx->pc = 0x24D99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D99Cu;
        // 0x24d9a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D9A4u;
label_24d9a4:
    // 0x24d9a4: 0x0  nop
    ctx->pc = 0x24d9a4u;
    // NOP
    ctx->pc = 0x24d9a8u;
}
