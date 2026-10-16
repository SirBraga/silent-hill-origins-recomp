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

// Function: sub_002DD5A8
// Address: 0x2dd5a8 - 0x2dd8f8
void sub_002DD5A8_0x2dd5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD5A8_0x2dd5a8");
#endif

    switch (ctx->pc) {
        case 0x2dd5f4u: goto label_2dd5f4;
        case 0x2dd604u: goto label_2dd604;
        case 0x2dd614u: goto label_2dd614;
        case 0x2dd624u: goto label_2dd624;
        case 0x2dd634u: goto label_2dd634;
        case 0x2dd644u: goto label_2dd644;
        case 0x2dd660u: goto label_2dd660;
        case 0x2dd670u: goto label_2dd670;
        case 0x2dd680u: goto label_2dd680;
        case 0x2dd690u: goto label_2dd690;
        case 0x2dd6a0u: goto label_2dd6a0;
        case 0x2dd70cu: goto label_2dd70c;
        case 0x2dd72cu: goto label_2dd72c;
        case 0x2dd770u: goto label_2dd770;
        case 0x2dd784u: goto label_2dd784;
        case 0x2dd798u: goto label_2dd798;
        case 0x2dd7acu: goto label_2dd7ac;
        case 0x2dd7c0u: goto label_2dd7c0;
        case 0x2dd7d4u: goto label_2dd7d4;
        case 0x2dd7f4u: goto label_2dd7f4;
        case 0x2dd808u: goto label_2dd808;
        case 0x2dd81cu: goto label_2dd81c;
        case 0x2dd830u: goto label_2dd830;
        case 0x2dd844u: goto label_2dd844;
        case 0x2dd8b0u: goto label_2dd8b0;
        case 0x2dd8b8u: goto label_2dd8b8;
        default: break;
    }

    ctx->pc = 0x2dd5a8u;

    // 0x2dd5a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dd5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dd5ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dd5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dd5b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2dd5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2dd5b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dd5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2dd5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2dd5bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2dd5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2dd5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2dd5c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2dd5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5c8: 0x10c00060  beqz        $a2, . + 4 + (0x60 << 2)
    ctx->pc = 0x2DD5C8u;
    {
        const bool branch_taken_0x2dd5c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5C8u;
        // 0x2dd5cc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5c8) {
            ctx->pc = 0x2DD74Cu;
            goto label_2dd74c;
        }
    }
    ctx->pc = 0x2DD5D0u;
    // 0x2dd5d0: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x2DD5D0u;
    {
        const bool branch_taken_0x2dd5d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5D0u;
        // 0x2dd5d4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5d0) {
            ctx->pc = 0x2DD6B0u;
            goto label_2dd6b0;
        }
    }
    ctx->pc = 0x2DD5D8u;
    // 0x2dd5d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2dd5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd5dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dd5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dd5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd5e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2dd5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2dd5ec: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD5ECu;
    SET_GPR_U32(ctx, 31, 0x2DD5F4u);
    ctx->pc = 0x2DD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5ECu;
    // 0x2dd5f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD5ECu, 0x2DD5F4u)) {
        return;
    }
    ctx->pc = 0x2DD5F4u;
label_2dd5f4:
    // 0x2dd5f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5f8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2dd5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2dd5fc: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD5FCu;
    SET_GPR_U32(ctx, 31, 0x2DD604u);
    ctx->pc = 0x2DD600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5FCu;
    // 0x2dd600: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD5FCu, 0x2DD604u)) {
        return;
    }
    ctx->pc = 0x2DD604u;
label_2dd604:
    // 0x2dd604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd608: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x2dd608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2dd60c: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD60Cu;
    SET_GPR_U32(ctx, 31, 0x2DD614u);
    ctx->pc = 0x2DD610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD60Cu;
    // 0x2dd610: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD60Cu, 0x2DD614u)) {
        return;
    }
    ctx->pc = 0x2DD614u;
label_2dd614:
    // 0x2dd614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd618: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x2dd618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2dd61c: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD61Cu;
    SET_GPR_U32(ctx, 31, 0x2DD624u);
    ctx->pc = 0x2DD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD61Cu;
    // 0x2dd620: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD61Cu, 0x2DD624u)) {
        return;
    }
    ctx->pc = 0x2DD624u;
label_2dd624:
    // 0x2dd624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd628: 0x2645000d  addiu       $a1, $s2, 0xD
    ctx->pc = 0x2dd628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
    // 0x2dd62c: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD62Cu;
    SET_GPR_U32(ctx, 31, 0x2DD634u);
    ctx->pc = 0x2DD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD62Cu;
    // 0x2dd630: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD62Cu, 0x2DD634u)) {
        return;
    }
    ctx->pc = 0x2DD634u;
