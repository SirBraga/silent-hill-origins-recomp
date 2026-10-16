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

// Function: sub_001D1598
// Address: 0x1d1598 - 0x1d1668
void sub_001D1598_0x1d1598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1598_0x1d1598");
#endif

    switch (ctx->pc) {
        case 0x1d15c0u: goto label_1d15c0;
        case 0x1d15d4u: goto label_1d15d4;
        case 0x1d15e4u: goto label_1d15e4;
        case 0x1d15f8u: goto label_1d15f8;
        case 0x1d1608u: goto label_1d1608;
        case 0x1d161cu: goto label_1d161c;
        case 0x1d1640u: goto label_1d1640;
        case 0x1d1654u: goto label_1d1654;
        default: break;
    }

    ctx->pc = 0x1d1598u;

    // 0x1d1598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d159c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d159cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d15a0: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1d15a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1d15a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d15a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d15a8: 0x8e229b18  lw          $v0, -0x64E8($s1)
    ctx->pc = 0x1d15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339B18u));
    // 0x1d15ac: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D15ACu;
    {
        const bool branch_taken_0x1d15ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15ACu;
        // 0x1d15b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15ac) {
            ctx->pc = 0x1D1654u;
            goto label_1d1654;
        }
    }
    ctx->pc = 0x1D15B4u;
    // 0x1d15b4: 0x24040bb8  addiu       $a0, $zero, 0xBB8
    ctx->pc = 0x1d15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1d15b8: 0xc080888  jal         func_202220
    ctx->pc = 0x1D15B8u;
    SET_GPR_U32(ctx, 31, 0x1D15C0u);
    ctx->pc = 0x1D15BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15B8u;
    // 0x1d15bc: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x1D15B8u, 0x1D15C0u)) {
        return;
    }
    ctx->pc = 0x1D15C0u;
label_1d15c0:
    // 0x1d15c0: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x1d15c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1d15c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d15c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d15c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D15CCu;
    SET_GPR_U32(ctx, 31, 0x1D15D4u);
    ctx->pc = 0x1D15D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15CCu;
    // 0x1d15d0: 0xae229b18  sw          $v0, -0x64E8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D15CCu, 0x1D15D4u)) {
        return;
    }
    ctx->pc = 0x1D15D4u;
label_1d15d4:
    // 0x1d15d4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d15d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1d15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d15dc: 0xc080888  jal         func_202220
    ctx->pc = 0x1D15DCu;
    SET_GPR_U32(ctx, 31, 0x1D15E4u);
    ctx->pc = 0x1D15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15DCu;
    // 0x1d15e0: 0xac609b1c  sw          $zero, -0x64E4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941468), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x1D15DCu, 0x1D15E4u)) {
        return;
    }
    ctx->pc = 0x1D15E4u;
label_1d15e4:
    // 0x1d15e4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d15e8: 0xae029b20  sw          $v0, -0x64E0($s0)
    ctx->pc = 0x1d15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941472), GPR_U32(ctx, 2));
    // 0x1d15ec: 0x8c649b4c  lw          $a0, -0x64B4($v1)
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339B4Cu));
    // 0x1d15f0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1D15F0u;
    SET_GPR_U32(ctx, 31, 0x1D15F8u);
    ctx->pc = 0x1D15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15F0u;
    // 0x1d15f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1D15F0u, 0x1D15F8u)) {
        return;
    }
    ctx->pc = 0x1D15F8u;
label_1d15f8:
    // 0x1d15f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d15f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15fc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1d15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d1600: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x1D1600u;
    SET_GPR_U32(ctx, 31, 0x1D1608u);
    ctx->pc = 0x1D1604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1600u;
    // 0x1d1604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x1D1600u, 0x1D1608u)) {
        return;
    }
    ctx->pc = 0x1D1608u;
label_1d1608:
    // 0x1d1608: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1608u;
    {
        const bool branch_taken_0x1d1608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1608u;
        // 0x1d160c: 0x2403006e  addiu       $v1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1608) {
            ctx->pc = 0x1D162Cu;
            goto label_1d162c;
        }
    }
    ctx->pc = 0x1D1610u;
    // 0x1d1610: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1614: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1D1614u;
    SET_GPR_U32(ctx, 31, 0x1D161Cu);
    ctx->pc = 0x1D1618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1614u;
    // 0x1d1618: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1D1614u, 0x1D161Cu)) {
        return;
    }
    ctx->pc = 0x1D161Cu;
label_1d161c:
    // 0x1d161c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D161Cu;
    {
        const bool branch_taken_0x1d161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D161Cu;
        // 0x1d1620: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d161c) {
            ctx->pc = 0x1D1628u;
            goto label_1d1628;
        }
    }
    ctx->pc = 0x1D1624u;
    // 0x1d1624: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x1d1624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_1d1628:
    // 0x1d1628: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1d1628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1d162c:
    // 0x1d162c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d1630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1634: 0x8c439168  lw          $v1, -0x6E98($v0)
    ctx->pc = 0x1d1634u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339168u));
    // 0x1d1638: 0xc06d0b0  jal         func_1B42C0
    ctx->pc = 0x1D1638u;
    SET_GPR_U32(ctx, 31, 0x1D1640u);
    ctx->pc = 0x1D163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1638u;
    // 0x1d163c: 0x8c640148  lw          $a0, 0x148($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B42C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B42C0u, 0x1D1638u, 0x1D1640u)) {
        return;
    }
    ctx->pc = 0x1D1640u;
label_1d1640:
    // 0x1d1640: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d1644: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1644u;
    {
        const bool branch_taken_0x1d1644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1644u;
        // 0x1d1648: 0xac629b10  sw          $v0, -0x64F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1644) {
            ctx->pc = 0x1D1654u;
            goto label_1d1654;
        }
    }
    ctx->pc = 0x1D164Cu;
    // 0x1d164c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1D164Cu;
    SET_GPR_U32(ctx, 31, 0x1D1654u);
    ctx->pc = 0x1D1650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D164Cu;
    // 0x1d1650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1D164Cu, 0x1D1654u)) {
        return;
    }
    ctx->pc = 0x1D1654u;
label_1d1654:
    // 0x1d1654: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d1654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d165c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d165cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1660: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1660u;
        // 0x1d1664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1668u;
}
