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

// Function: sub_001BF600
// Address: 0x1bf600 - 0x1bf938
void sub_001BF600_0x1bf600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF600_0x1bf600");
#endif

    switch (ctx->pc) {
        case 0x1bf62cu: goto label_1bf62c;
        case 0x1bf65cu: goto label_1bf65c;
        case 0x1bf690u: goto label_1bf690;
        case 0x1bf6a4u: goto label_1bf6a4;
        case 0x1bf6b4u: goto label_1bf6b4;
        case 0x1bf6c8u: goto label_1bf6c8;
        case 0x1bf6dcu: goto label_1bf6dc;
        case 0x1bf728u: goto label_1bf728;
        case 0x1bf73cu: goto label_1bf73c;
        case 0x1bf74cu: goto label_1bf74c;
        case 0x1bf760u: goto label_1bf760;
        case 0x1bf774u: goto label_1bf774;
        case 0x1bf7c0u: goto label_1bf7c0;
        case 0x1bf7d4u: goto label_1bf7d4;
        case 0x1bf7e4u: goto label_1bf7e4;
        case 0x1bf7f8u: goto label_1bf7f8;
        case 0x1bf80cu: goto label_1bf80c;
        case 0x1bf858u: goto label_1bf858;
        case 0x1bf86cu: goto label_1bf86c;
        case 0x1bf87cu: goto label_1bf87c;
        case 0x1bf890u: goto label_1bf890;
        case 0x1bf8a4u: goto label_1bf8a4;
        case 0x1bf8ccu: goto label_1bf8cc;
        case 0x1bf90cu: goto label_1bf90c;
        case 0x1bf914u: goto label_1bf914;
        default: break;
    }

    ctx->pc = 0x1bf600u;

    // 0x1bf600: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1bf600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1bf604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf608: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1bf608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1bf60c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bf60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bf610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf614: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1bf614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1bf618: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1bf618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1bf61c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1bf61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1bf620: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bf620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bf624: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BF624u;
    SET_GPR_U32(ctx, 31, 0x1BF62Cu);
    ctx->pc = 0x1BF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF624u;
    // 0x1bf628: 0x262402b4  addiu       $a0, $s1, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BF624u, 0x1BF62Cu)) {
        return;
    }
    ctx->pc = 0x1BF62Cu;
label_1bf62c:
    // 0x1bf62c: 0x8e230274  lw          $v1, 0x274($s1)
    ctx->pc = 0x1bf62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1bf630: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1BF630u;
    {
        const bool branch_taken_0x1bf630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF630u;
        // 0x1bf634: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf630) {
            ctx->pc = 0x1BF914u;
            goto label_1bf914;
        }
    }
    ctx->pc = 0x1BF638u;
    // 0x1bf638: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1bf63c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bf63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bf640: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x1bf640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf644: 0x247094d8  addiu       $s0, $v1, -0x6B28
    ctx->pc = 0x1bf644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939864));
    // 0x1bf648: 0xae240260  sw          $a0, 0x260($s1)
    ctx->pc = 0x1bf648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 4));
    // 0x1bf64c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1bf64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf650: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bf650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bf654: 0xc0659a6  jal         func_196698
    ctx->pc = 0x1BF654u;
    SET_GPR_U32(ctx, 31, 0x1BF65Cu);
    ctx->pc = 0x1BF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF654u;
    // 0x1bf658: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196698u, 0x1BF654u, 0x1BF65Cu)) {
        return;
    }
    ctx->pc = 0x1BF65Cu;
label_1bf65c:
    // 0x1bf65c: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1bf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bf660: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1bf660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf664: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1bf664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf668: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bf668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bf66c: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF66Cu;
    {
        const bool branch_taken_0x1bf66c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF66Cu;
        // 0x1bf670: 0x521818  mult        $v1, $v0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf66c) {
            ctx->pc = 0x1BF6ECu;
            goto label_1bf6ec;
        }
    }
    ctx->pc = 0x1BF674u;
    // 0x1bf674: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1bf674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1bf678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf680: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1bf680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bf684: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1bf684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf688: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BF688u;
    SET_GPR_U32(ctx, 31, 0x1BF690u);
    ctx->pc = 0x1BF68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF688u;
    // 0x1bf68c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BF688u, 0x1BF690u)) {
        return;
    }
    ctx->pc = 0x1BF690u;
