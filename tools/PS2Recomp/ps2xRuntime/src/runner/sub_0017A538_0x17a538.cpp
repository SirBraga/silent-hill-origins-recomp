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

// Function: sub_0017A538
// Address: 0x17a538 - 0x17a6f8
void sub_0017A538_0x17a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A538_0x17a538");
#endif

    switch (ctx->pc) {
        case 0x17a55cu: goto label_17a55c;
        case 0x17a580u: goto label_17a580;
        case 0x17a5acu: goto label_17a5ac;
        case 0x17a5ccu: goto label_17a5cc;
        case 0x17a5e8u: goto label_17a5e8;
        case 0x17a604u: goto label_17a604;
        case 0x17a620u: goto label_17a620;
        case 0x17a63cu: goto label_17a63c;
        case 0x17a648u: goto label_17a648;
        case 0x17a664u: goto label_17a664;
        case 0x17a674u: goto label_17a674;
        case 0x17a6c0u: goto label_17a6c0;
        case 0x17a6dcu: goto label_17a6dc;
        default: break;
    }

    ctx->pc = 0x17a538u;

    // 0x17a538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a540: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17a544: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17a544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a548: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17a54c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17a550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a554: 0xc0603ce  jal         func_180F38
    ctx->pc = 0x17A554u;
    SET_GPR_U32(ctx, 31, 0x17A55Cu);
    ctx->pc = 0x17A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A554u;
    // 0x17a558: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x17A554u, 0x17A55Cu)) {
        return;
    }
    ctx->pc = 0x17A55Cu;
label_17a55c:
    // 0x17a55c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17a560: 0x8c629168  lw          $v0, -0x6E98($v1)
    ctx->pc = 0x17a560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339168u));
    // 0x17a564: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x17a564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
    // 0x17a568: 0x8c709168  lw          $s0, -0x6E98($v1)
    ctx->pc = 0x17a568u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x339168u));
    // 0x17a56c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A56Cu;
    {
        const bool branch_taken_0x17a56c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A56Cu;
        // 0x17a570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a56c) {
            ctx->pc = 0x17A588u;
            goto label_17a588;
        }
    }
    ctx->pc = 0x17A574u;
    // 0x17a574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a578: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x17A578u;
    SET_GPR_U32(ctx, 31, 0x17A580u);
    ctx->pc = 0x17A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A578u;
    // 0x17a57c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x17A578u, 0x17A580u)) {
        return;
    }
    ctx->pc = 0x17A580u;
label_17a580:
    // 0x17a580: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x17a580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x17a584: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x17a584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
label_17a588:
    // 0x17a588: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x17a588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x17a58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a590: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x17a590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17a594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a59c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a59cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17a5a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5a4: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17A5A4u;
    SET_GPR_U32(ctx, 31, 0x17A5ACu);
    ctx->pc = 0x17A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5A4u;
    // 0x17a5a8: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A5A4u, 0x17A5ACu)) {
        return;
    }
    ctx->pc = 0x17A5ACu;
label_17a5ac:
    // 0x17a5ac: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x17a5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a5b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17a5b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5c4: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17A5C4u;
    SET_GPR_U32(ctx, 31, 0x17A5CCu);
    ctx->pc = 0x17A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5C4u;
    // 0x17a5c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A5C4u, 0x17A5CCu)) {
        return;
    }
    ctx->pc = 0x17A5CCu;
label_17a5cc:
    // 0x17a5cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17a5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a5d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5e0: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17A5E0u;
    SET_GPR_U32(ctx, 31, 0x17A5E8u);
    ctx->pc = 0x17A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5E0u;
    // 0x17a5e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A5E0u, 0x17A5E8u)) {
        return;
    }
    ctx->pc = 0x17A5E8u;
label_17a5e8:
    // 0x17a5e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5ec: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x17a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17a5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a5f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5fc: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17A5FCu;
    SET_GPR_U32(ctx, 31, 0x17A604u);
    ctx->pc = 0x17A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5FCu;
    // 0x17a600: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A5FCu, 0x17A604u)) {
        return;
    }
    ctx->pc = 0x17A604u;
