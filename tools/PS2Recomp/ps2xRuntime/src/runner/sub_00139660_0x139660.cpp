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

// Function: sub_00139660
// Address: 0x139660 - 0x139a68
void sub_00139660_0x139660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139660_0x139660");
#endif

    switch (ctx->pc) {
        case 0x139688u: goto label_139688;
        case 0x1396a8u: goto label_1396a8;
        case 0x1396c8u: goto label_1396c8;
        case 0x1396e8u: goto label_1396e8;
        case 0x139704u: goto label_139704;
        case 0x139734u: goto label_139734;
        case 0x139754u: goto label_139754;
        case 0x139770u: goto label_139770;
        case 0x139784u: goto label_139784;
        case 0x1397a4u: goto label_1397a4;
        case 0x1397d8u: goto label_1397d8;
        case 0x139884u: goto label_139884;
        case 0x13988cu: goto label_13988c;
        case 0x1398b8u: goto label_1398b8;
        case 0x1398d8u: goto label_1398d8;
        case 0x139904u: goto label_139904;
        case 0x139958u: goto label_139958;
        case 0x139978u: goto label_139978;
        case 0x139988u: goto label_139988;
        case 0x1399dcu: goto label_1399dc;
        case 0x139a28u: goto label_139a28;
        case 0x139a44u: goto label_139a44;
        default: break;
    }

    ctx->pc = 0x139660u;

    // 0x139660: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x139664: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x139664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x139668: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x139668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x13966c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13966cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139670: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x139670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x139674: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x139674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x139678: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x139678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x13967c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x139680: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x139680u;
    SET_GPR_U32(ctx, 31, 0x139688u);
    ctx->pc = 0x139684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139680u;
    // 0x139684: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x139680u, 0x139688u)) {
        return;
    }
    ctx->pc = 0x139688u;
label_139688:
    // 0x139688: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13968c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139690: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x139690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4768u));
    // 0x139694: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139694u;
    {
        const bool branch_taken_0x139694 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x139698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139694u;
        // 0x139698: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139694) {
            ctx->pc = 0x1396B0u;
            goto label_1396b0;
        }
    }
    ctx->pc = 0x13969Cu;
    // 0x13969c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13969cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1396a0: 0xc04e8ca  jal         func_13A328
    ctx->pc = 0x1396A0u;
    SET_GPR_U32(ctx, 31, 0x1396A8u);
    ctx->pc = 0x1396A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396A0u;
    // 0x1396a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A328u, 0x1396A0u, 0x1396A8u)) {
        return;
    }
    ctx->pc = 0x1396A8u;
label_1396a8:
    // 0x1396a8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x1396A8u;
    {
        const bool branch_taken_0x1396a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396A8u;
        // 0x1396ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396a8) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1396B0u;
label_1396b0:
    // 0x1396b0: 0x8c434770  lw          $v1, 0x4770($v0)
    ctx->pc = 0x1396b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x1396b4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1396B4u;
    {
        const bool branch_taken_0x1396b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1396B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396B4u;
        // 0x1396b8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396b4) {
            ctx->pc = 0x1396D0u;
            goto label_1396d0;
        }
    }
    ctx->pc = 0x1396BCu;
    // 0x1396bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1396bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1396c0: 0xc04e912  jal         func_13A448
    ctx->pc = 0x1396C0u;
    SET_GPR_U32(ctx, 31, 0x1396C8u);
    ctx->pc = 0x1396C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396C0u;
    // 0x1396c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A448u, 0x1396C0u, 0x1396C8u)) {
        return;
    }
    ctx->pc = 0x1396C8u;
label_1396c8:
    // 0x1396c8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1396C8u;
    {
        const bool branch_taken_0x1396c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396C8u;
        // 0x1396cc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396c8) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1396D0u;
label_1396d0:
    // 0x1396d0: 0x8c434778  lw          $v1, 0x4778($v0)
    ctx->pc = 0x1396d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x1396d4: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1396D4u;
    {
        const bool branch_taken_0x1396d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1396D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396D4u;
        // 0x1396d8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396d4) {
            ctx->pc = 0x13973Cu;
            goto label_13973c;
        }
    }
    ctx->pc = 0x1396DCu;
    // 0x1396dc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1396e0: 0xc04e8b8  jal         func_13A2E0
    ctx->pc = 0x1396E0u;
    SET_GPR_U32(ctx, 31, 0x1396E8u);
    ctx->pc = 0x1396E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396E0u;
    // 0x1396e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A2E0u, 0x1396E0u, 0x1396E8u)) {
        return;
    }
    ctx->pc = 0x1396E8u;
