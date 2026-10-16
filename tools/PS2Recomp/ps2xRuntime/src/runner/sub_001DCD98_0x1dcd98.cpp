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

// Function: sub_001DCD98
// Address: 0x1dcd98 - 0x1dce38
void sub_001DCD98_0x1dcd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCD98_0x1dcd98");
#endif

    switch (ctx->pc) {
        case 0x1dcd98u: goto label_1dcd98;
        case 0x1dcd9cu: goto label_1dcd9c;
        case 0x1dcda0u: goto label_1dcda0;
        case 0x1dcda4u: goto label_1dcda4;
        case 0x1dcda8u: goto label_1dcda8;
        case 0x1dcdacu: goto label_1dcdac;
        case 0x1dcdb0u: goto label_1dcdb0;
        case 0x1dcdb4u: goto label_1dcdb4;
        case 0x1dcdb8u: goto label_1dcdb8;
        case 0x1dcdbcu: goto label_1dcdbc;
        case 0x1dcdc0u: goto label_1dcdc0;
        case 0x1dcdc4u: goto label_1dcdc4;
        case 0x1dcdc8u: goto label_1dcdc8;
        case 0x1dcdccu: goto label_1dcdcc;
        case 0x1dcdd0u: goto label_1dcdd0;
        case 0x1dcdd4u: goto label_1dcdd4;
        case 0x1dcdd8u: goto label_1dcdd8;
        case 0x1dcddcu: goto label_1dcddc;
        case 0x1dcde0u: goto label_1dcde0;
        case 0x1dcde4u: goto label_1dcde4;
        case 0x1dcde8u: goto label_1dcde8;
        case 0x1dcdecu: goto label_1dcdec;
        case 0x1dcdf0u: goto label_1dcdf0;
        case 0x1dcdf4u: goto label_1dcdf4;
        case 0x1dcdf8u: goto label_1dcdf8;
        case 0x1dcdfcu: goto label_1dcdfc;
        case 0x1dce00u: goto label_1dce00;
        case 0x1dce04u: goto label_1dce04;
        case 0x1dce08u: goto label_1dce08;
        case 0x1dce0cu: goto label_1dce0c;
        case 0x1dce10u: goto label_1dce10;
        case 0x1dce14u: goto label_1dce14;
        case 0x1dce18u: goto label_1dce18;
        case 0x1dce1cu: goto label_1dce1c;
        case 0x1dce20u: goto label_1dce20;
        case 0x1dce24u: goto label_1dce24;
        case 0x1dce28u: goto label_1dce28;
        case 0x1dce2cu: goto label_1dce2c;
        case 0x1dce30u: goto label_1dce30;
        case 0x1dce34u: goto label_1dce34;
        default: break;
    }

    ctx->pc = 0x1dcd98u;

label_1dcd98:
    // 0x1dcd98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dcd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dcd9c:
    // 0x1dcd9c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1dcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1dcda0:
    // 0x1dcda0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dcda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dcda4:
    // 0x1dcda4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dcda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dcda8:
    // 0x1dcda8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dcda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dcdac:
    // 0x1dcdac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdb0:
    // 0x1dcdb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dcdb4:
    // 0x1dcdb4: 0x24510fd8  addiu       $s1, $v0, 0xFD8
    ctx->pc = 0x1dcdb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1dcdb8:
    // 0x1dcdb8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1dcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dcdbc:
    // 0x1dcdbc: 0x40f809  jalr        $v0
label_1dcdc0:
    if (ctx->pc == 0x1DCDC0u) {
        ctx->pc = 0x1DCDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDBCu;
        // 0x1dcdc0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDC4u;
        goto label_1dcdc4;
    }
    ctx->pc = 0x1DCDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DCDC4u);
        ctx->pc = 0x1DCDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDBCu;
        // 0x1dcdc0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDBCu, 0x1DCDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCDC4u;
label_1dcdc4:
    // 0x1dcdc4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1dcdc8:
    if (ctx->pc == 0x1DCDC8u) {
        ctx->pc = 0x1DCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDC4u;
        // 0x1dcdc8: 0x3c050034  lui         $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDCCu;
        goto label_1dcdcc;
    }
    ctx->pc = 0x1DCDC4u;
    {
        const bool branch_taken_0x1dcdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDC4u;
        // 0x1dcdc8: 0x3c050034  lui         $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdc4) {
            ctx->pc = 0x1DCDF8u;
            goto label_1dcdf8;
        }
    }
    ctx->pc = 0x1DCDCCu;