label_1bf690:
    // 0x1bf690: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bf690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bf694: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf698: 0x24a5dbe8  addiu       $a1, $a1, -0x2418
    ctx->pc = 0x1bf698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958056));
    // 0x1bf69c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1BF69Cu;
    SET_GPR_U32(ctx, 31, 0x1BF6A4u);
    ctx->pc = 0x1BF6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF69Cu;
    // 0x1bf6a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1BF69Cu, 0x1BF6A4u)) {
        return;
    }
    ctx->pc = 0x1BF6A4u;
label_1bf6a4:
    // 0x1bf6a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bf6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bf6a8: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf6ac: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1BF6ACu;
    SET_GPR_U32(ctx, 31, 0x1BF6B4u);
    ctx->pc = 0x1BF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6ACu;
    // 0x1bf6b0: 0x8c509428  lw          $s0, -0x6BD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1BF6ACu, 0x1BF6B4u)) {
        return;
    }
    ctx->pc = 0x1BF6B4u;
label_1bf6b4:
    // 0x1bf6b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF6B4u;
    {
        const bool branch_taken_0x1bf6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6B4u;
        // 0x1bf6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6b4) {
            ctx->pc = 0x1BF6DCu;
            goto label_1bf6dc;
        }
    }
    ctx->pc = 0x1BF6BCu;
    // 0x1bf6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6c0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1BF6C0u;
    SET_GPR_U32(ctx, 31, 0x1BF6C8u);
    ctx->pc = 0x1BF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6C0u;
    // 0x1bf6c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1BF6C0u, 0x1BF6C8u)) {
        return;
    }
    ctx->pc = 0x1BF6C8u;
label_1bf6c8:
    // 0x1bf6c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF6C8u;
    {
        const bool branch_taken_0x1bf6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6C8u;
        // 0x1bf6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6c8) {
            ctx->pc = 0x1BF6DCu;
            goto label_1bf6dc;
        }
    }
    ctx->pc = 0x1BF6D0u;
    // 0x1bf6d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bf6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6d4: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1BF6D4u;
    SET_GPR_U32(ctx, 31, 0x1BF6DCu);
    ctx->pc = 0x1BF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6D4u;
    // 0x1bf6d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1BF6D4u, 0x1BF6DCu)) {
        return;
    }
    ctx->pc = 0x1BF6DCu;
label_1bf6dc:
    // 0x1bf6dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1bf6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf6e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF6E0u;
    {
        const bool branch_taken_0x1bf6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6E0u;
        // 0x1bf6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6e0) {
            ctx->pc = 0x1BF6ECu;
            goto label_1bf6ec;
        }
    }
    ctx->pc = 0x1BF6E8u;
    // 0x1bf6e8: 0xae2202b4  sw          $v0, 0x2B4($s1)
    ctx->pc = 0x1bf6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
label_1bf6ec:
    // 0x1bf6ec: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1bf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bf6f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bf6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf6f4: 0x266394d8  addiu       $v1, $s3, -0x6B28
    ctx->pc = 0x1bf6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939864));
    // 0x1bf6f8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1bf6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf6fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bf6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf700: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bf700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bf704: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF704u;
    {
        const bool branch_taken_0x1bf704 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF704u;
        // 0x1bf708: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf704) {
            ctx->pc = 0x1BF784u;
            goto label_1bf784;
        }
    }
    ctx->pc = 0x1BF70Cu;
    // 0x1bf70c: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1bf70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bf710: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1bf710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1bf714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf718: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1bf718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf71c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf720: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BF720u;
    SET_GPR_U32(ctx, 31, 0x1BF728u);
    ctx->pc = 0x1BF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF720u;
    // 0x1bf724: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BF720u, 0x1BF728u)) {
        return;
    }
    ctx->pc = 0x1BF728u;
label_1bf728:
    // 0x1bf728: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bf728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bf72c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf730: 0x24a5dbe8  addiu       $a1, $a1, -0x2418
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958056));
    // 0x1bf734: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1BF734u;
    SET_GPR_U32(ctx, 31, 0x1BF73Cu);
    ctx->pc = 0x1BF738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF734u;
    // 0x1bf738: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1BF734u, 0x1BF73Cu)) {
        return;
    }
    ctx->pc = 0x1BF73Cu;
label_1bf73c:
    // 0x1bf73c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bf73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bf740: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x1bf740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1bf744: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1BF744u;
    SET_GPR_U32(ctx, 31, 0x1BF74Cu);
    ctx->pc = 0x1BF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF744u;
    // 0x1bf748: 0x8c509428  lw          $s0, -0x6BD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1BF744u, 0x1BF74Cu)) {
        return;
    }
    ctx->pc = 0x1BF74Cu;