label_1396e8:
    // 0x1396e8: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1396E8u;
    {
        const bool branch_taken_0x1396e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396E8u;
        // 0x1396ec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396e8) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1396F0u;
    // 0x1396f0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1396f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1396f4: 0x520000d4  beql        $s0, $zero, . + 4 + (0xD4 << 2)
    ctx->pc = 0x1396F4u;
    {
        const bool branch_taken_0x1396f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1396f4) {
            ctx->pc = 0x1396F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1396F4u;
            // 0x1396f8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1396FCu;
    // 0x1396fc: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x1396FCu;
    SET_GPR_U32(ctx, 31, 0x139704u);
    ctx->pc = 0x139700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396FCu;
    // 0x139700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x1396FCu, 0x139704u)) {
        return;
    }
    ctx->pc = 0x139704u;
label_139704:
    // 0x139704: 0x544000d0  bnel        $v0, $zero, . + 4 + (0xD0 << 2)
    ctx->pc = 0x139704u;
    {
        const bool branch_taken_0x139704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139704) {
            ctx->pc = 0x139708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139704u;
            // 0x139708: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x13970Cu;
    // 0x13970c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x139710: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x139710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x139714: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x139714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x139718: 0x508000cb  beql        $a0, $zero, . + 4 + (0xCB << 2)
    ctx->pc = 0x139718u;
    {
        const bool branch_taken_0x139718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139718) {
            ctx->pc = 0x13971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139718u;
            // 0x13971c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139720u;
    // 0x139720: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x139720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x139724: 0x508000c8  beql        $a0, $zero, . + 4 + (0xC8 << 2)
    ctx->pc = 0x139724u;
    {
        const bool branch_taken_0x139724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139724) {
            ctx->pc = 0x139728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139724u;
            // 0x139728: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x13972Cu;
    // 0x13972c: 0xc09795e  jal         func_25E578
    ctx->pc = 0x13972Cu;
    SET_GPR_U32(ctx, 31, 0x139734u);
    ctx->pc = 0x139730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13972Cu;
    // 0x139730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x13972Cu, 0x139734u)) {
        return;
    }
    ctx->pc = 0x139734u;
label_139734:
    // 0x139734: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x139734u;
    {
        const bool branch_taken_0x139734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139734u;
        // 0x139738: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139734) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x13973Cu;
label_13973c:
    // 0x13973c: 0x8c434780  lw          $v1, 0x4780($v0)
    ctx->pc = 0x13973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18304)));
    // 0x139740: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x139740u;
    {
        const bool branch_taken_0x139740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x139744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139740u;
        // 0x139744: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139740) {
            ctx->pc = 0x13978Cu;
            goto label_13978c;
        }
    }
    ctx->pc = 0x139748u;
    // 0x139748: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x139748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13974c: 0xc04e8b8  jal         func_13A2E0
    ctx->pc = 0x13974Cu;
    SET_GPR_U32(ctx, 31, 0x139754u);
    ctx->pc = 0x139750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13974Cu;
    // 0x139750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A2E0u, 0x13974Cu, 0x139754u)) {
        return;
    }
    ctx->pc = 0x139754u;
label_139754:
    // 0x139754: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x139754u;
    {
        const bool branch_taken_0x139754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139754u;
        // 0x139758: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139754) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x13975Cu;
    // 0x13975c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x13975cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139760: 0x520000b9  beql        $s0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x139760u;
    {
        const bool branch_taken_0x139760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x139760) {
            ctx->pc = 0x139764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139760u;
            // 0x139764: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139768u;
    // 0x139768: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x139768u;
    SET_GPR_U32(ctx, 31, 0x139770u);
    ctx->pc = 0x13976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139768u;
    // 0x13976c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x139768u, 0x139770u)) {
        return;
    }
    ctx->pc = 0x139770u;
label_139770:
    // 0x139770: 0x504000b5  beql        $v0, $zero, . + 4 + (0xB5 << 2)
    ctx->pc = 0x139770u;
    {
        const bool branch_taken_0x139770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139770) {
            ctx->pc = 0x139774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139770u;
            // 0x139774: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139778u;
    // 0x139778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13977c: 0xc09799a  jal         func_25E668
    ctx->pc = 0x13977Cu;
    SET_GPR_U32(ctx, 31, 0x139784u);
    ctx->pc = 0x139780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13977Cu;
    // 0x139780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x13977Cu, 0x139784u)) {
        return;
    }
    ctx->pc = 0x139784u;
label_139784:
    // 0x139784: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x139784u;
    {
        const bool branch_taken_0x139784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139784u;
        // 0x139788: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139784) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x13978Cu;
label_13978c:
    // 0x13978c: 0x8c434788  lw          $v1, 0x4788($v0)
    ctx->pc = 0x13978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18312)));
    // 0x139790: 0x14830040  bne         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x139790u;
    {
        const bool branch_taken_0x139790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x139794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139790u;
        // 0x139794: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139790) {
            ctx->pc = 0x139894u;
            goto label_139894;
        }
    }
    ctx->pc = 0x139798u;
    // 0x139798: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x139798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13979c: 0xc04e8b8  jal         func_13A2E0
    ctx->pc = 0x13979Cu;
    SET_GPR_U32(ctx, 31, 0x1397A4u);
    ctx->pc = 0x1397A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13979Cu;
    // 0x1397a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A2E0u, 0x13979Cu, 0x1397A4u)) {
        return;
    }
    ctx->pc = 0x1397A4u;
