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

// Function: sub_0023B558
// Address: 0x23b558 - 0x23b848
void sub_0023B558_0x23b558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B558_0x23b558");
#endif

    switch (ctx->pc) {
        case 0x23b5a0u: goto label_23b5a0;
        case 0x23b7c8u: goto label_23b7c8;
        default: break;
    }

    ctx->pc = 0x23b558u;

    // 0x23b558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b55c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23b560: 0x8c423524  lw          $v0, 0x3524($v0)
    ctx->pc = 0x23b560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3524u));
    // 0x23b564: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23b564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23b568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b56c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b570: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B570u;
    {
        const bool branch_taken_0x23b570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B570u;
        // 0x23b574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b570) {
            ctx->pc = 0x23B584u;
            goto label_23b584;
        }
    }
    ctx->pc = 0x23B578u;
    // 0x23b578: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x23b578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x23b57c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23B57Cu;
    {
        const bool branch_taken_0x23b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B57Cu;
        // 0x23b580: 0xdc435120  ld          $v1, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b57c) {
            ctx->pc = 0x23B58Cu;
            goto label_23b58c;
        }
    }
    ctx->pc = 0x23B584u;
label_23b584:
    // 0x23b584: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x23b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x23b588: 0xdc435290  ld          $v1, 0x5290($v0)
    ctx->pc = 0x23b588u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x735290u));
label_23b58c:
    // 0x23b58c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b590: 0xfc2334c8  sd          $v1, 0x34C8($at)
    ctx->pc = 0x23b590u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B34C8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34C8u, _value); } while (0);
    // 0x23b594: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23b594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x23b598: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x23B598u;
    SET_GPR_U32(ctx, 31, 0x23B5A0u);
    ctx->pc = 0x23B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B598u;
    // 0x23b59c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x23B598u, 0x23B5A0u)) {
        return;
    }
    ctx->pc = 0x23B5A0u;
label_23b5a0:
    // 0x23b5a0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x23b5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23b5a4: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x23b5a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x23b5a8: 0x34c68006  ori         $a2, $a2, 0x8006
    ctx->pc = 0x23b5a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32774);
    // 0x23b5ac: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x23b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23b5b0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x23b5b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23b5b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x23b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x23b5b8: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x23b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23b5bc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x23b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x23b5c0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23b5c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b5c8: 0x16020033  bne         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x23B5C8u;
    {
        const bool branch_taken_0x23b5c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5C8u;
        // 0x23b5cc: 0xaf8590bc  sw          $a1, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5c8) {
            ctx->pc = 0x23B698u;
            goto label_23b698;
        }
    }
    ctx->pc = 0x23B5D0u;
    // 0x23b5d0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23b5d4: 0x9cc634c8  lwu         $a2, 0x34C8($a2)
    ctx->pc = 0x23b5d4u;
    SET_GPR_ZE32(ctx, 6, FAST_READ32(0x6B34C8u));
    // 0x23b5d8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x23b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x23b5dc: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x23b5dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23b5e0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x23b5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x23b5e4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x23b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23b5e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b5ec: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b5ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b5f0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23b5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23b5f4: 0xdcc634c0  ld          $a2, 0x34C0($a2)
    ctx->pc = 0x23b5f4u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34C0u));
    // 0x23b5f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x23b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23b5fc: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x23b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x23b600: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x23b604: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x23b604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x23b608: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x23b608u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x23b60c: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x23b60cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x23b610: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x23b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x23b614: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b618: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b61c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23b620: 0xdcc634d0  ld          $a2, 0x34D0($a2)
    ctx->pc = 0x23b620u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34D0u));
    // 0x23b624: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x23b624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
    // 0x23b628: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x23b628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x23b62c: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x23b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x23b630: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x23b630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x23b634: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x23b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x23b638: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x23b638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x23b63c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x23b63cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x23b640: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x23b640u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x23b644: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x23b648: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b64c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b64cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b650: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23b654: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23b654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23b658: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23b65c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x23b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23b660: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B660u;
    {
        const bool branch_taken_0x23b660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B660u;
        // 0x23b664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b660) {
            ctx->pc = 0x23B678u;
            goto label_23b678;
        }
    }
    ctx->pc = 0x23B668u;
    // 0x23b668: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23b66c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B66Cu;
    {
        const bool branch_taken_0x23b66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B66Cu;
        // 0x23b670: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b66c) {
            ctx->pc = 0x23B680u;
            goto label_23b680;
        }
    }
    ctx->pc = 0x23B674u;
    // 0x23b674: 0x0  nop
    ctx->pc = 0x23b674u;
    // NOP
label_23b678:
    // 0x23b678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b67c: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x23b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_23b680:
    // 0x23b680: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x23b680u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x23b684: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23b688: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23b68c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x23b68cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x23b690: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23B690u;
    {
        const bool branch_taken_0x23b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B690u;
        // 0x23b694: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b690) {
            ctx->pc = 0x23B740u;
            goto label_23b740;
        }
    }
    ctx->pc = 0x23B698u;
