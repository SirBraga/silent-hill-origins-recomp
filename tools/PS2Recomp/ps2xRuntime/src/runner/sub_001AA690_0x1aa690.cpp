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

// Function: sub_001AA690
// Address: 0x1aa690 - 0x1aa770
void sub_001AA690_0x1aa690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA690_0x1aa690");
#endif

    switch (ctx->pc) {
        case 0x1aa690u: goto label_1aa690;
        case 0x1aa694u: goto label_1aa694;
        case 0x1aa698u: goto label_1aa698;
        case 0x1aa69cu: goto label_1aa69c;
        case 0x1aa6a0u: goto label_1aa6a0;
        case 0x1aa6a4u: goto label_1aa6a4;
        case 0x1aa6a8u: goto label_1aa6a8;
        case 0x1aa6acu: goto label_1aa6ac;
        case 0x1aa6b0u: goto label_1aa6b0;
        case 0x1aa6b4u: goto label_1aa6b4;
        case 0x1aa6b8u: goto label_1aa6b8;
        case 0x1aa6bcu: goto label_1aa6bc;
        case 0x1aa6c0u: goto label_1aa6c0;
        case 0x1aa6c4u: goto label_1aa6c4;
        case 0x1aa6c8u: goto label_1aa6c8;
        case 0x1aa6ccu: goto label_1aa6cc;
        case 0x1aa6d0u: goto label_1aa6d0;
        case 0x1aa6d4u: goto label_1aa6d4;
        case 0x1aa6d8u: goto label_1aa6d8;
        case 0x1aa6dcu: goto label_1aa6dc;
        case 0x1aa6e0u: goto label_1aa6e0;
        case 0x1aa6e4u: goto label_1aa6e4;
        case 0x1aa6e8u: goto label_1aa6e8;
        case 0x1aa6ecu: goto label_1aa6ec;
        case 0x1aa6f0u: goto label_1aa6f0;
        case 0x1aa6f4u: goto label_1aa6f4;
        case 0x1aa6f8u: goto label_1aa6f8;
        case 0x1aa6fcu: goto label_1aa6fc;
        case 0x1aa700u: goto label_1aa700;
        case 0x1aa704u: goto label_1aa704;
        case 0x1aa708u: goto label_1aa708;
        case 0x1aa70cu: goto label_1aa70c;
        case 0x1aa710u: goto label_1aa710;
        case 0x1aa714u: goto label_1aa714;
        case 0x1aa718u: goto label_1aa718;
        case 0x1aa71cu: goto label_1aa71c;
        case 0x1aa720u: goto label_1aa720;
        case 0x1aa724u: goto label_1aa724;
        case 0x1aa728u: goto label_1aa728;
        case 0x1aa72cu: goto label_1aa72c;
        case 0x1aa730u: goto label_1aa730;
        case 0x1aa734u: goto label_1aa734;
        case 0x1aa738u: goto label_1aa738;
        case 0x1aa73cu: goto label_1aa73c;
        case 0x1aa740u: goto label_1aa740;
        case 0x1aa744u: goto label_1aa744;
        case 0x1aa748u: goto label_1aa748;
        case 0x1aa74cu: goto label_1aa74c;
        case 0x1aa750u: goto label_1aa750;
        case 0x1aa754u: goto label_1aa754;
        case 0x1aa758u: goto label_1aa758;
        case 0x1aa75cu: goto label_1aa75c;
        case 0x1aa760u: goto label_1aa760;
        case 0x1aa764u: goto label_1aa764;
        case 0x1aa768u: goto label_1aa768;
        case 0x1aa76cu: goto label_1aa76c;
        default: break;
    }

    ctx->pc = 0x1aa690u;