label_1bf74c:
    // 0x1bf74c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF74Cu;
    {
        const bool branch_taken_0x1bf74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF74Cu;
        // 0x1bf750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf74c) {
            ctx->pc = 0x1BF774u;
            goto label_1bf774;
        }
    }
    ctx->pc = 0x1BF754u;
    // 0x1bf754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf758: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1BF758u;
    SET_GPR_U32(ctx, 31, 0x1BF760u);
    ctx->pc = 0x1BF75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF758u;
    // 0x1bf75c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1BF758u, 0x1BF760u)) {
        return;
    }
    ctx->pc = 0x1BF760u;
label_1bf760:
    // 0x1bf760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF760u;
    {
        const bool branch_taken_0x1bf760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF760u;
        // 0x1bf764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf760) {
            ctx->pc = 0x1BF774u;
            goto label_1bf774;
        }
    }
    ctx->pc = 0x1BF768u;
    // 0x1bf768: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bf768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf76c: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1BF76Cu;
    SET_GPR_U32(ctx, 31, 0x1BF774u);
    ctx->pc = 0x1BF770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF76Cu;
    // 0x1bf770: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1BF76Cu, 0x1BF774u)) {
        return;
    }
    ctx->pc = 0x1BF774u;
label_1bf774:
    // 0x1bf774: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1bf774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1bf778: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF778u;
    {
        const bool branch_taken_0x1bf778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF778u;
        // 0x1bf77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf778) {
            ctx->pc = 0x1BF784u;
            goto label_1bf784;
        }
    }
    ctx->pc = 0x1BF780u;
    // 0x1bf780: 0xae2202b8  sw          $v0, 0x2B8($s1)
    ctx->pc = 0x1bf780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
label_1bf784:
    // 0x1bf784: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bf788: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bf788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf78c: 0x266394d8  addiu       $v1, $s3, -0x6B28
    ctx->pc = 0x1bf78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939864));
    // 0x1bf790: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1bf790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf794: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bf794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf798: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1bf798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1bf79c: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF79Cu;
    {
        const bool branch_taken_0x1bf79c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF79Cu;
        // 0x1bf7a0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf79c) {
            ctx->pc = 0x1BF81Cu;
            goto label_1bf81c;
        }
    }
    ctx->pc = 0x1BF7A4u;
    // 0x1bf7a4: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1bf7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bf7a8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1bf7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1bf7ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7b0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7b8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BF7B8u;
    SET_GPR_U32(ctx, 31, 0x1BF7C0u);
    ctx->pc = 0x1BF7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7B8u;
    // 0x1bf7bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BF7B8u, 0x1BF7C0u)) {
        return;
    }
    ctx->pc = 0x1BF7C0u;
label_1bf7c0:
    // 0x1bf7c0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bf7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bf7c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7c8: 0x24a5dbe8  addiu       $a1, $a1, -0x2418
    ctx->pc = 0x1bf7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958056));
    // 0x1bf7cc: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1BF7CCu;
    SET_GPR_U32(ctx, 31, 0x1BF7D4u);
    ctx->pc = 0x1BF7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7CCu;
    // 0x1bf7d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1BF7CCu, 0x1BF7D4u)) {
        return;
    }
    ctx->pc = 0x1BF7D4u;
label_1bf7d4:
    // 0x1bf7d4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bf7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bf7d8: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x1bf7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1bf7dc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1BF7DCu;
    SET_GPR_U32(ctx, 31, 0x1BF7E4u);
    ctx->pc = 0x1BF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7DCu;
    // 0x1bf7e0: 0x8c509428  lw          $s0, -0x6BD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1BF7DCu, 0x1BF7E4u)) {
        return;
    }
    ctx->pc = 0x1BF7E4u;
label_1bf7e4:
    // 0x1bf7e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF7E4u;
    {
        const bool branch_taken_0x1bf7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7E4u;
        // 0x1bf7e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7e4) {
            ctx->pc = 0x1BF80Cu;
            goto label_1bf80c;
        }
    }
    ctx->pc = 0x1BF7ECu;
    // 0x1bf7ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7f0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1BF7F0u;
    SET_GPR_U32(ctx, 31, 0x1BF7F8u);
    ctx->pc = 0x1BF7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7F0u;
    // 0x1bf7f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1BF7F0u, 0x1BF7F8u)) {
        return;
    }
    ctx->pc = 0x1BF7F8u;