label_1397a4:
    // 0x1397a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1397a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397a8: 0x520000a7  beql        $s0, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1397A8u;
    {
        const bool branch_taken_0x1397a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397a8) {
            ctx->pc = 0x1397ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1397A8u;
            // 0x1397ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1397B0u;
    // 0x1397b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1397b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1397b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1397B4u;
    {
        const bool branch_taken_0x1397b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397B4u;
        // 0x1397b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397b4) {
            ctx->pc = 0x1397C8u;
            goto label_1397c8;
        }
    }
    ctx->pc = 0x1397BCu;
    // 0x1397bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1397bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1397c0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1397c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1397c4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1397c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1397c8:
    // 0x1397c8: 0x10c0009e  beqz        $a2, . + 4 + (0x9E << 2)
    ctx->pc = 0x1397C8u;
    {
        const bool branch_taken_0x1397c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397C8u;
        // 0x1397cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397c8) {
            ctx->pc = 0x139A44u;
            goto label_139a44;
        }
    }
    ctx->pc = 0x1397D0u;
    // 0x1397d0: 0xc04e74a  jal         func_139D28
    ctx->pc = 0x1397D0u;
    SET_GPR_U32(ctx, 31, 0x1397D8u);
    ctx->pc = 0x1397D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397D0u;
    // 0x1397d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139D28u, 0x1397D0u, 0x1397D8u)) {
        return;
    }
    ctx->pc = 0x1397D8u;
