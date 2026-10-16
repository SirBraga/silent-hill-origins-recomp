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

// Function: sub_0028D4B8
// Address: 0x28d4b8 - 0x28d708
void sub_0028D4B8_0x28d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D4B8_0x28d4b8");
#endif

    switch (ctx->pc) {
        case 0x28d4e4u: goto label_28d4e4;
        case 0x28d504u: goto label_28d504;
        case 0x28d510u: goto label_28d510;
        case 0x28d550u: goto label_28d550;
        case 0x28d568u: goto label_28d568;
        case 0x28d58cu: goto label_28d58c;
        case 0x28d5a4u: goto label_28d5a4;
        case 0x28d5c8u: goto label_28d5c8;
        case 0x28d5e0u: goto label_28d5e0;
        case 0x28d5f8u: goto label_28d5f8;
        case 0x28d60cu: goto label_28d60c;
        case 0x28d624u: goto label_28d624;
        case 0x28d640u: goto label_28d640;
        case 0x28d658u: goto label_28d658;
        case 0x28d674u: goto label_28d674;
        case 0x28d68cu: goto label_28d68c;
        case 0x28d6a8u: goto label_28d6a8;
        case 0x28d6c0u: goto label_28d6c0;
        default: break;
    }

    ctx->pc = 0x28d4b8u;

    // 0x28d4b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28d4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28d4bc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x28d4c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x28d4c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x28d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x28d4cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28d4d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28d4d4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x28d4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d4dc: 0xc0a25b2  jal         func_2896C8
    ctx->pc = 0x28D4DCu;
    SET_GPR_U32(ctx, 31, 0x28D4E4u);
    ctx->pc = 0x28D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4DCu;
    // 0x28d4e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896C8u, 0x28D4DCu, 0x28D4E4u)) {
        return;
    }
    ctx->pc = 0x28D4E4u;
label_28d4e4:
    // 0x28d4e4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D4E4u;
    {
        const bool branch_taken_0x28d4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4E4u;
        // 0x28d4e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4e4) {
            ctx->pc = 0x28D4F4u;
            goto label_28d4f4;
        }
    }
    ctx->pc = 0x28D4ECu;
    // 0x28d4ec: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x28D4ECu;
    {
        const bool branch_taken_0x28d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4ECu;
        // 0x28d4f0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4ec) {
            ctx->pc = 0x28D6DCu;
            goto label_28d6dc;
        }
    }
    ctx->pc = 0x28D4F4u;
label_28d4f4:
    // 0x28d4f4: 0x8e3000b0  lw          $s0, 0xB0($s1)
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x28d4f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28d4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4fc: 0xc09294c  jal         func_24A530
    ctx->pc = 0x28D4FCu;
    SET_GPR_U32(ctx, 31, 0x28D504u);
    ctx->pc = 0x28D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4FCu;
    // 0x28d500: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28D4FCu, 0x28D504u)) {
        return;
    }
    ctx->pc = 0x28D504u;
label_28d504:
    // 0x28d504: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28d504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d508: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28D508u;
    SET_GPR_U32(ctx, 31, 0x28D510u);
    ctx->pc = 0x28D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D508u;
    // 0x28d50c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28D508u, 0x28D510u)) {
        return;
    }
    ctx->pc = 0x28D510u;
label_28d510:
    // 0x28d510: 0x1a400071  blez        $s2, . + 4 + (0x71 << 2)
    ctx->pc = 0x28D510u;
    {
        const bool branch_taken_0x28d510 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x28D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D510u;
        // 0x28d514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d510) {
            ctx->pc = 0x28D6D8u;
            goto label_28d6d8;
        }
    }
    ctx->pc = 0x28D518u;
    // 0x28d518: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x28d518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d51c: 0x141023  negu        $v0, $s4
    ctx->pc = 0x28d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d520: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x28d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x28d524: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x28D524u;
    {
        const bool branch_taken_0x28d524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D524u;
        // 0x28d528: 0x26720008  addiu       $s2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d524) {
            ctx->pc = 0x28D5F4u;
            goto label_28d5f4;
        }
    }
    ctx->pc = 0x28D52Cu;
    // 0x28d52c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28d52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28d530: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28D530u;
    {
        const bool branch_taken_0x28d530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D530u;
        // 0x28d534: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d530) {
            ctx->pc = 0x28D5B4u;
            goto label_28d5b4;
        }
    }
    ctx->pc = 0x28D538u;
    // 0x28d538: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D538u;
    {
        const bool branch_taken_0x28d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D538u;
        // 0x28d53c: 0x8e44fffc  lw          $a0, -0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d538) {
            ctx->pc = 0x28D57Cu;
            goto label_28d57c;
        }
    }
    ctx->pc = 0x28D540u;
    // 0x28d540: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D540u;
    {
        const bool branch_taken_0x28d540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D540u;
        // 0x28d544: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d540) {
            ctx->pc = 0x28D554u;
            goto label_28d554;
        }
    }
    ctx->pc = 0x28D548u;
    // 0x28d548: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D548u;
    SET_GPR_U32(ctx, 31, 0x28D550u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D548u, 0x28D550u)) {
        return;
    }
    ctx->pc = 0x28D550u;
