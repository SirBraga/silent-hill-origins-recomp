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

// Function: sub_002581B8
// Address: 0x2581b8 - 0x258280
void sub_002581B8_0x2581b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002581B8_0x2581b8");
#endif

    switch (ctx->pc) {
        case 0x2581b8u: goto label_2581b8;
        case 0x2581bcu: goto label_2581bc;
        case 0x2581c0u: goto label_2581c0;
        case 0x2581c4u: goto label_2581c4;
        case 0x2581c8u: goto label_2581c8;
        case 0x2581ccu: goto label_2581cc;
        case 0x2581d0u: goto label_2581d0;
        case 0x2581d4u: goto label_2581d4;
        case 0x2581d8u: goto label_2581d8;
        case 0x2581dcu: goto label_2581dc;
        case 0x2581e0u: goto label_2581e0;
        case 0x2581e4u: goto label_2581e4;
        case 0x2581e8u: goto label_2581e8;
        case 0x2581ecu: goto label_2581ec;
        case 0x2581f0u: goto label_2581f0;
        case 0x2581f4u: goto label_2581f4;
        case 0x2581f8u: goto label_2581f8;
        case 0x2581fcu: goto label_2581fc;
        case 0x258200u: goto label_258200;
        case 0x258204u: goto label_258204;
        case 0x258208u: goto label_258208;
        case 0x25820cu: goto label_25820c;
        case 0x258210u: goto label_258210;
        case 0x258214u: goto label_258214;
        case 0x258218u: goto label_258218;
        case 0x25821cu: goto label_25821c;
        case 0x258220u: goto label_258220;
        case 0x258224u: goto label_258224;
        case 0x258228u: goto label_258228;
        case 0x25822cu: goto label_25822c;
        case 0x258230u: goto label_258230;
        case 0x258234u: goto label_258234;
        case 0x258238u: goto label_258238;
        case 0x25823cu: goto label_25823c;
        case 0x258240u: goto label_258240;
        case 0x258244u: goto label_258244;
        case 0x258248u: goto label_258248;
        case 0x25824cu: goto label_25824c;
        case 0x258250u: goto label_258250;
        case 0x258254u: goto label_258254;
        case 0x258258u: goto label_258258;
        case 0x25825cu: goto label_25825c;
        case 0x258260u: goto label_258260;
        case 0x258264u: goto label_258264;
        case 0x258268u: goto label_258268;
        case 0x25826cu: goto label_25826c;
        case 0x258270u: goto label_258270;
        case 0x258274u: goto label_258274;
        case 0x258278u: goto label_258278;
        case 0x25827cu: goto label_25827c;
        default: break;
    }

    ctx->pc = 0x2581b8u;

label_2581b8:
    // 0x2581b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2581b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2581bc:
    // 0x2581bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2581bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2581c0:
    // 0x2581c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2581c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2581c4:
    // 0x2581c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2581c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2581c8:
    // 0x2581c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2581c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2581cc:
    // 0x2581cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2581ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2581d0:
    // 0x2581d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2581d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2581d4:
    // 0x2581d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2581d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2581d8:
    // 0x2581d8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2581d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2581dc:
    // 0x2581dc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2581e0:
    if (ctx->pc == 0x2581E0u) {
        ctx->pc = 0x2581E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581DCu;
        // 0x2581e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2581E4u;
        goto label_2581e4;
    }
    ctx->pc = 0x2581DCu;
    {
        const bool branch_taken_0x2581dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581DCu;
        // 0x2581e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581dc) {
            ctx->pc = 0x258268u;
            goto label_258268;
        }
    }
    ctx->pc = 0x2581E4u;
label_2581e4:
    // 0x2581e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2581e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2581e8:
    // 0x2581e8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2581ec:
    if (ctx->pc == 0x2581ECu) {
        ctx->pc = 0x2581ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581E8u;
        // 0x2581ec: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2581F0u;
        goto label_2581f0;
    }
    ctx->pc = 0x2581E8u;
    {
        const bool branch_taken_0x2581e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581E8u;
        // 0x2581ec: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581e8) {
            ctx->pc = 0x258210u;
            goto label_258210;
        }
    }
    ctx->pc = 0x2581F0u;
label_2581f0:
    // 0x2581f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2581f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2581f4:
    // 0x2581f4: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x2581f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_2581f8:
    // 0x2581f8: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x2581f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_2581fc:
    // 0x2581fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2581fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_258200:
    // 0x258200: 0x40f809  jalr        $v0