label_17a604:
    // 0x17a604: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17a604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a60c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x17a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17a610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a614: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a618: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17A618u;
    SET_GPR_U32(ctx, 31, 0x17A620u);
    ctx->pc = 0x17A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A618u;
    // 0x17a61c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A618u, 0x17A620u)) {
        return;
    }
    ctx->pc = 0x17A620u;
label_17a620:
    // 0x17a620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a62c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17a62cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a634: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17A634u;
    SET_GPR_U32(ctx, 31, 0x17A63Cu);
    ctx->pc = 0x17A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A634u;
    // 0x17a638: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A634u, 0x17A63Cu)) {
        return;
    }
    ctx->pc = 0x17A63Cu;
label_17a63c:
    // 0x17a63c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x17a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17a640: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17A640u;
    SET_GPR_U32(ctx, 31, 0x17A648u);
    ctx->pc = 0x17A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A640u;
    // 0x17a644: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17A640u, 0x17A648u)) {
        return;
    }
    ctx->pc = 0x17A648u;
label_17a648:
    // 0x17a648: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17a648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a64c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a654: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x17a654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x17a658: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x17a658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x17a65c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17A65Cu;
    SET_GPR_U32(ctx, 31, 0x17A664u);
    ctx->pc = 0x17A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A65Cu;
    // 0x17a660: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A65Cu, 0x17A664u)) {
        return;
    }
    ctx->pc = 0x17A664u;
label_17a664:
    // 0x17a664: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x17a664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x17a668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a66c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17A66Cu;
    SET_GPR_U32(ctx, 31, 0x17A674u);
    ctx->pc = 0x17A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A66Cu;
    // 0x17a670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A66Cu, 0x17A674u)) {
        return;
    }
    ctx->pc = 0x17A674u;
label_17a674:
    // 0x17a674: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x17a674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x17a678: 0x26630014  addiu       $v1, $s3, 0x14
    ctx->pc = 0x17a678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x17a67c: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x17a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
    // 0x17a680: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x17a680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x17a684: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17a688: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x17a688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x17a68c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x17a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x17a690: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17a694: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17A694u;
    {
        const bool branch_taken_0x17a694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a694) {
            ctx->pc = 0x17A698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A694u;
            // 0x17a698: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A69Cu;
            goto label_17a69c;
        }
    }
    ctx->pc = 0x17A69Cu;
label_17a69c:
    // 0x17a69c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17a6a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17A6A0u;
    {
        const bool branch_taken_0x17a6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a6a0) {
            ctx->pc = 0x17A6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A6A0u;
            // 0x17a6a4: 0xac720004  sw          $s2, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A6A8u;
            goto label_17a6a8;
        }
    }
    ctx->pc = 0x17A6A8u;
label_17a6a8:
    // 0x17a6a8: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x17a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x17a6ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6b0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x17a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x17a6b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a6b8: 0xc06491a  jal         func_192468
    ctx->pc = 0x17A6B8u;
    SET_GPR_U32(ctx, 31, 0x17A6C0u);
    ctx->pc = 0x17A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6B8u;
    // 0x17a6bc: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x17A6B8u, 0x17A6C0u)) {
        return;
    }
    ctx->pc = 0x17A6C0u;
label_17a6c0:
    // 0x17a6c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x17a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17a6c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6d4: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17A6D4u;
    SET_GPR_U32(ctx, 31, 0x17A6DCu);
    ctx->pc = 0x17A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6D4u;
    // 0x17a6d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A6D4u, 0x17A6DCu)) {
        return;
    }
    ctx->pc = 0x17A6DCu;
label_17a6dc:
    // 0x17a6dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17a6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a6e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17a6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a6e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a6e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17a6e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6F0u;
        // 0x17a6f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6F8u;
}