label_1397d8:
    // 0x1397d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1397d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1397dc: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1397DCu;
    {
        const bool branch_taken_0x1397dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397DCu;
        // 0x1397e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397dc) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1397E4u;
    // 0x1397e4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1397e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1397e8: 0x52000097  beql        $s0, $zero, . + 4 + (0x97 << 2)
    ctx->pc = 0x1397E8u;
    {
        const bool branch_taken_0x1397e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397e8) {
            ctx->pc = 0x1397ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1397E8u;
            // 0x1397ec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1397F0u;
    // 0x1397f0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1397f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1397f4: 0x50800094  beql        $a0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x1397F4u;
    {
        const bool branch_taken_0x1397f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397f4) {
            ctx->pc = 0x1397F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1397F4u;
            // 0x1397f8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1397FCu;
    // 0x1397fc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1397fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x139800: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x139800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x139804: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x139804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139808: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x139808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13980c: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x13980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x139810: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x139810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x139814: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x139814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x139818: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x139818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13981c: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x13981cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139820: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x139820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139824: 0xb203001f  sdl         $v1, 0x1F($s0)
    ctx->pc = 0x139824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139828: 0xb6030018  sdr         $v1, 0x18($s0)
    ctx->pc = 0x139828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13982c: 0xb2060027  sdl         $a2, 0x27($s0)
    ctx->pc = 0x13982cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139830: 0xb6060020  sdr         $a2, 0x20($s0)
    ctx->pc = 0x139830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139834: 0xb207002f  sdl         $a3, 0x2F($s0)
    ctx->pc = 0x139834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139838: 0xb6070028  sdr         $a3, 0x28($s0)
    ctx->pc = 0x139838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13983c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x13983cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x139840: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x139840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x139844: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x139844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139848: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x139848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13984c: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x13984cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x139850: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x139850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x139854: 0x6ba7003f  ldl         $a3, 0x3F($sp)
    ctx->pc = 0x139854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x139858: 0x6fa70038  ldr         $a3, 0x38($sp)
    ctx->pc = 0x139858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13985c: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x13985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139860: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x139860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139864: 0xb203003f  sdl         $v1, 0x3F($s0)
    ctx->pc = 0x139864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139868: 0xb6030038  sdr         $v1, 0x38($s0)
    ctx->pc = 0x139868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13986c: 0xb2060047  sdl         $a2, 0x47($s0)
    ctx->pc = 0x13986cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139870: 0xb6060040  sdr         $a2, 0x40($s0)
    ctx->pc = 0x139870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139874: 0xb207004f  sdl         $a3, 0x4F($s0)
    ctx->pc = 0x139874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139878: 0xb6070048  sdr         $a3, 0x48($s0)
    ctx->pc = 0x139878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13987c: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x13987Cu;
    SET_GPR_U32(ctx, 31, 0x139884u);
    ctx->pc = 0x139880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13987Cu;
    // 0x139880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x13987Cu, 0x139884u)) {
        return;
    }
    ctx->pc = 0x139884u;
label_139884:
    // 0x139884: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x139884u;
    SET_GPR_U32(ctx, 31, 0x13988Cu);
    ctx->pc = 0x139888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139884u;
    // 0x139888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x139884u, 0x13988Cu)) {
        return;
    }
    ctx->pc = 0x13988Cu;
label_13988c:
    // 0x13988c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x13988Cu;
    {
        const bool branch_taken_0x13988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13988Cu;
        // 0x139890: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13988c) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139894u;
label_139894:
    // 0x139894: 0x8c434760  lw          $v1, 0x4760($v0)
    ctx->pc = 0x139894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18272)));
    // 0x139898: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x139898u;
    {
        const bool branch_taken_0x139898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139898u;
        // 0x13989c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139898) {
            ctx->pc = 0x13992Cu;
            goto label_13992c;
        }
    }
    ctx->pc = 0x1398A0u;
    // 0x1398a0: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1398a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1398a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398a8: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1398A8u;
    {
        const bool branch_taken_0x1398a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1398ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398A8u;
        // 0x1398ac: 0xae4001c8  sw          $zero, 0x1C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398a8) {
            ctx->pc = 0x139A44u;
            goto label_139a44;
        }
    }
    ctx->pc = 0x1398B0u;
    // 0x1398b0: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1398b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x1398b4: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x1398b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1398b8:
    // 0x1398b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1398b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1398bc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1398BCu;
    {
        const bool branch_taken_0x1398bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398bc) {
            ctx->pc = 0x1398C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1398BCu;
            // 0x1398c0: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139914u;
            goto label_139914;
        }
    }
    ctx->pc = 0x1398C4u;
    // 0x1398c4: 0x8e30fffc  lw          $s0, -0x4($s1)
    ctx->pc = 0x1398c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x1398c8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1398C8u;
    {
        const bool branch_taken_0x1398c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1398CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398C8u;
        // 0x1398cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398c8) {
            ctx->pc = 0x139908u;
            goto label_139908;
        }
    }
    ctx->pc = 0x1398D0u;
    // 0x1398d0: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x1398D0u;
    SET_GPR_U32(ctx, 31, 0x1398D8u);
    ctx->pc = 0x1398D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398D0u;
    // 0x1398d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x1398D0u, 0x1398D8u)) {
        return;
    }
    ctx->pc = 0x1398D8u;
label_1398d8:
    // 0x1398d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1398D8u;
    {
        const bool branch_taken_0x1398d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1398DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398D8u;
        // 0x1398dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398d8) {
            ctx->pc = 0x139908u;
            goto label_139908;
        }
    }
    ctx->pc = 0x1398E0u;
    // 0x1398e0: 0x8e82870c  lw          $v0, -0x78F4($s4)
    ctx->pc = 0x1398e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936332)));
    // 0x1398e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1398e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1398e8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1398E8u;
    {
        const bool branch_taken_0x1398e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398e8) {
            ctx->pc = 0x1398ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1398E8u;
            // 0x1398ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139908u;
            goto label_139908;
        }
    }
    ctx->pc = 0x1398F0u;
    // 0x1398f0: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x1398f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1398f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1398F4u;
    {
        const bool branch_taken_0x1398f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398f4) {
            ctx->pc = 0x1398F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1398F4u;
            // 0x1398f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139908u;
            goto label_139908;
        }
    }
    ctx->pc = 0x1398FCu;
    // 0x1398fc: 0xc09795e  jal         func_25E578
    ctx->pc = 0x1398FCu;
    SET_GPR_U32(ctx, 31, 0x139904u);
    ctx->pc = 0x139900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398FCu;
    // 0x139900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x1398FCu, 0x139904u)) {
        return;
    }
    ctx->pc = 0x139904u;
