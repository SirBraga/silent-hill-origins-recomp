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

// Function: sub_0022E840
// Address: 0x22e840 - 0x22e958
void sub_0022E840_0x22e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E840_0x22e840");
#endif

    switch (ctx->pc) {
        case 0x22e8c0u: goto label_22e8c0;
        case 0x22e918u: goto label_22e918;
        case 0x22e94cu: goto label_22e94c;
        default: break;
    }

    ctx->pc = 0x22e840u;

    // 0x22e840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22e844: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e848: 0x90423f08  lbu         $v0, 0x3F08($v0)
    ctx->pc = 0x22e848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3F08u));
    // 0x22e84c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x22E84Cu;
    {
        const bool branch_taken_0x22e84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E84Cu;
        // 0x22e850: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e84c) {
            ctx->pc = 0x22E94Cu;
            goto label_22e94c;
        }
    }
    ctx->pc = 0x22E854u;
    // 0x22e854: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e858: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22e858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22e85c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22E85Cu;
    {
        const bool branch_taken_0x22e85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E85Cu;
        // 0x22e860: 0xa3808e98  sb          $zero, -0x7168($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e85c) {
            ctx->pc = 0x22E8C8u;
            goto label_22e8c8;
        }
    }
    ctx->pc = 0x22E864u;
    // 0x22e864: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e868: 0x9042415c  lbu         $v0, 0x415C($v0)
    ctx->pc = 0x22e868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x22e86c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22E86Cu;
    {
        const bool branch_taken_0x22e86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E86Cu;
        // 0x22e870: 0x8f838e90  lw          $v1, -0x7170($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e86c) {
            ctx->pc = 0x22E8D0u;
            goto label_22e8d0;
        }
    }
    ctx->pc = 0x22E874u;
    // 0x22e874: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e878: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22e878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22e87c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22E87Cu;
    {
        const bool branch_taken_0x22e87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E87Cu;
        // 0x22e880: 0x8f828e94  lw          $v0, -0x716C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e87c) {
            ctx->pc = 0x22E8D8u;
            goto label_22e8d8;
        }
    }
    ctx->pc = 0x22E884u;
    // 0x22e884: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e888: 0x8c633f00  lw          $v1, 0x3F00($v1)
    ctx->pc = 0x22e888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F00u));
    // 0x22e88c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22E88Cu;
    {
        const bool branch_taken_0x22e88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E88Cu;
        // 0x22e890: 0x93828e5c  lbu         $v0, -0x71A4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e88c) {
            ctx->pc = 0x22E8E0u;
            goto label_22e8e0;
        }
    }
    ctx->pc = 0x22E894u;
    // 0x22e894: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e898: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x22e898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x22e89c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22e8a0: 0x8ca53ee4  lw          $a1, 0x3EE4($a1)
    ctx->pc = 0x22e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e8a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e8a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e8ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e8b0: 0x10650027  beq         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x22E8B0u;
    {
        const bool branch_taken_0x22e8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8B0u;
        // 0x22e8b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8b0) {
            ctx->pc = 0x22E950u;
            goto label_22e950;
        }
    }
    ctx->pc = 0x22E8B8u;
    // 0x22e8b8: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22E8B8u;
    SET_GPR_U32(ctx, 31, 0x22E8C0u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22E8B8u, 0x22E8C0u)) {
        return;
    }
    ctx->pc = 0x22E8C0u;
label_22e8c0:
    // 0x22e8c0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x22E8C0u;
    {
        const bool branch_taken_0x22e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8C0u;
        // 0x22e8c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8c0) {
            ctx->pc = 0x22E950u;
            goto label_22e950;
        }
    }
    ctx->pc = 0x22E8C8u;
label_22e8c8:
    // 0x22e8c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e8cc: 0x8c633f00  lw          $v1, 0x3F00($v1)
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F00u));
label_22e8d0:
    // 0x22e8d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e8d4: 0x8c423f04  lw          $v0, 0x3F04($v0)
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F04u));
label_22e8d8:
    // 0x22e8d8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22E8D8u;
    {
        const bool branch_taken_0x22e8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8D8u;
        // 0x22e8dc: 0x93828e5c  lbu         $v0, -0x71A4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8d8) {
            ctx->pc = 0x22E920u;
            goto label_22e920;
        }
    }
    ctx->pc = 0x22E8E0u;
label_22e8e0:
    // 0x22e8e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e8e4: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22e8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22e8e8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22E8E8u;
    {
        const bool branch_taken_0x22e8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8E8u;
        // 0x22e8ec: 0x93828e5c  lbu         $v0, -0x71A4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8e8) {
            ctx->pc = 0x22E920u;
            goto label_22e920;
        }
    }
    ctx->pc = 0x22E8F0u;
    // 0x22e8f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e8f4: 0x9042415c  lbu         $v0, 0x415C($v0)
    ctx->pc = 0x22e8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x22e8f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E8F8u;
    {
        const bool branch_taken_0x22e8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8F8u;
        // 0x22e8fc: 0x93828e5c  lbu         $v0, -0x71A4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8f8) {
            ctx->pc = 0x22E920u;
            goto label_22e920;
        }
    }
    ctx->pc = 0x22E900u;
    // 0x22e900: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e904: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22e904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22e908: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E908u;
    {
        const bool branch_taken_0x22e908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E908u;
        // 0x22e90c: 0x93828e5c  lbu         $v0, -0x71A4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e908) {
            ctx->pc = 0x22E920u;
            goto label_22e920;
        }
    }
    ctx->pc = 0x22E910u;
    // 0x22e910: 0xc08b518  jal         func_22D460
    ctx->pc = 0x22E910u;
    SET_GPR_U32(ctx, 31, 0x22E918u);
    ctx->pc = 0x22E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E910u;
    // 0x22e914: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D460u, 0x22E910u, 0x22E918u)) {
        return;
    }
    ctx->pc = 0x22E918u;
label_22e918:
    // 0x22e918: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e91c: 0x90423ecc  lbu         $v0, 0x3ECC($v0)
    ctx->pc = 0x22e91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3ECCu));
label_22e920:
    // 0x22e920: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e924: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x22e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x22e928: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22e92c: 0x8ca53ee4  lw          $a1, 0x3EE4($a1)
    ctx->pc = 0x22e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e934: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e93c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E93Cu;
    {
        const bool branch_taken_0x22e93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E93Cu;
        // 0x22e940: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e93c) {
            ctx->pc = 0x22E950u;
            goto label_22e950;
        }
    }
    ctx->pc = 0x22E944u;
    // 0x22e944: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22E944u;
    SET_GPR_U32(ctx, 31, 0x22E94Cu);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22E944u, 0x22E94Cu)) {
        return;
    }
    ctx->pc = 0x22E94Cu;
label_22e94c:
    // 0x22e94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e950:
    // 0x22e950: 0x3e00008  jr          $ra
    ctx->pc = 0x22E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E950u;
        // 0x22e954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E958u;
}