label_2dd634:
    // 0x2dd634: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2dd634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd63c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2DD63Cu;
    SET_GPR_U32(ctx, 31, 0x2DD644u);
    ctx->pc = 0x2DD640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD63Cu;
    // 0x2dd640: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2DD63Cu, 0x2DD644u)) {
        return;
    }
    ctx->pc = 0x2DD644u;
label_2dd644:
    // 0x2dd644: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dd644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd64c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2dd64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2dd650: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dd650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd654: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2dd654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2dd658: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD658u;
    SET_GPR_U32(ctx, 31, 0x2DD660u);
    ctx->pc = 0x2DD65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD658u;
    // 0x2dd65c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD658u, 0x2DD660u)) {
        return;
    }
    ctx->pc = 0x2DD660u;
label_2dd660:
    // 0x2dd660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd664: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x2dd664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2dd668: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD668u;
    SET_GPR_U32(ctx, 31, 0x2DD670u);
    ctx->pc = 0x2DD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD668u;
    // 0x2dd66c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD668u, 0x2DD670u)) {
        return;
    }
    ctx->pc = 0x2DD670u;
label_2dd670:
    // 0x2dd670: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd674: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x2dd674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2dd678: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD678u;
    SET_GPR_U32(ctx, 31, 0x2DD680u);
    ctx->pc = 0x2DD67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD678u;
    // 0x2dd67c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD678u, 0x2DD680u)) {
        return;
    }
    ctx->pc = 0x2DD680u;
label_2dd680:
    // 0x2dd680: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd684: 0x26450019  addiu       $a1, $s2, 0x19
    ctx->pc = 0x2dd684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x2dd688: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD688u;
    SET_GPR_U32(ctx, 31, 0x2DD690u);
    ctx->pc = 0x2DD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD688u;
    // 0x2dd68c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD688u, 0x2DD690u)) {
        return;
    }
    ctx->pc = 0x2DD690u;
label_2dd690:
    // 0x2dd690: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2dd690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd698: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2DD698u;
    SET_GPR_U32(ctx, 31, 0x2DD6A0u);
    ctx->pc = 0x2DD69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD698u;
    // 0x2dd69c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2DD698u, 0x2DD6A0u)) {
        return;
    }
    ctx->pc = 0x2DD6A0u;
label_2dd6a0:
    // 0x2dd6a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dd6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd6a4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2dd6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2dd6a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DD6A8u;
    {
        const bool branch_taken_0x2dd6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6A8u;
        // 0x2dd6ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd6a8) {
            ctx->pc = 0x2DD6F8u;
            goto label_2dd6f8;
        }
    }
    ctx->pc = 0x2DD6B0u;
label_2dd6b0:
    // 0x2dd6b0: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x2dd6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2dd6b4: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x2dd6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2dd6b8: 0x6a45000f  ldl         $a1, 0xF($s2)
    ctx->pc = 0x2dd6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2dd6bc: 0x6e450008  ldr         $a1, 0x8($s2)
    ctx->pc = 0x2dd6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2dd6c0: 0x6a460017  ldl         $a2, 0x17($s2)
    ctx->pc = 0x2dd6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2dd6c4: 0x6e460010  ldr         $a2, 0x10($s2)
    ctx->pc = 0x2dd6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2dd6c8: 0x8a47001b  lwl         $a3, 0x1B($s2)
    ctx->pc = 0x2dd6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2dd6cc: 0x9a470018  lwr         $a3, 0x18($s2)
    ctx->pc = 0x2dd6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2dd6d0: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2dd6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd6d4: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2dd6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd6d8: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x2dd6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd6dc: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x2dd6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd6e0: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x2dd6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd6e4: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x2dd6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd6e8: 0xa887001b  swl         $a3, 0x1B($a0)
    ctx->pc = 0x2dd6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd6ec: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x2dd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2dd6f0: 0xb8870018  swr         $a3, 0x18($a0)
    ctx->pc = 0x2dd6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd6f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2dd6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2dd6f8:
    // 0x2dd6f8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dd6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd6fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD6FCu;
    {
        const bool branch_taken_0x2dd6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6FCu;
        // 0x2dd700: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd6fc) {
            ctx->pc = 0x2DD718u;
            goto label_2dd718;
        }
    }
    ctx->pc = 0x2DD704u;
    // 0x2dd704: 0xc0b7db8  jal         func_2DF6E0
    ctx->pc = 0x2DD704u;
    SET_GPR_U32(ctx, 31, 0x2DD70Cu);
    ctx->pc = 0x2DD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD704u;
    // 0x2dd708: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6E0u, 0x2DD704u, 0x2DD70Cu)) {
        return;
    }
    ctx->pc = 0x2DD70Cu;