label_139904:
    // 0x139904: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x139904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_139908:
    // 0x139908: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x139908u;
    {
        const bool branch_taken_0x139908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139908) {
            ctx->pc = 0x13990Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139908u;
            // 0x13990c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139910u;
            goto label_139910;
        }
    }
    ctx->pc = 0x139910u;
label_139910:
    // 0x139910: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x139910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_139914:
    // 0x139914: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x139914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x139918: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x139918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13991c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x13991Cu;
    {
        const bool branch_taken_0x13991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13991Cu;
        // 0x139920: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13991c) {
            ctx->pc = 0x1398B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1398b8;
        }
    }
    ctx->pc = 0x139924u;
    // 0x139924: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x139924u;
    {
        const bool branch_taken_0x139924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139924u;
        // 0x139928: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139924) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x13992Cu;
label_13992c:
    // 0x13992c: 0x8c434758  lw          $v1, 0x4758($v0)
    ctx->pc = 0x13992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18264)));
    // 0x139930: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x139930u;
    {
        const bool branch_taken_0x139930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x139934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139930u;
        // 0x139934: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139930) {
            ctx->pc = 0x1399B8u;
            goto label_1399b8;
        }
    }
    ctx->pc = 0x139938u;
    // 0x139938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13993c: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x13993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x139940: 0xae4201c8  sw          $v0, 0x1C8($s2)
    ctx->pc = 0x139940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 2));
    // 0x139944: 0x1860003f  blez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x139944u;
    {
        const bool branch_taken_0x139944 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x139948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139944u;
        // 0x139948: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139944) {
            ctx->pc = 0x139A44u;
            goto label_139a44;
        }
    }
    ctx->pc = 0x13994Cu;
    // 0x13994c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x13994cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139950: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x139950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x139954: 0x0  nop
    ctx->pc = 0x139954u;
    // NOP
label_139958:
    // 0x139958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13995c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x13995Cu;
    {
        const bool branch_taken_0x13995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13995c) {
            ctx->pc = 0x139960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13995Cu;
            // 0x139960: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1399A0u;
            goto label_1399a0;
        }
    }
    ctx->pc = 0x139964u;
    // 0x139964: 0x8e30fffc  lw          $s0, -0x4($s1)
    ctx->pc = 0x139964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x139968: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x139968u;
    {
        const bool branch_taken_0x139968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139968u;
        // 0x13996c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139968) {
            ctx->pc = 0x139994u;
            goto label_139994;
        }
    }
    ctx->pc = 0x139970u;
    // 0x139970: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x139970u;
    SET_GPR_U32(ctx, 31, 0x139978u);
    ctx->pc = 0x139974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139970u;
    // 0x139974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x139970u, 0x139978u)) {
        return;
    }
    ctx->pc = 0x139978u;
label_139978:
    // 0x139978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139978u;
    {
        const bool branch_taken_0x139978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139978u;
        // 0x13997c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139978) {
            ctx->pc = 0x139990u;
            goto label_139990;
        }
    }
    ctx->pc = 0x139980u;
    // 0x139980: 0xc09799a  jal         func_25E668
    ctx->pc = 0x139980u;
    SET_GPR_U32(ctx, 31, 0x139988u);
    ctx->pc = 0x139984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139980u;
    // 0x139984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x139980u, 0x139988u)) {
        return;
    }
    ctx->pc = 0x139988u;
label_139988:
    // 0x139988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139988u;
    {
        const bool branch_taken_0x139988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139988u;
        // 0x13998c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139988) {
            ctx->pc = 0x139994u;
            goto label_139994;
        }
    }
    ctx->pc = 0x139990u;
label_139990:
    // 0x139990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139994:
    // 0x139994: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x139994u;
    {
        const bool branch_taken_0x139994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139994) {
            ctx->pc = 0x139998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139994u;
            // 0x139998: 0xae340000  sw          $s4, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13999Cu;
            goto label_13999c;
        }
    }
    ctx->pc = 0x13999Cu;