label_1bf7f8:
    // 0x1bf7f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF7F8u;
    {
        const bool branch_taken_0x1bf7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7F8u;
        // 0x1bf7fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7f8) {
            ctx->pc = 0x1BF80Cu;
            goto label_1bf80c;
        }
    }
    ctx->pc = 0x1BF800u;
    // 0x1bf800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bf800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf804: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1BF804u;
    SET_GPR_U32(ctx, 31, 0x1BF80Cu);
    ctx->pc = 0x1BF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF804u;
    // 0x1bf808: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1BF804u, 0x1BF80Cu)) {
        return;
    }
    ctx->pc = 0x1BF80Cu;
label_1bf80c:
    // 0x1bf80c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1bf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1bf810: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF810u;
    {
        const bool branch_taken_0x1bf810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF810u;
        // 0x1bf814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf810) {
            ctx->pc = 0x1BF81Cu;
            goto label_1bf81c;
        }
    }
    ctx->pc = 0x1BF818u;
    // 0x1bf818: 0xae2202bc  sw          $v0, 0x2BC($s1)
    ctx->pc = 0x1bf818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
label_1bf81c:
    // 0x1bf81c: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1bf81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bf820: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bf820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf824: 0x266394d8  addiu       $v1, $s3, -0x6B28
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939864));
    // 0x1bf828: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1bf828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf82c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bf82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf830: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1bf830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1bf834: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF834u;
    {
        const bool branch_taken_0x1bf834 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF834u;
        // 0x1bf838: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf834) {
            ctx->pc = 0x1BF8B4u;
            goto label_1bf8b4;
        }
    }
    ctx->pc = 0x1BF83Cu;
    // 0x1bf83c: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1bf83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bf840: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1bf840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x1bf844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf848: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1bf848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf850: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BF850u;
    SET_GPR_U32(ctx, 31, 0x1BF858u);
    ctx->pc = 0x1BF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF850u;
    // 0x1bf854: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BF850u, 0x1BF858u)) {
        return;
    }
    ctx->pc = 0x1BF858u;
label_1bf858:
    // 0x1bf858: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1bf85c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf860: 0x24a5dbe8  addiu       $a1, $a1, -0x2418
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958056));
    // 0x1bf864: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1BF864u;
    SET_GPR_U32(ctx, 31, 0x1BF86Cu);
    ctx->pc = 0x1BF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF864u;
    // 0x1bf868: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1BF864u, 0x1BF86Cu)) {
        return;
    }
    ctx->pc = 0x1BF86Cu;
label_1bf86c:
    // 0x1bf86c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bf870: 0x27b2008c  addiu       $s2, $sp, 0x8C
    ctx->pc = 0x1bf870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1bf874: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1BF874u;
    SET_GPR_U32(ctx, 31, 0x1BF87Cu);
    ctx->pc = 0x1BF878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF874u;
    // 0x1bf878: 0x8c509428  lw          $s0, -0x6BD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1BF874u, 0x1BF87Cu)) {
        return;
    }
    ctx->pc = 0x1BF87Cu;
label_1bf87c:
    // 0x1bf87c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF87Cu;
    {
        const bool branch_taken_0x1bf87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF87Cu;
        // 0x1bf880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf87c) {
            ctx->pc = 0x1BF8A4u;
            goto label_1bf8a4;
        }
    }
    ctx->pc = 0x1BF884u;
    // 0x1bf884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf888: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1BF888u;
    SET_GPR_U32(ctx, 31, 0x1BF890u);
    ctx->pc = 0x1BF88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF888u;
    // 0x1bf88c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1BF888u, 0x1BF890u)) {
        return;
    }
    ctx->pc = 0x1BF890u;
label_1bf890:
    // 0x1bf890: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF890u;
    {
        const bool branch_taken_0x1bf890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF890u;
        // 0x1bf894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf890) {
            ctx->pc = 0x1BF8A4u;
            goto label_1bf8a4;
        }
    }
    ctx->pc = 0x1BF898u;
    // 0x1bf898: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bf898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf89c: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1BF89Cu;
    SET_GPR_U32(ctx, 31, 0x1BF8A4u);
    ctx->pc = 0x1BF8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF89Cu;
    // 0x1bf8a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1BF89Cu, 0x1BF8A4u)) {
        return;
    }
    ctx->pc = 0x1BF8A4u;