label_2dd70c:
    // 0x2dd70c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dd70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd710: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2dd710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2dd714: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2dd714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2dd718:
    // 0x2dd718: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2dd718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2dd71c: 0x10a0006e  beqz        $a1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2DD71Cu;
    {
        const bool branch_taken_0x2dd71c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD71Cu;
        // 0x2dd720: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd71c) {
            ctx->pc = 0x2DD8D8u;
            goto label_2dd8d8;
        }
    }
    ctx->pc = 0x2DD724u;
    // 0x2dd724: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2DD724u;
    SET_GPR_U32(ctx, 31, 0x2DD72Cu);
    ctx->pc = 0x2DD728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD724u;
    // 0x2dd728: 0x8e460014  lw          $a2, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2DD724u, 0x2DD72Cu)) {
        return;
    }
    ctx->pc = 0x2DD72Cu;
label_2dd72c:
    // 0x2dd72c: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2dd72cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2dd730: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dd730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd734: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2dd734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2dd738: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2dd738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2dd73c: 0xa2420018  sb          $v0, 0x18($s2)
    ctx->pc = 0x2dd73cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dd740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dd744: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2DD744u;
    {
        const bool branch_taken_0x2dd744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD744u;
        // 0x2dd748: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd744) {
            ctx->pc = 0x2DD8D8u;
            goto label_2dd8d8;
        }
    }
    ctx->pc = 0x2DD74Cu;
label_2dd74c:
    // 0x2dd74c: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DD74Cu;
    {
        const bool branch_taken_0x2dd74c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD74Cu;
        // 0x2dd750: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd74c) {
            ctx->pc = 0x2DD854u;
            goto label_2dd854;
        }
    }
    ctx->pc = 0x2DD754u;
    // 0x2dd754: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x2dd754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2dd758: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2dd758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x2dd75c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd764: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dd764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd768: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD768u;
    SET_GPR_U32(ctx, 31, 0x2DD770u);
    ctx->pc = 0x2DD76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD768u;
    // 0x2dd76c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD768u, 0x2DD770u)) {
        return;
    }
    ctx->pc = 0x2DD770u;
label_2dd770:
    // 0x2dd770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd778: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dd778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd77c: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD77Cu;
    SET_GPR_U32(ctx, 31, 0x2DD784u);
    ctx->pc = 0x2DD780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD77Cu;
    // 0x2dd780: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD77Cu, 0x2DD784u)) {
        return;
    }
    ctx->pc = 0x2DD784u;
label_2dd784:
    // 0x2dd784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd78c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dd78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd790: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD790u;
    SET_GPR_U32(ctx, 31, 0x2DD798u);
    ctx->pc = 0x2DD794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD790u;
    // 0x2dd794: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD790u, 0x2DD798u)) {
        return;
    }
    ctx->pc = 0x2DD798u;
label_2dd798:
    // 0x2dd798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dd7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd7a4: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD7A4u;
    SET_GPR_U32(ctx, 31, 0x2DD7ACu);
    ctx->pc = 0x2DD7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7A4u;
    // 0x2dd7a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD7A4u, 0x2DD7ACu)) {
        return;
    }
    ctx->pc = 0x2DD7ACu;
label_2dd7ac:
    // 0x2dd7ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dd7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd7b8: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD7B8u;
    SET_GPR_U32(ctx, 31, 0x2DD7C0u);
    ctx->pc = 0x2DD7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7B8u;
    // 0x2dd7bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD7B8u, 0x2DD7C0u)) {
        return;
    }
    ctx->pc = 0x2DD7C0u;
label_2dd7c0:
    // 0x2dd7c0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2dd7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2dd7c4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2dd7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd7c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2DD7CCu;
    SET_GPR_U32(ctx, 31, 0x2DD7D4u);
    ctx->pc = 0x2DD7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7CCu;
    // 0x2dd7d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2DD7CCu, 0x2DD7D4u)) {
        return;
    }
    ctx->pc = 0x2DD7D4u;
label_2dd7d4:
    // 0x2dd7d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2dd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd7d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dd7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd7e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2dd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2dd7e8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2dd7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2dd7ec: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD7ECu;
    SET_GPR_U32(ctx, 31, 0x2DD7F4u);
    ctx->pc = 0x2DD7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7ECu;
    // 0x2dd7f0: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD7ECu, 0x2DD7F4u)) {
        return;
    }
    ctx->pc = 0x2DD7F4u;
label_2dd7f4:
    // 0x2dd7f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dd7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd800: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD800u;
    SET_GPR_U32(ctx, 31, 0x2DD808u);
    ctx->pc = 0x2DD804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD800u;
    // 0x2dd804: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD800u, 0x2DD808u)) {
        return;
    }
    ctx->pc = 0x2DD808u;
