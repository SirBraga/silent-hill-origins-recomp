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

// Function: sub_0024F648
// Address: 0x24f648 - 0x24f758
void sub_0024F648_0x24f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F648_0x24f648");
#endif

    switch (ctx->pc) {
        case 0x24f680u: goto label_24f680;
        case 0x24f6acu: goto label_24f6ac;
        case 0x24f6b8u: goto label_24f6b8;
        case 0x24f6dcu: goto label_24f6dc;
        case 0x24f6fcu: goto label_24f6fc;
        case 0x24f70cu: goto label_24f70c;
        case 0x24f72cu: goto label_24f72c;
        default: break;
    }

    ctx->pc = 0x24f648u;

    // 0x24f648: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24f648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24f64c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x24f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x24f650: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24f654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24f654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f658: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x24f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x24f65c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24f65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f660: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x24f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x24f664: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x24f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x24f668: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24f66c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x24f66cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24f670: 0x27b20014  addiu       $s2, $sp, 0x14
    ctx->pc = 0x24f670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x24f674: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x24F674u;
    {
        const bool branch_taken_0x24f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F674u;
        // 0x24f678: 0x27b10018  addiu       $s1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f674) {
            ctx->pc = 0x24F714u;
            goto label_24f714;
        }
    }
    ctx->pc = 0x24F67Cu;
    // 0x24f67c: 0x0  nop
    ctx->pc = 0x24f67cu;
    // NOP
label_24f680:
    // 0x24f680: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x24f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x24f684: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x24f684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x24f688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f68c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x24f68cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x24f690: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24F690u;
    {
        const bool branch_taken_0x24f690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F690u;
        // 0x24f694: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f690) {
            ctx->pc = 0x24F6C0u;
            goto label_24f6c0;
        }
    }
    ctx->pc = 0x24F698u;
    // 0x24f698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f69c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24f6a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24f6a4: 0xc092848  jal         func_24A120
    ctx->pc = 0x24F6A4u;
    SET_GPR_U32(ctx, 31, 0x24F6ACu);
    ctx->pc = 0x24F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6A4u;
    // 0x24f6a8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24F6A4u, 0x24F6ACu)) {
        return;
    }
    ctx->pc = 0x24F6ACu;
label_24f6ac:
    // 0x24f6ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6b0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24F6B0u;
    SET_GPR_U32(ctx, 31, 0x24F6B8u);
    ctx->pc = 0x24F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6B0u;
    // 0x24f6b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24F6B0u, 0x24F6B8u)) {
        return;
    }
    ctx->pc = 0x24F6B8u;
label_24f6b8:
    // 0x24f6b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x24F6B8u;
    {
        const bool branch_taken_0x24f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6B8u;
        // 0x24f6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6b8) {
            ctx->pc = 0x24F738u;
            goto label_24f738;
        }
    }
    ctx->pc = 0x24F6C0u;
label_24f6c0:
    // 0x24f6c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f6c4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F6C4u;
    {
        const bool branch_taken_0x24f6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6C4u;
        // 0x24f6c8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6c4) {
            ctx->pc = 0x24F6E4u;
            goto label_24f6e4;
        }
    }
    ctx->pc = 0x24F6CCu;
    // 0x24f6cc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x24f6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x24f6d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6d4: 0xc093cfa  jal         func_24F3E8
    ctx->pc = 0x24F6D4u;
    SET_GPR_U32(ctx, 31, 0x24F6DCu);
    ctx->pc = 0x24F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6D4u;
    // 0x24f6d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F3E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F3E8u, 0x24F6D4u, 0x24F6DCu)) {
        return;
    }
    ctx->pc = 0x24F6DCu;
label_24f6dc:
    // 0x24f6dc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24F6DCu;
    {
        const bool branch_taken_0x24f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6DCu;
        // 0x24f6e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6dc) {
            ctx->pc = 0x24F73Cu;
            goto label_24f73c;
        }
    }
    ctx->pc = 0x24F6E4u;
label_24f6e4:
    // 0x24f6e4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F6E4u;
    {
        const bool branch_taken_0x24f6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6E4u;
        // 0x24f6e8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6e4) {
            ctx->pc = 0x24F704u;
            goto label_24f704;
        }
    }
    ctx->pc = 0x24F6ECu;
    // 0x24f6ec: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x24f6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x24f6f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6f4: 0xc093d3e  jal         func_24F4F8
    ctx->pc = 0x24F6F4u;
    SET_GPR_U32(ctx, 31, 0x24F6FCu);
    ctx->pc = 0x24F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6F4u;
    // 0x24f6f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F4F8u, 0x24F6F4u, 0x24F6FCu)) {
        return;
    }
    ctx->pc = 0x24F6FCu;
label_24f6fc:
    // 0x24f6fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24F6FCu;
    {
        const bool branch_taken_0x24f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6FCu;
        // 0x24f700: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6fc) {
            ctx->pc = 0x24F73Cu;
            goto label_24f73c;
        }
    }
    ctx->pc = 0x24F704u;
label_24f704:
    // 0x24f704: 0xc093620  jal         func_24D880
    ctx->pc = 0x24F704u;
    SET_GPR_U32(ctx, 31, 0x24F70Cu);
    ctx->pc = 0x24F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F704u;
    // 0x24f708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x24F704u, 0x24F70Cu)) {
        return;
    }
    ctx->pc = 0x24F70Cu;
label_24f70c:
    // 0x24f70c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24F70Cu;
    {
        const bool branch_taken_0x24f70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F70Cu;
        // 0x24f710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f70c) {
            ctx->pc = 0x24F738u;
            goto label_24f738;
        }
    }
    ctx->pc = 0x24F714u;
label_24f714:
    // 0x24f714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f718: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24f718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f71c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24f71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f720: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24f720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f724: 0xc0926aa  jal         func_249AA8
    ctx->pc = 0x24F724u;
    SET_GPR_U32(ctx, 31, 0x24F72Cu);
    ctx->pc = 0x24F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F724u;
    // 0x24f728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249AA8u, 0x24F724u, 0x24F72Cu)) {
        return;
    }
    ctx->pc = 0x24F72Cu;
label_24f72c:
    // 0x24f72c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x24F72Cu;
    {
        const bool branch_taken_0x24f72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F72Cu;
        // 0x24f730: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f72c) {
            ctx->pc = 0x24F680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f680;
        }
    }
    ctx->pc = 0x24F734u;
    // 0x24f734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24f734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f738:
    // 0x24f738: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x24f738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24f73c:
    // 0x24f73c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x24f73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24f740: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x24f740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f744: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24f744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f748: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x24f748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f74c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24f74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f750: 0x3e00008  jr          $ra
    ctx->pc = 0x24F750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F750u;
        // 0x24f754: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F758u;
}