label_13999c:
    // 0x13999c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x13999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1399a0:
    // 0x1399a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1399a4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1399a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1399a8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1399A8u;
    {
        const bool branch_taken_0x1399a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1399ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399A8u;
        // 0x1399ac: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399a8) {
            ctx->pc = 0x139958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139958;
        }
    }
    ctx->pc = 0x1399B0u;
    // 0x1399b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1399B0u;
    {
        const bool branch_taken_0x1399b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399B0u;
        // 0x1399b4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399b0) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1399B8u;
label_1399b8:
    // 0x1399b8: 0x8c434790  lw          $v1, 0x4790($v0)
    ctx->pc = 0x1399b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x1399bc: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1399BCu;
    {
        const bool branch_taken_0x1399bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1399C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399BCu;
        // 0x1399c0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399bc) {
            ctx->pc = 0x139A30u;
            goto label_139a30;
        }
    }
    ctx->pc = 0x1399C4u;
    // 0x1399c4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1399c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1399c8: 0x50c0001f  beql        $a2, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1399C8u;
    {
        const bool branch_taken_0x1399c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1399c8) {
            ctx->pc = 0x1399CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1399C8u;
            // 0x1399cc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x1399D0u;
    // 0x1399d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1399d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399d4: 0xc04e74a  jal         func_139D28
    ctx->pc = 0x1399D4u;
    SET_GPR_U32(ctx, 31, 0x1399DCu);
    ctx->pc = 0x1399D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399D4u;
    // 0x1399d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139D28u, 0x1399D4u, 0x1399DCu)) {
        return;
    }
    ctx->pc = 0x1399DCu;
label_1399dc:
    // 0x1399dc: 0x8e4201c8  lw          $v0, 0x1C8($s2)
    ctx->pc = 0x1399dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x1399e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1399E0u;
    {
        const bool branch_taken_0x1399e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399E0u;
        // 0x1399e4: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399e0) {
            ctx->pc = 0x1399FCu;
            goto label_1399fc;
        }
    }
    ctx->pc = 0x1399E8u;
    // 0x1399e8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1399e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1399ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1399ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1399f0: 0x0  nop
    ctx->pc = 0x1399f0u;
    // NOP
    // 0x1399f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1399f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1399f8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1399f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1399fc:
    // 0x1399fc: 0x8e4401cc  lw          $a0, 0x1CC($s2)
    ctx->pc = 0x1399fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
    // 0x139a00: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x139a04: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x139a08: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x139a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x139a0c: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x139A0Cu;
    {
        const bool branch_taken_0x139a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x139A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A0Cu;
        // 0x139a10: 0xafbd0044  sw          $sp, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a0c) {
            ctx->pc = 0x139A44u;
            goto label_139a44;
        }
    }
    ctx->pc = 0x139A14u;
    // 0x139a14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x139a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x139a18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x139A18u;
    {
        const bool branch_taken_0x139a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A18u;
        // 0x139a1c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a18) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139A20u;
    // 0x139a20: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x139A20u;
    SET_GPR_U32(ctx, 31, 0x139A28u);
    ctx->pc = 0x139A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A20u;
    // 0x139a24: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x139A20u, 0x139A28u)) {
        return;
    }
    ctx->pc = 0x139A28u;
label_139a28:
    // 0x139a28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x139A28u;
    {
        const bool branch_taken_0x139a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A28u;
        // 0x139a2c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a28) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139A30u;
label_139a30:
    // 0x139a30: 0x8c43f8a8  lw          $v1, -0x758($v0)
    ctx->pc = 0x139a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965416)));
    // 0x139a34: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x139A34u;
    {
        const bool branch_taken_0x139a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x139A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A34u;
        // 0x139a38: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a34) {
            ctx->pc = 0x139A48u;
            goto label_139a48;
        }
    }
    ctx->pc = 0x139A3Cu;
    // 0x139a3c: 0xc04e94e  jal         func_13A538
    ctx->pc = 0x139A3Cu;
    SET_GPR_U32(ctx, 31, 0x139A44u);
    ctx->pc = 0x139A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A3Cu;
    // 0x139a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A538u, 0x139A3Cu, 0x139A44u)) {
        return;
    }
    ctx->pc = 0x139A44u;
label_139a44:
    // 0x139a44: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x139a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_139a48:
    // 0x139a48: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x139a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139a4c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x139a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139a50: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x139a50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139a54: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x139a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139a58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x139a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x139A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A5Cu;
        // 0x139a60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139A64u;
    // 0x139a64: 0x0  nop
    ctx->pc = 0x139a64u;
    // NOP
    ctx->pc = 0x139a68u;
}