label_2dd808:
    // 0x2dd808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd810: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dd810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd814: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD814u;
    SET_GPR_U32(ctx, 31, 0x2DD81Cu);
    ctx->pc = 0x2DD818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD814u;
    // 0x2dd818: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD814u, 0x2DD81Cu)) {
        return;
    }
    ctx->pc = 0x2DD81Cu;
label_2dd81c:
    // 0x2dd81c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dd824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd828: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DD828u;
    SET_GPR_U32(ctx, 31, 0x2DD830u);
    ctx->pc = 0x2DD82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD828u;
    // 0x2dd82c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DD828u, 0x2DD830u)) {
        return;
    }
    ctx->pc = 0x2DD830u;
label_2dd830:
    // 0x2dd830: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2dd830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2dd834: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2dd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd83c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2DD83Cu;
    SET_GPR_U32(ctx, 31, 0x2DD844u);
    ctx->pc = 0x2DD840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD83Cu;
    // 0x2dd840: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2DD83Cu, 0x2DD844u)) {
        return;
    }
    ctx->pc = 0x2DD844u;
label_2dd844:
    // 0x2dd844: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2dd844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd848: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2dd848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2dd84c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DD84Cu;
    {
        const bool branch_taken_0x2dd84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD84Cu;
        // 0x2dd850: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd84c) {
            ctx->pc = 0x2DD898u;
            goto label_2dd898;
        }
    }
    ctx->pc = 0x2DD854u;
label_2dd854:
    // 0x2dd854: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2dd854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dd858: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2dd858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dd85c: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2dd85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2dd860: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2dd860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2dd864: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x2dd864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2dd868: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x2dd868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2dd86c: 0x8a25001b  lwl         $a1, 0x1B($s1)
    ctx->pc = 0x2dd86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2dd870: 0x9a250018  lwr         $a1, 0x18($s1)
    ctx->pc = 0x2dd870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2dd874: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2dd874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd878: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2dd878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd87c: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x2dd87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd880: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x2dd880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd884: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x2dd884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd888: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x2dd888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd88c: 0xaa45001b  swl         $a1, 0x1B($s2)
    ctx->pc = 0x2dd88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd890: 0xba450018  swr         $a1, 0x18($s2)
    ctx->pc = 0x2dd890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd894: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x2dd894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2dd898:
    // 0x2dd898: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2dd898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd89c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DD89Cu;
    {
        const bool branch_taken_0x2dd89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD89Cu;
        // 0x2dd8a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd89c) {
            ctx->pc = 0x2DD8CCu;
            goto label_2dd8cc;
        }
    }
    ctx->pc = 0x2DD8A4u;
    // 0x2dd8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8a8: 0xc0b7db8  jal         func_2DF6E0
    ctx->pc = 0x2DD8A8u;
    SET_GPR_U32(ctx, 31, 0x2DD8B0u);
    ctx->pc = 0x2DD8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8A8u;
    // 0x2dd8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6E0u, 0x2DD8A8u, 0x2DD8B0u)) {
        return;
    }
    ctx->pc = 0x2DD8B0u;
label_2dd8b0:
    // 0x2dd8b0: 0xc0b778a  jal         func_2DDE28
    ctx->pc = 0x2DD8B0u;
    SET_GPR_U32(ctx, 31, 0x2DD8B8u);
    ctx->pc = 0x2DD8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8B0u;
    // 0x2dd8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDE28u, 0x2DD8B0u, 0x2DD8B8u)) {
        return;
    }
    ctx->pc = 0x2DD8B8u;
label_2dd8b8:
    // 0x2dd8b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD8B8u;
    {
        const bool branch_taken_0x2dd8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8B8u;
        // 0x2dd8bc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8b8) {
            ctx->pc = 0x2DD8C8u;
            goto label_2dd8c8;
        }
    }
    ctx->pc = 0x2DD8C0u;
    // 0x2dd8c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD8C0u;
    {
        const bool branch_taken_0x2dd8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8C0u;
        // 0x2dd8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8c0) {
            ctx->pc = 0x2DD8DCu;
            goto label_2dd8dc;
        }
    }
    ctx->pc = 0x2DD8C8u;
label_2dd8c8:
    // 0x2dd8c8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2dd8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2dd8cc:
    // 0x2dd8cc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2dd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2dd8d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DD8D0u;
    {
        const bool branch_taken_0x2dd8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd8d0) {
            ctx->pc = 0x2DD8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD8D0u;
            // 0x2dd8d4: 0xae510010  sw          $s1, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD8D8u;
            goto label_2dd8d8;
        }
    }
    ctx->pc = 0x2DD8D8u;
label_2dd8d8:
    // 0x2dd8d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2dd8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8dc:
    // 0x2dd8dc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dd8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd8e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dd8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd8e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dd8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd8e8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dd8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd8ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8F0u;
        // 0x2dd8f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD8F8u;
}