label_1bf8a4:
    // 0x1bf8a4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1bf8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1bf8a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF8A8u;
    {
        const bool branch_taken_0x1bf8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8A8u;
        // 0x1bf8ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8a8) {
            ctx->pc = 0x1BF8B4u;
            goto label_1bf8b4;
        }
    }
    ctx->pc = 0x1BF8B0u;
    // 0x1bf8b0: 0xae2202c0  sw          $v0, 0x2C0($s1)
    ctx->pc = 0x1bf8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
label_1bf8b4:
    // 0x1bf8b4: 0x8e230268  lw          $v1, 0x268($s1)
    ctx->pc = 0x1bf8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x1bf8b8: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1bf8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bf8bc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF8BCu;
    {
        const bool branch_taken_0x1bf8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf8bc) {
            ctx->pc = 0x1BF8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF8BCu;
            // 0x1bf8c0: 0x8e2202f4  lw          $v0, 0x2F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF8D0u;
            goto label_1bf8d0;
        }
    }
    ctx->pc = 0x1BF8C4u;
    // 0x1bf8c4: 0xc070332  jal         func_1C0CC8
    ctx->pc = 0x1BF8C4u;
    SET_GPR_U32(ctx, 31, 0x1BF8CCu);
    ctx->pc = 0x1BF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8C4u;
    // 0x1bf8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0CC8u, 0x1BF8C4u, 0x1BF8CCu)) {
        return;
    }
    ctx->pc = 0x1BF8CCu;
label_1bf8cc:
    // 0x1bf8cc: 0x8e2202f4  lw          $v0, 0x2F4($s1)
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 756)));
label_1bf8d0:
    // 0x1bf8d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF8D0u;
    {
        const bool branch_taken_0x1bf8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D0u;
        // 0x1bf8d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8d0) {
            ctx->pc = 0x1BF904u;
            goto label_1bf904;
        }
    }
    ctx->pc = 0x1BF8D8u;
    // 0x1bf8d8: 0x8e220454  lw          $v0, 0x454($s1)
    ctx->pc = 0x1bf8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
    // 0x1bf8dc: 0x68460047  ldl         $a2, 0x47($v0)
    ctx->pc = 0x1bf8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1bf8e0: 0x6c460040  ldr         $a2, 0x40($v0)
    ctx->pc = 0x1bf8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1bf8e4: 0xb22602eb  sdl         $a2, 0x2EB($s1)
    ctx->pc = 0x1bf8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 747); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf8e8: 0xb62602e4  sdr         $a2, 0x2E4($s1)
    ctx->pc = 0x1bf8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf8ec: 0x8e230454  lw          $v1, 0x454($s1)
    ctx->pc = 0x1bf8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
    // 0x1bf8f0: 0x68660047  ldl         $a2, 0x47($v1)
    ctx->pc = 0x1bf8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1bf8f4: 0x6c660040  ldr         $a2, 0x40($v1)
    ctx->pc = 0x1bf8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1bf8f8: 0xb22602f3  sdl         $a2, 0x2F3($s1)
    ctx->pc = 0x1bf8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf8fc: 0xb62602ec  sdr         $a2, 0x2EC($s1)
    ctx->pc = 0x1bf8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 748); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf900: 0xae2402f4  sw          $a0, 0x2F4($s1)
    ctx->pc = 0x1bf900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 756), GPR_U32(ctx, 4));
label_1bf904:
    // 0x1bf904: 0xc070520  jal         func_1C1480
    ctx->pc = 0x1BF904u;
    SET_GPR_U32(ctx, 31, 0x1BF90Cu);
    ctx->pc = 0x1BF908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF904u;
    // 0x1bf908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1480u, 0x1BF904u, 0x1BF90Cu)) {
        return;
    }
    ctx->pc = 0x1BF90Cu;
label_1bf90c:
    // 0x1bf90c: 0xc07026e  jal         func_1C09B8
    ctx->pc = 0x1BF90Cu;
    SET_GPR_U32(ctx, 31, 0x1BF914u);
    ctx->pc = 0x1BF910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF90Cu;
    // 0x1bf910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C09B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C09B8u, 0x1BF90Cu, 0x1BF914u)) {
        return;
    }
    ctx->pc = 0x1BF914u;
label_1bf914:
    // 0x1bf914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf918: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1bf918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bf91c: 0xae22030c  sw          $v0, 0x30C($s1)
    ctx->pc = 0x1bf91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 780), GPR_U32(ctx, 2));
    // 0x1bf920: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1bf920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bf924: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1bf924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bf928: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1bf928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf92c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bf92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf930: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF930u;
        // 0x1bf934: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF938u;
}
