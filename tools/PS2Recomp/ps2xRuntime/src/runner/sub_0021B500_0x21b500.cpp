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

// Function: sub_0021B500
// Address: 0x21b500 - 0x21b670
void sub_0021B500_0x21b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B500_0x21b500");
#endif

    switch (ctx->pc) {
        case 0x21b530u: goto label_21b530;
        case 0x21b584u: goto label_21b584;
        case 0x21b594u: goto label_21b594;
        case 0x21b5a4u: goto label_21b5a4;
        case 0x21b5b4u: goto label_21b5b4;
        case 0x21b5c4u: goto label_21b5c4;
        case 0x21b5d8u: goto label_21b5d8;
        case 0x21b5f4u: goto label_21b5f4;
        case 0x21b608u: goto label_21b608;
        case 0x21b620u: goto label_21b620;
        case 0x21b638u: goto label_21b638;
        default: break;
    }

    ctx->pc = 0x21b500u;

    // 0x21b500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21b504: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21b50c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x21b50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x21b510: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b514: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21b514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x21b518: 0xc7a021  addu        $s4, $a2, $a3
    ctx->pc = 0x21b518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21b51c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21b520: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21b520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x21b524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21b528: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x21B528u;
    SET_GPR_U32(ctx, 31, 0x21B530u);
    ctx->pc = 0x21B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B528u;
    // 0x21b52c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x21B528u, 0x21B530u)) {
        return;
    }
    ctx->pc = 0x21B530u;
label_21b530:
    // 0x21b530: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b534: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21b534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b53c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b540: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x21b544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b548: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x21b548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x21b54c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b550: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x21b550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x21b554: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x21b554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x21b558: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x21b558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x21b55c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x21b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x21b560: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x21b560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x21b564: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x21b564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x21b568: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x21b568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x21b56c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x21b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x21b570: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x21b570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x21b574: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x21b574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x21b578: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x21b578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x21b57c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x21B57Cu;
    SET_GPR_U32(ctx, 31, 0x21B584u);
    ctx->pc = 0x21B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B57Cu;
    // 0x21b580: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x21B57Cu, 0x21B584u)) {
        return;
    }
    ctx->pc = 0x21B584u;
label_21b584:
    // 0x21b584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b588: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x21b588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21b58c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x21B58Cu;
    SET_GPR_U32(ctx, 31, 0x21B594u);
    ctx->pc = 0x21B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B58Cu;
    // 0x21b590: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x21B58Cu, 0x21B594u)) {
        return;
    }
    ctx->pc = 0x21B594u;
label_21b594:
    // 0x21b594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b598: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x21b598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x21b59c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x21B59Cu;
    SET_GPR_U32(ctx, 31, 0x21B5A4u);
    ctx->pc = 0x21B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B59Cu;
    // 0x21b5a0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x21B59Cu, 0x21B5A4u)) {
        return;
    }
    ctx->pc = 0x21B5A4u;
label_21b5a4:
    // 0x21b5a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5a8: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x21b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x21b5ac: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x21B5ACu;
    SET_GPR_U32(ctx, 31, 0x21B5B4u);
    ctx->pc = 0x21B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5ACu;
    // 0x21b5b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x21B5ACu, 0x21B5B4u)) {
        return;
    }
    ctx->pc = 0x21B5B4u;
label_21b5b4:
    // 0x21b5b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5b8: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x21b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x21b5bc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x21B5BCu;
    SET_GPR_U32(ctx, 31, 0x21B5C4u);
    ctx->pc = 0x21B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5BCu;
    // 0x21b5c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x21B5BCu, 0x21B5C4u)) {
        return;
    }
    ctx->pc = 0x21B5C4u;
label_21b5c4:
    // 0x21b5c4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x21b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21b5c8: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21B5C8u;
    {
        const bool branch_taken_0x21b5c8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5C8u;
        // 0x21b5cc: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5c8) {
            ctx->pc = 0x21B648u;
            goto label_21b648;
        }
    }
    ctx->pc = 0x21B5D0u;
    // 0x21b5d0: 0xc080924  jal         func_202490
    ctx->pc = 0x21B5D0u;
    SET_GPR_U32(ctx, 31, 0x21B5D8u);
    ctx->pc = 0x21B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5D0u;
    // 0x21b5d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x21B5D0u, 0x21B5D8u)) {
        return;
    }
    ctx->pc = 0x21B5D8u;
label_21b5d8:
    // 0x21b5d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21b5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5dc: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x21b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21b5e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5e4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x21b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x21b5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5ec: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x21B5ECu;
    SET_GPR_U32(ctx, 31, 0x21B5F4u);
    ctx->pc = 0x21B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5ECu;
    // 0x21b5f0: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21B5ECu, 0x21B5F4u)) {
        return;
    }
    ctx->pc = 0x21B5F4u;
label_21b5f4:
    // 0x21b5f4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x21b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21b5f8: 0x58600014  blezl       $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21B5F8u;
    {
        const bool branch_taken_0x21b5f8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x21b5f8) {
            ctx->pc = 0x21B5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B5F8u;
            // 0x21b5fc: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B64Cu;
            goto label_21b64c;
        }
    }
    ctx->pc = 0x21B600u;
    // 0x21b600: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x21b600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21b604: 0x0  nop
    ctx->pc = 0x21b604u;
    // NOP
label_21b608:
    // 0x21b608: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x21b608u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21b60c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b610: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b614: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x21b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21b618: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x21B618u;
    SET_GPR_U32(ctx, 31, 0x21B620u);
    ctx->pc = 0x21B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B618u;
    // 0x21b61c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x21B618u, 0x21B620u)) {
        return;
    }
    ctx->pc = 0x21B620u;
label_21b620:
    // 0x21b620: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x21b620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21b624: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b628: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b62c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x21b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21b630: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x21B630u;
    SET_GPR_U32(ctx, 31, 0x21B638u);
    ctx->pc = 0x21B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B630u;
    // 0x21b634: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x21B630u, 0x21B638u)) {
        return;
    }
    ctx->pc = 0x21B638u;
label_21b638:
    // 0x21b638: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x21b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21b63c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x21b63cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21b640: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x21B640u;
    {
        const bool branch_taken_0x21b640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b640) {
            ctx->pc = 0x21B644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B640u;
            // 0x21b644: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b608;
        }
    }
    ctx->pc = 0x21B648u;
label_21b648:
    // 0x21b648: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x21b648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_21b64c:
    // 0x21b64c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21b64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b650: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21b650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b654: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21b654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b658: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21b658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b65c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21b65cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b660: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x21b660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b668: 0x3e00008  jr          $ra
    ctx->pc = 0x21B668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B668u;
        // 0x21b66c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B670u;
}