label_23b698:
    // 0x23b698: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23b69c: 0xdcc634c0  ld          $a2, 0x34C0($a2)
    ctx->pc = 0x23b69cu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34C0u));
    // 0x23b6a0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x23b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x23b6a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b6a8: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x23b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x23b6ac: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x23b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x23b6b0: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x23b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x23b6b4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x23b6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x23b6b8: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x23b6b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x23b6bc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x23b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x23b6c0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x23b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23b6c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b6c8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b6cc: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23b6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23b6d0: 0xdcc634c8  ld          $a2, 0x34C8($a2)
    ctx->pc = 0x23b6d0u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34C8u));
    // 0x23b6d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b6d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b6dc: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x23b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x23b6e0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x23b6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x23b6e4: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x23b6e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x23b6e8: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x23b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x23b6ec: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x23b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x23b6f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b6f4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b6f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b6f8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23b6fc: 0xdcc634d0  ld          $a2, 0x34D0($a2)
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34D0u));
    // 0x23b700: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x23b700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x23b704: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x23b708: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x23b708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x23b70c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x23b70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x23b710: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x23b710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x23b714: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x23b714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x23b718: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x23b718u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x23b71c: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x23b71cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x23b720: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x23b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x23b724: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b728: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b728u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b72c: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x23b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x23b730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b734: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x23b734u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23b738: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x23b738u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x23b73c: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x23b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_23b740:
    // 0x23b740: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b744: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b748: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x23b748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x23b74c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x23b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23b750: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x23b750u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x23b754: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23b758: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23b758u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23b75c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x23b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x23b760: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23b764: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b768: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b76c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23b770: 0xdc6334f8  ld          $v1, 0x34F8($v1)
    ctx->pc = 0x23b770u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6B34F8u));
    // 0x23b774: 0x2402fe1f  addiu       $v0, $zero, -0x1E1
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x23b778: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x23b778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x23b77c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b780: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b784: 0xfc233f48  sd          $v1, 0x3F48($at)
    ctx->pc = 0x23b784u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3F48u, _value); } while (0);
    // 0x23b788: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23b78c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23b790: 0x8c843f30  lw          $a0, 0x3F30($a0)
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23b794: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b798: 0xfc2234f8  sd          $v0, 0x34F8($at)
    ctx->pc = 0x23b798u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F8u, _value); } while (0);
    // 0x23b79c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x23b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x23b7a0: 0x90a54131  lbu         $a1, 0x4131($a1)
    ctx->pc = 0x23b7a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x6B4131u));
    // 0x23b7a4: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x23b7a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x23b7a8: 0x9482001c  lhu         $v0, 0x1C($a0)
    ctx->pc = 0x23b7a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x23b7ac: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x23b7b0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23b7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23b7b4: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x23b7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x23b7b8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x23b7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x23b7bc: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23B7BCu;
    {
        const bool branch_taken_0x23b7bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7BCu;
        // 0x23b7c0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7bc) {
            ctx->pc = 0x23B818u;
            goto label_23b818;
        }
    }
    ctx->pc = 0x23B7C4u;
    // 0x23b7c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x23b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_23b7c8:
    // 0x23b7c8: 0x42000039  di
    ctx->pc = 0x23b7c8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x23b7cc: 0x40f  sync.p
    ctx->pc = 0x23b7ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x23b7d0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x23b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x23b7d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23b7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b7d8: 0x0  nop
    ctx->pc = 0x23b7d8u;
    // NOP
    // 0x23b7dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B7DCu;
    {
        const bool branch_taken_0x23b7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b7dc) {
            ctx->pc = 0x23B7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B7E4u;
    // 0x23b7e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23b7e8: 0x9063415d  lbu         $v1, 0x415D($v1)
    ctx->pc = 0x23b7e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B415Du));
    // 0x23b7ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23b7f0: 0x90424132  lbu         $v0, 0x4132($v0)
    ctx->pc = 0x23b7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B4132u));
    // 0x23b7f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23b7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23b7f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23b7fc: 0x9084415c  lbu         $a0, 0x415C($a0)
    ctx->pc = 0x23b7fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x23b800: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x23b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x23b804: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x23b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x23b808: 0x42000038  ei
    ctx->pc = 0x23b808u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x23b80c: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x23b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x23b810: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x23b810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x23b814: 0x0  nop
    ctx->pc = 0x23b814u;
    // NOP
label_23b818:
    // 0x23b818: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x23b818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23b81c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x23b81cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x23b820: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23b820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23b824: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23b824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23b828: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x23b828u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x23b82c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23b830: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23b830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b838: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b83c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23b83cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23b840: 0x3e00008  jr          $ra
    ctx->pc = 0x23B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B840u;
        // 0x23b844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B848u;
}