label_1dcdcc:
    // 0x1dcdcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1dcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dcdd0:
    // 0x1dcdd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1dcdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcdd4:
    // 0x1dcdd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dcdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dcdd8:
    // 0x1dcdd8: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_1dcddc:
    if (ctx->pc == 0x1DCDDCu) {
        ctx->pc = 0x1DCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDD8u;
        // 0x1dcddc: 0xaca3e640  sw          $v1, -0x19C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDE0u;
        goto label_1dcde0;
    }
    ctx->pc = 0x1DCDD8u;
    {
        const bool branch_taken_0x1dcdd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDD8u;
        // 0x1dcddc: 0xaca3e640  sw          $v1, -0x19C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdd8) {
            ctx->pc = 0x1DCE1Cu;
            goto label_1dce1c;
        }
    }
    ctx->pc = 0x1DCDE0u;
label_1dcde0:
    // 0x1dcde0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1dcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1dcde4:
    // 0x1dcde4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1dcde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dcde8:
    // 0x1dcde8: 0x40f809  jalr        $v0
label_1dcdec:
    if (ctx->pc == 0x1DCDECu) {
        ctx->pc = 0x1DCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDE8u;
        // 0x1dcdec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDF0u;
        goto label_1dcdf0;
    }
    ctx->pc = 0x1DCDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DCDF0u);
        ctx->pc = 0x1DCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDE8u;
        // 0x1dcdec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDE8u, 0x1DCDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCDF0u;
label_1dcdf0:
    // 0x1dcdf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1dcdf4:
    if (ctx->pc == 0x1DCDF4u) {
        ctx->pc = 0x1DCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF0u;
        // 0x1dcdf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDF8u;
        goto label_1dcdf8;
    }
    ctx->pc = 0x1DCDF0u;
    {
        const bool branch_taken_0x1dcdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF0u;
        // 0x1dcdf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdf0) {
            ctx->pc = 0x1DCE20u;
            goto label_1dce20;
        }
    }
    ctx->pc = 0x1DCDF8u;
label_1dcdf8:
    // 0x1dcdf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dcdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dcdfc:
    // 0x1dcdfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1dcdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dce00:
    // 0x1dce00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dce04:
    // 0x1dce04: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1dce08:
    if (ctx->pc == 0x1DCE08u) {
        ctx->pc = 0x1DCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE04u;
        // 0x1dce08: 0xaca3e640  sw          $v1, -0x19C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE0Cu;
        goto label_1dce0c;
    }
    ctx->pc = 0x1DCE04u;
    {
        const bool branch_taken_0x1dce04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE04u;
        // 0x1dce08: 0xaca3e640  sw          $v1, -0x19C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce04) {
            ctx->pc = 0x1DCE1Cu;
            goto label_1dce1c;
        }
    }
    ctx->pc = 0x1DCE0Cu;
label_1dce0c:
    // 0x1dce0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1dce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1dce10:
    // 0x1dce10: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1dce10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dce14:
    // 0x1dce14: 0x40f809  jalr        $v0
label_1dce18:
    if (ctx->pc == 0x1DCE18u) {
        ctx->pc = 0x1DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE14u;
        // 0x1dce18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE1Cu;
        goto label_1dce1c;
    }
    ctx->pc = 0x1DCE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DCE1Cu);
        ctx->pc = 0x1DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE14u;
        // 0x1dce18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE14u, 0x1DCE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCE1Cu;
label_1dce1c:
    // 0x1dce1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dce1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dce20:
    // 0x1dce20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dce20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dce24:
    // 0x1dce24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dce28:
    // 0x1dce28: 0x3e00008  jr          $ra
label_1dce2c:
    if (ctx->pc == 0x1DCE2Cu) {
        ctx->pc = 0x1DCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE28u;
        // 0x1dce2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE30u;
        goto label_1dce30;
    }
    ctx->pc = 0x1DCE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE28u;
        // 0x1dce2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCE30u;
label_1dce30:
    // 0x1dce30: 0x3e00008  jr          $ra
label_1dce34:
    if (ctx->pc == 0x1DCE34u) {
        ctx->pc = 0x1DCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE30u;
        // 0x1dce34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE38u;
        goto label_fallthrough_0x1dce30;
    }
    ctx->pc = 0x1DCE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE30u;
        // 0x1dce34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dce30:
    ctx->pc = 0x1DCE38u;
}