label_258204:
    if (ctx->pc == 0x258204u) {
        ctx->pc = 0x258204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258200u;
        // 0x258204: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258208u;
        goto label_258208;
    }
    ctx->pc = 0x258200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258208u);
        ctx->pc = 0x258204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258200u;
        // 0x258204: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258200u, 0x258208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258208u;
label_258208:
    // 0x258208: 0x10000007  b           . + 4 + (0x7 << 2)
label_25820c:
    if (ctx->pc == 0x25820Cu) {
        ctx->pc = 0x258210u;
        goto label_258210;
    }
    ctx->pc = 0x258208u;
    {
        const bool branch_taken_0x258208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258208) {
            ctx->pc = 0x258228u;
            goto label_258228;
        }
    }
    ctx->pc = 0x258210u;
label_258210:
    // 0x258210: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x258210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_258214:
    // 0x258214: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x258214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_258218:
    // 0x258218: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_25821c:
    // 0x25821c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25821cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_258220:
    // 0x258220: 0x40f809  jalr        $v0
label_258224:
    if (ctx->pc == 0x258224u) {
        ctx->pc = 0x258224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258220u;
        // 0x258224: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258228u;
        goto label_258228;
    }
    ctx->pc = 0x258220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258228u);
        ctx->pc = 0x258224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258220u;
        // 0x258224: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258220u, 0x258228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258228u;
label_258228:
    // 0x258228: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_25822c:
    if (ctx->pc == 0x25822Cu) {
        ctx->pc = 0x25822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258228u;
        // 0x25822c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258230u;
        goto label_258230;
    }
    ctx->pc = 0x258228u;
    {
        const bool branch_taken_0x258228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258228) {
            ctx->pc = 0x25822Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258228u;
            // 0x25822c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258260u;
            goto label_258260;
        }
    }
    ctx->pc = 0x258230u;
label_258230:
    // 0x258230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_258234:
    // 0x258234: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_258238:
    // 0x258238: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x258238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25823c:
    // 0x25823c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25823cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_258240:
    // 0x258240: 0xc092848  jal         func_24A120
label_258244:
    if (ctx->pc == 0x258244u) {
        ctx->pc = 0x258244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258240u;
        // 0x258244: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258248u;
        goto label_258248;
    }
    ctx->pc = 0x258240u;
    SET_GPR_U32(ctx, 31, 0x258248u);
    ctx->pc = 0x258244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258240u;
    // 0x258244: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x258240u, 0x258248u)) {
        return;
    }
    ctx->pc = 0x258248u;
label_258248:
    // 0x258248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25824c:
    // 0x25824c: 0xc09281a  jal         func_24A068
label_258250:
    if (ctx->pc == 0x258250u) {
        ctx->pc = 0x258250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25824Cu;
        // 0x258250: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258254u;
        goto label_258254;
    }
    ctx->pc = 0x25824Cu;
    SET_GPR_U32(ctx, 31, 0x258254u);
    ctx->pc = 0x258250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25824Cu;
    // 0x258250: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25824Cu, 0x258254u)) {
        return;
    }
    ctx->pc = 0x258254u;
label_258254:
    // 0x258254: 0x10000004  b           . + 4 + (0x4 << 2)
label_258258:
    if (ctx->pc == 0x258258u) {
        ctx->pc = 0x258258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258254u;
        // 0x258258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25825Cu;
        goto label_25825c;
    }
    ctx->pc = 0x258254u;
    {
        const bool branch_taken_0x258254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258254u;
        // 0x258258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258254) {
            ctx->pc = 0x258268u;
            goto label_258268;
        }
    }
    ctx->pc = 0x25825Cu;
label_25825c:
    // 0x25825c: 0x0  nop
    ctx->pc = 0x25825cu;
    // NOP
label_258260:
    // 0x258260: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x258260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_258264:
    // 0x258264: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x258264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258268:
    // 0x258268: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x258268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25826c:
    // 0x25826c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25826cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258270:
    // 0x258270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_258274:
    // 0x258274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_258278:
    // 0x258278: 0x3e00008  jr          $ra
label_25827c:
    if (ctx->pc == 0x25827Cu) {
        ctx->pc = 0x25827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258278u;
        // 0x25827c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258280u;
        goto label_fallthrough_0x258278;
    }
    ctx->pc = 0x258278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258278u;
        // 0x25827c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258278:
    ctx->pc = 0x258280u;
}