label_1aa690:
    // 0x1aa690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aa694:
    // 0x1aa694: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x1aa694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_1aa698:
    // 0x1aa698: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1aa69c:
    // 0x1aa69c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aa6a0:
    // 0x1aa6a0: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x1aa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1aa6a4:
    // 0x1aa6a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa6a8:
    // 0x1aa6a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1aa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1aa6ac:
    // 0x1aa6ac: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_1aa6b0:
    if (ctx->pc == 0x1AA6B0u) {
        ctx->pc = 0x1AA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6ACu;
        // 0x1aa6b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6B4u;
        goto label_1aa6b4;
    }
    ctx->pc = 0x1AA6ACu;
    {
        const bool branch_taken_0x1aa6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6ACu;
        // 0x1aa6b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6ac) {
            ctx->pc = 0x1AA760u;
            goto label_1aa760;
        }
    }
    ctx->pc = 0x1AA6B4u;
label_1aa6b4:
    // 0x1aa6b4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1aa6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aa6b8:
    // 0x1aa6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1aa6bc:
    // 0x1aa6bc: 0x0  nop
    ctx->pc = 0x1aa6bcu;
    // NOP
label_1aa6c0:
    // 0x1aa6c0: 0x56020022  bnel        $s0, $v0, . + 4 + (0x22 << 2)
label_1aa6c4:
    if (ctx->pc == 0x1AA6C4u) {
        ctx->pc = 0x1AA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6C0u;
        // 0x1aa6c4: 0x8ca200c8  lw          $v0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6C8u;
        goto label_1aa6c8;
    }
    ctx->pc = 0x1AA6C0u;
    {
        const bool branch_taken_0x1aa6c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa6c0) {
            ctx->pc = 0x1AA6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA6C0u;
            // 0x1aa6c4: 0x8ca200c8  lw          $v0, 0xC8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA74Cu;
            goto label_1aa74c;
        }
    }
    ctx->pc = 0x1AA6C8u;
label_1aa6c8:
    // 0x1aa6c8: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x1aa6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_1aa6cc:
    // 0x1aa6cc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1aa6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1aa6d0:
    // 0x1aa6d0: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1aa6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1aa6d4:
    // 0x1aa6d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa6d8:
    // 0x1aa6d8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1aa6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1aa6dc:
    // 0x1aa6dc: 0x50650009  beql        $v1, $a1, . + 4 + (0x9 << 2)
label_1aa6e0:
    if (ctx->pc == 0x1AA6E0u) {
        ctx->pc = 0x1AA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6DCu;
        // 0x1aa6e0: 0xac60fffc  sw          $zero, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6E4u;
        goto label_1aa6e4;
    }
    ctx->pc = 0x1AA6DCu;
    {
        const bool branch_taken_0x1aa6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1aa6dc) {
            ctx->pc = 0x1AA6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA6DCu;
            // 0x1aa6e0: 0xac60fffc  sw          $zero, -0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA704u;
            goto label_1aa704;
        }
    }
    ctx->pc = 0x1AA6E4u;
label_1aa6e4:
    // 0x1aa6e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1aa6e8:
    // 0x1aa6e8: 0xac62fffc  sw          $v0, -0x4($v1)
    ctx->pc = 0x1aa6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
label_1aa6ec:
    // 0x1aa6ec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1aa6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1aa6f0:
    // 0x1aa6f0: 0x0  nop
    ctx->pc = 0x1aa6f0u;
    // NOP
label_1aa6f4:
    // 0x1aa6f4: 0x0  nop
    ctx->pc = 0x1aa6f4u;
    // NOP
label_1aa6f8:
    // 0x1aa6f8: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
label_1aa6fc:
    if (ctx->pc == 0x1AA6FCu) {
        ctx->pc = 0x1AA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6F8u;
        // 0x1aa6fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA700u;
        goto label_1aa700;
    }
    ctx->pc = 0x1AA6F8u;
    {
        const bool branch_taken_0x1aa6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1aa6f8) {
            ctx->pc = 0x1AA6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA6F8u;
            // 0x1aa6fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa6e8;
        }
    }
    ctx->pc = 0x1AA700u;
label_1aa700:
    // 0x1aa700: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x1aa700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