label_28d550:
    // 0x28d550: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d554:
    // 0x28d554: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28d558: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D558u;
    {
        const bool branch_taken_0x28d558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D558u;
        // 0x28d55c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d558) {
            ctx->pc = 0x28D570u;
            goto label_28d570;
        }
    }
    ctx->pc = 0x28D560u;
    // 0x28d560: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D560u;
    SET_GPR_U32(ctx, 31, 0x28D568u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D560u, 0x28D568u)) {
        return;
    }
    ctx->pc = 0x28D568u;
label_28d568:
    // 0x28d568: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d56c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28d56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d570:
    // 0x28d570: 0x26720014  addiu       $s2, $s3, 0x14
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x28d574: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28d574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28d578: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_28d57c:
    // 0x28d57c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D57Cu;
    {
        const bool branch_taken_0x28d57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D57Cu;
        // 0x28d580: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d57c) {
            ctx->pc = 0x28D590u;
            goto label_28d590;
        }
    }
    ctx->pc = 0x28D584u;
    // 0x28d584: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D584u;
    SET_GPR_U32(ctx, 31, 0x28D58Cu);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D584u, 0x28D58Cu)) {
        return;
    }
    ctx->pc = 0x28D58Cu;
label_28d58c:
    // 0x28d58c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d590:
    // 0x28d590: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28d590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d594: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D594u;
    {
        const bool branch_taken_0x28d594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d594) {
            ctx->pc = 0x28D598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D594u;
            // 0x28d598: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D5ACu;
            goto label_28d5ac;
        }
    }
    ctx->pc = 0x28D59Cu;
    // 0x28d59c: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D59Cu;
    SET_GPR_U32(ctx, 31, 0x28D5A4u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D59Cu, 0x28D5A4u)) {
        return;
    }
    ctx->pc = 0x28D5A4u;
label_28d5a4:
    // 0x28d5a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d5a8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d5ac:
    // 0x28d5ac: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x28d5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x28d5b0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28d5b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_28d5b4:
    // 0x28d5b4: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x28d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x28d5b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D5B8u;
    {
        const bool branch_taken_0x28d5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5B8u;
        // 0x28d5bc: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5b8) {
            ctx->pc = 0x28D5CCu;
            goto label_28d5cc;
        }
    }
    ctx->pc = 0x28D5C0u;
    // 0x28d5c0: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D5C0u;
    SET_GPR_U32(ctx, 31, 0x28D5C8u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D5C0u, 0x28D5C8u)) {
        return;
    }
    ctx->pc = 0x28D5C8u;
label_28d5c8:
    // 0x28d5c8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d5cc:
    // 0x28d5cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d5d0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D5D0u;
    {
        const bool branch_taken_0x28d5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d5d0) {
            ctx->pc = 0x28D5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D5D0u;
            // 0x28d5d4: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D5E8u;
            goto label_28d5e8;
        }
    }
    ctx->pc = 0x28D5D8u;
    // 0x28d5d8: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D5D8u;
    SET_GPR_U32(ctx, 31, 0x28D5E0u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D5D8u, 0x28D5E0u)) {
        return;
    }
    ctx->pc = 0x28D5E0u;
label_28d5e0:
    // 0x28d5e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d5e4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d5e8:
    // 0x28d5e8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28d5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28d5ec: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x28D5ECu;
    {
        const bool branch_taken_0x28d5ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5ECu;
        // 0x28d5f0: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5ec) {
            ctx->pc = 0x28D6D8u;
            goto label_28d6d8;
        }
    }
    ctx->pc = 0x28D5F4u;
label_28d5f4:
    // 0x28d5f4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x28d5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d5f8:
    // 0x28d5f8: 0x8e64fffc  lw          $a0, -0x4($s3)
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x28d5fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D5FCu;
    {
        const bool branch_taken_0x28d5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5FCu;
        // 0x28d600: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5fc) {
            ctx->pc = 0x28D610u;
            goto label_28d610;
        }
    }
    ctx->pc = 0x28D604u;
    // 0x28d604: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D604u;
    SET_GPR_U32(ctx, 31, 0x28D60Cu);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D604u, 0x28D60Cu)) {
        return;
    }
    ctx->pc = 0x28D60Cu;