label_1aa704:
    // 0x1aa704: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1aa704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1aa708:
    // 0x1aa708: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aa70c:
    // 0x1aa70c: 0xac8200c8  sw          $v0, 0xC8($a0)
    ctx->pc = 0x1aa70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 2));
label_1aa710:
    // 0x1aa710: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1aa710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1aa714:
    // 0x1aa714: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1aa714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1aa718:
    // 0x1aa718: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1aa718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1aa71c:
    // 0x1aa71c: 0x40f809  jalr        $v0
label_1aa720:
    if (ctx->pc == 0x1AA720u) {
        ctx->pc = 0x1AA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA71Cu;
        // 0x1aa720: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA724u;
        goto label_1aa724;
    }
    ctx->pc = 0x1AA71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA724u);
        ctx->pc = 0x1AA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA71Cu;
        // 0x1aa720: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA71Cu, 0x1AA724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA724u;
label_1aa724:
    // 0x1aa724: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_1aa728:
    if (ctx->pc == 0x1AA728u) {
        ctx->pc = 0x1AA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA724u;
        // 0x1aa728: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA72Cu;
        goto label_1aa72c;
    }
    ctx->pc = 0x1AA724u;
    {
        const bool branch_taken_0x1aa724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa724) {
            ctx->pc = 0x1AA728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA724u;
            // 0x1aa728: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA764u;
            goto label_1aa764;
        }
    }
    ctx->pc = 0x1AA72Cu;
label_1aa72c:
    // 0x1aa72c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1aa72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1aa730:
    // 0x1aa730: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa734:
    // 0x1aa734: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1aa734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1aa738:
    // 0x1aa738: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1aa738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1aa73c:
    // 0x1aa73c: 0x60f809  jalr        $v1
label_1aa740:
    if (ctx->pc == 0x1AA740u) {
        ctx->pc = 0x1AA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA73Cu;
        // 0x1aa740: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA744u;
        goto label_1aa744;
    }
    ctx->pc = 0x1AA73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA744u);
        ctx->pc = 0x1AA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA73Cu;
        // 0x1aa740: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA73Cu, 0x1AA744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA744u;
label_1aa744:
    // 0x1aa744: 0x10000007  b           . + 4 + (0x7 << 2)
label_1aa748:
    if (ctx->pc == 0x1AA748u) {
        ctx->pc = 0x1AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA744u;
        // 0x1aa748: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA74Cu;
        goto label_1aa74c;
    }
    ctx->pc = 0x1AA744u;
    {
        const bool branch_taken_0x1aa744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA744u;
        // 0x1aa748: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa744) {
            ctx->pc = 0x1AA764u;
            goto label_1aa764;
        }
    }
    ctx->pc = 0x1AA74Cu;
label_1aa74c:
    // 0x1aa74c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1aa74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1aa750:
    // 0x1aa750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa754:
    // 0x1aa754: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1aa758:
    // 0x1aa758: 0x5462ffd9  bnel        $v1, $v0, . + 4 + (-0x27 << 2)
label_1aa75c:
    if (ctx->pc == 0x1AA75Cu) {
        ctx->pc = 0x1AA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA758u;
        // 0x1aa75c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA760u;
        goto label_1aa760;
    }
    ctx->pc = 0x1AA758u;
    {
        const bool branch_taken_0x1aa758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa758) {
            ctx->pc = 0x1AA75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA758u;
            // 0x1aa75c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa6c0;
        }
    }
    ctx->pc = 0x1AA760u;
label_1aa760:
    // 0x1aa760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa764:
    // 0x1aa764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa768:
    // 0x1aa768: 0x3e00008  jr          $ra
label_1aa76c:
    if (ctx->pc == 0x1AA76Cu) {
        ctx->pc = 0x1AA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA768u;
        // 0x1aa76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA770u;
        goto label_fallthrough_0x1aa768;
    }
    ctx->pc = 0x1AA768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA768u;
        // 0x1aa76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa768:
    ctx->pc = 0x1AA770u;
}