label_28d60c:
    // 0x28d60c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d610:
    // 0x28d610: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d614: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D614u;
    {
        const bool branch_taken_0x28d614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d614) {
            ctx->pc = 0x28D618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D614u;
            // 0x28d618: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D62Cu;
            goto label_28d62c;
        }
    }
    ctx->pc = 0x28D61Cu;
    // 0x28d61c: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D61Cu;
    SET_GPR_U32(ctx, 31, 0x28D624u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D61Cu, 0x28D624u)) {
        return;
    }
    ctx->pc = 0x28D624u;
label_28d624:
    // 0x28d624: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d628: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d62c:
    // 0x28d62c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28d630: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D630u;
    {
        const bool branch_taken_0x28d630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D630u;
        // 0x28d634: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d630) {
            ctx->pc = 0x28D644u;
            goto label_28d644;
        }
    }
    ctx->pc = 0x28D638u;
    // 0x28d638: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D638u;
    SET_GPR_U32(ctx, 31, 0x28D640u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D638u, 0x28D640u)) {
        return;
    }
    ctx->pc = 0x28D640u;
label_28d640:
    // 0x28d640: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d644:
    // 0x28d644: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x28d644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28d648: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D648u;
    {
        const bool branch_taken_0x28d648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d648) {
            ctx->pc = 0x28D64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D648u;
            // 0x28d64c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D660u;
            goto label_28d660;
        }
    }
    ctx->pc = 0x28D650u;
    // 0x28d650: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D650u;
    SET_GPR_U32(ctx, 31, 0x28D658u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D650u, 0x28D658u)) {
        return;
    }
    ctx->pc = 0x28D658u;
label_28d658:
    // 0x28d658: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d65c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d660:
    // 0x28d660: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x28d660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x28d664: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D664u;
    {
        const bool branch_taken_0x28d664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D664u;
        // 0x28d668: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d664) {
            ctx->pc = 0x28D678u;
            goto label_28d678;
        }
    }
    ctx->pc = 0x28D66Cu;
    // 0x28d66c: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D66Cu;
    SET_GPR_U32(ctx, 31, 0x28D674u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D66Cu, 0x28D674u)) {
        return;
    }
    ctx->pc = 0x28D674u;
label_28d674:
    // 0x28d674: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d678:
    // 0x28d678: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x28d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x28d67c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D67Cu;
    {
        const bool branch_taken_0x28d67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d67c) {
            ctx->pc = 0x28D680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D67Cu;
            // 0x28d680: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D694u;
            goto label_28d694;
        }
    }
    ctx->pc = 0x28D684u;
    // 0x28d684: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D684u;
    SET_GPR_U32(ctx, 31, 0x28D68Cu);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D684u, 0x28D68Cu)) {
        return;
    }
    ctx->pc = 0x28D68Cu;
label_28d68c:
    // 0x28d68c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d690: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d694:
    // 0x28d694: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x28d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x28d698: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D698u;
    {
        const bool branch_taken_0x28d698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D698u;
        // 0x28d69c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d698) {
            ctx->pc = 0x28D6ACu;
            goto label_28d6ac;
        }
    }
    ctx->pc = 0x28D6A0u;
    // 0x28d6a0: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D6A0u;
    SET_GPR_U32(ctx, 31, 0x28D6A8u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D6A0u, 0x28D6A8u)) {
        return;
    }
    ctx->pc = 0x28D6A8u;
label_28d6a8:
    // 0x28d6a8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d6ac:
    // 0x28d6ac: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x28d6b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D6B0u;
    {
        const bool branch_taken_0x28d6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d6b0) {
            ctx->pc = 0x28D6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D6B0u;
            // 0x28d6b4: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D6C8u;
            goto label_28d6c8;
        }
    }
    ctx->pc = 0x28D6B8u;
    // 0x28d6b8: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D6B8u;
    SET_GPR_U32(ctx, 31, 0x28D6C0u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D6B8u, 0x28D6C0u)) {
        return;
    }
    ctx->pc = 0x28D6C0u;
label_28d6c0:
    // 0x28d6c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d6c4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d6c8:
    // 0x28d6c8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x28d6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x28d6cc: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x28d6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x28d6d0: 0x1680ffc9  bnez        $s4, . + 4 + (-0x37 << 2)
    ctx->pc = 0x28D6D0u;
    {
        const bool branch_taken_0x28d6d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6D0u;
        // 0x28d6d4: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6d0) {
            ctx->pc = 0x28D5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d5f8;
        }
    }
    ctx->pc = 0x28D6D8u;
label_28d6d8:
    // 0x28d6d8: 0x2b1a821  addu        $s5, $s5, $s1
    ctx->pc = 0x28d6d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_28d6dc:
    // 0x28d6dc: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x28d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x28d6e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28d6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d6e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28d6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d6e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28d6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d6ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28d6ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d6f0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28d6f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d6f4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x28d6f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6FCu;
        // 0x28d700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D704u;
    // 0x28d704: 0x0  nop
    ctx->pc = 0x28d704u;
    // NOP
    ctx->pc = 0x28d708u;
}
