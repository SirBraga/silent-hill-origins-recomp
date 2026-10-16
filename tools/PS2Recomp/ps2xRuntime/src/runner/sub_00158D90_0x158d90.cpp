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

// Function: sub_00158D90
// Address: 0x158d90 - 0x158f98
void sub_00158D90_0x158d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158D90_0x158d90");
#endif

    switch (ctx->pc) {
        case 0x158d90u: goto label_158d90;
        case 0x158d94u: goto label_158d94;
        case 0x158d98u: goto label_158d98;
        case 0x158d9cu: goto label_158d9c;
        case 0x158da0u: goto label_158da0;
        case 0x158da4u: goto label_158da4;
        case 0x158da8u: goto label_158da8;
        case 0x158dacu: goto label_158dac;
        case 0x158db0u: goto label_158db0;
        case 0x158db4u: goto label_158db4;
        case 0x158db8u: goto label_158db8;
        case 0x158dbcu: goto label_158dbc;
        case 0x158dc0u: goto label_158dc0;
        case 0x158dc4u: goto label_158dc4;
        case 0x158dc8u: goto label_158dc8;
        case 0x158dccu: goto label_158dcc;
        case 0x158dd0u: goto label_158dd0;
        case 0x158dd4u: goto label_158dd4;
        case 0x158dd8u: goto label_158dd8;
        case 0x158ddcu: goto label_158ddc;
        case 0x158de0u: goto label_158de0;
        case 0x158de4u: goto label_158de4;
        case 0x158de8u: goto label_158de8;
        case 0x158decu: goto label_158dec;
        case 0x158df0u: goto label_158df0;
        case 0x158df4u: goto label_158df4;
        case 0x158df8u: goto label_158df8;
        case 0x158dfcu: goto label_158dfc;
        case 0x158e00u: goto label_158e00;
        case 0x158e04u: goto label_158e04;
        case 0x158e08u: goto label_158e08;
        case 0x158e0cu: goto label_158e0c;
        case 0x158e10u: goto label_158e10;
        case 0x158e14u: goto label_158e14;
        case 0x158e18u: goto label_158e18;
        case 0x158e1cu: goto label_158e1c;
        case 0x158e20u: goto label_158e20;
        case 0x158e24u: goto label_158e24;
        case 0x158e28u: goto label_158e28;
        case 0x158e2cu: goto label_158e2c;
        case 0x158e30u: goto label_158e30;
        case 0x158e34u: goto label_158e34;
        case 0x158e38u: goto label_158e38;
        case 0x158e3cu: goto label_158e3c;
        case 0x158e40u: goto label_158e40;
        case 0x158e44u: goto label_158e44;
        case 0x158e48u: goto label_158e48;
        case 0x158e4cu: goto label_158e4c;
        case 0x158e50u: goto label_158e50;
        case 0x158e54u: goto label_158e54;
        case 0x158e58u: goto label_158e58;
        case 0x158e5cu: goto label_158e5c;
        case 0x158e60u: goto label_158e60;
        case 0x158e64u: goto label_158e64;
        case 0x158e68u: goto label_158e68;
        case 0x158e6cu: goto label_158e6c;
        case 0x158e70u: goto label_158e70;
        case 0x158e74u: goto label_158e74;
        case 0x158e78u: goto label_158e78;
        case 0x158e7cu: goto label_158e7c;
        case 0x158e80u: goto label_158e80;
        case 0x158e84u: goto label_158e84;
        case 0x158e88u: goto label_158e88;
        case 0x158e8cu: goto label_158e8c;
        case 0x158e90u: goto label_158e90;
        case 0x158e94u: goto label_158e94;
        case 0x158e98u: goto label_158e98;
        case 0x158e9cu: goto label_158e9c;
        case 0x158ea0u: goto label_158ea0;
        case 0x158ea4u: goto label_158ea4;
        case 0x158ea8u: goto label_158ea8;
        case 0x158eacu: goto label_158eac;
        case 0x158eb0u: goto label_158eb0;
        case 0x158eb4u: goto label_158eb4;
        case 0x158eb8u: goto label_158eb8;
        case 0x158ebcu: goto label_158ebc;
        case 0x158ec0u: goto label_158ec0;
        case 0x158ec4u: goto label_158ec4;
        case 0x158ec8u: goto label_158ec8;
        case 0x158eccu: goto label_158ecc;
        case 0x158ed0u: goto label_158ed0;
        case 0x158ed4u: goto label_158ed4;
        case 0x158ed8u: goto label_158ed8;
        case 0x158edcu: goto label_158edc;
        case 0x158ee0u: goto label_158ee0;
        case 0x158ee4u: goto label_158ee4;
        case 0x158ee8u: goto label_158ee8;
        case 0x158eecu: goto label_158eec;
        case 0x158ef0u: goto label_158ef0;
        case 0x158ef4u: goto label_158ef4;
        case 0x158ef8u: goto label_158ef8;
        case 0x158efcu: goto label_158efc;
        case 0x158f00u: goto label_158f00;
        case 0x158f04u: goto label_158f04;
        case 0x158f08u: goto label_158f08;
        case 0x158f0cu: goto label_158f0c;
        case 0x158f10u: goto label_158f10;
        case 0x158f14u: goto label_158f14;
        case 0x158f18u: goto label_158f18;
        case 0x158f1cu: goto label_158f1c;
        case 0x158f20u: goto label_158f20;
        case 0x158f24u: goto label_158f24;
        case 0x158f28u: goto label_158f28;
        case 0x158f2cu: goto label_158f2c;
        case 0x158f30u: goto label_158f30;
        case 0x158f34u: goto label_158f34;
        case 0x158f38u: goto label_158f38;
        case 0x158f3cu: goto label_158f3c;
        case 0x158f40u: goto label_158f40;
        case 0x158f44u: goto label_158f44;
        case 0x158f48u: goto label_158f48;
        case 0x158f4cu: goto label_158f4c;
        case 0x158f50u: goto label_158f50;
        case 0x158f54u: goto label_158f54;
        case 0x158f58u: goto label_158f58;
        case 0x158f5cu: goto label_158f5c;
        case 0x158f60u: goto label_158f60;
        case 0x158f64u: goto label_158f64;
        case 0x158f68u: goto label_158f68;
        case 0x158f6cu: goto label_158f6c;
        case 0x158f70u: goto label_158f70;
        case 0x158f74u: goto label_158f74;
        case 0x158f78u: goto label_158f78;
        case 0x158f7cu: goto label_158f7c;
        case 0x158f80u: goto label_158f80;
        case 0x158f84u: goto label_158f84;
        case 0x158f88u: goto label_158f88;
        case 0x158f8cu: goto label_158f8c;
        case 0x158f90u: goto label_158f90;
        case 0x158f94u: goto label_158f94;
        default: break;
    }

    ctx->pc = 0x158d90u;

label_158d90:
    // 0x158d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x158d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_158d94:
    // 0x158d94: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x158d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_158d98:
    // 0x158d98: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x158d98u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_158d9c:
    // 0x158d9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x158d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_158da0:
    // 0x158da0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_158da4:
    // 0x158da4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x158da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158da8:
    // 0x158da8: 0x8e828620  lw          $v0, -0x79E0($s4)
    ctx->pc = 0x158da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936096)));
label_158dac:
    // 0x158dac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x158dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158db0:
    // 0x158db0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x158db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_158db4:
    // 0x158db4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x158db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_158db8:
    // 0x158db8: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_158dbc:
    if (ctx->pc == 0x158DBCu) {
        ctx->pc = 0x158DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DB8u;
        // 0x158dbc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DC0u;
        goto label_158dc0;
    }
    ctx->pc = 0x158DB8u;
    {
        const bool branch_taken_0x158db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DB8u;
        // 0x158dbc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158db8) {
            ctx->pc = 0x158F6Cu;
            goto label_158f6c;
        }
    }
    ctx->pc = 0x158DC0u;
label_158dc0:
    // 0x158dc0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x158dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_158dc4:
    // 0x158dc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x158dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_158dc8:
    // 0x158dc8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x158dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158dcc:
    // 0x158dcc: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x158dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_158dd0:
    // 0x158dd0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x158dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_158dd4:
    // 0x158dd4: 0x40f809  jalr        $v0
label_158dd8:
    if (ctx->pc == 0x158DD8u) {
        ctx->pc = 0x158DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DD4u;
        // 0x158dd8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DDCu;
        goto label_158ddc;
    }
    ctx->pc = 0x158DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158DDCu);
        ctx->pc = 0x158DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DD4u;
        // 0x158dd8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158DD4u, 0x158DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158DDCu;
label_158ddc:
    // 0x158ddc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x158ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_158de0:
    // 0x158de0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x158de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_158de4:
    // 0x158de4: 0x40f809  jalr        $v0
label_158de8:
    if (ctx->pc == 0x158DE8u) {
        ctx->pc = 0x158DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DE4u;
        // 0x158de8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DECu;
        goto label_158dec;
    }
    ctx->pc = 0x158DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158DECu);
        ctx->pc = 0x158DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DE4u;
        // 0x158de8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158DE4u, 0x158DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158DECu;
label_158dec:
    // 0x158dec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x158decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_158df0:
    // 0x158df0: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x158df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_158df4:
    // 0x158df4: 0x40f809  jalr        $v0
label_158df8:
    if (ctx->pc == 0x158DF8u) {
        ctx->pc = 0x158DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DF4u;
        // 0x158df8: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DFCu;
        goto label_158dfc;
    }
    ctx->pc = 0x158DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158DFCu);
        ctx->pc = 0x158DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DF4u;
        // 0x158df8: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158DF4u, 0x158DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158DFCu;
label_158dfc:
    // 0x158dfc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158e00:
    // 0x158e00: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x158e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_158e04:
    // 0x158e04: 0x40f809  jalr        $v0
label_158e08:
    if (ctx->pc == 0x158E08u) {
        ctx->pc = 0x158E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E04u;
        // 0x158e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E0Cu;
        goto label_158e0c;
    }
    ctx->pc = 0x158E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E0Cu);
        ctx->pc = 0x158E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E04u;
        // 0x158e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E04u, 0x158E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E0Cu;
label_158e0c:
    // 0x158e0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158e10:
    // 0x158e10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x158e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158e14:
    // 0x158e14: 0x40f809  jalr        $v0
label_158e18:
    if (ctx->pc == 0x158E18u) {
        ctx->pc = 0x158E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E14u;
        // 0x158e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E1Cu;
        goto label_158e1c;
    }
    ctx->pc = 0x158E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E1Cu);
        ctx->pc = 0x158E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E14u;
        // 0x158e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E14u, 0x158E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E1Cu;
label_158e1c:
    // 0x158e1c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158e20:
    // 0x158e20: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x158e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_158e24:
    // 0x158e24: 0x40f809  jalr        $v0
label_158e28:
    if (ctx->pc == 0x158E28u) {
        ctx->pc = 0x158E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E24u;
        // 0x158e28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E2Cu;
        goto label_158e2c;
    }
    ctx->pc = 0x158E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E2Cu);
        ctx->pc = 0x158E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E24u;
        // 0x158e28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E24u, 0x158E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E2Cu;
label_158e2c:
    // 0x158e2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158e30:
    // 0x158e30: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x158e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_158e34:
    // 0x158e34: 0x40f809  jalr        $v0
label_158e38:
    if (ctx->pc == 0x158E38u) {
        ctx->pc = 0x158E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E34u;
        // 0x158e38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E3Cu;
        goto label_158e3c;
    }
    ctx->pc = 0x158E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E3Cu);
        ctx->pc = 0x158E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E34u;
        // 0x158e38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E34u, 0x158E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E3Cu;
label_158e3c:
    // 0x158e3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158e40:
    // 0x158e40: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x158e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_158e44:
    // 0x158e44: 0x40f809  jalr        $v0
label_158e48:
    if (ctx->pc == 0x158E48u) {
        ctx->pc = 0x158E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E44u;
        // 0x158e48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E4Cu;
        goto label_158e4c;
    }
    ctx->pc = 0x158E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E4Cu);
        ctx->pc = 0x158E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E44u;
        // 0x158e48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E44u, 0x158E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E4Cu;
label_158e4c:
    // 0x158e4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158e50:
    // 0x158e50: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x158e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_158e54:
    // 0x158e54: 0x40f809  jalr        $v0
label_158e58:
    if (ctx->pc == 0x158E58u) {
        ctx->pc = 0x158E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E54u;
        // 0x158e58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E5Cu;
        goto label_158e5c;
    }
    ctx->pc = 0x158E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E5Cu);
        ctx->pc = 0x158E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E54u;
        // 0x158e58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E54u, 0x158E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E5Cu;
label_158e5c:
    // 0x158e5c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x158e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_158e60:
    // 0x158e60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x158e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158e64:
    // 0x158e64: 0xc08c4aa  jal         func_2312A8
label_158e68:
    if (ctx->pc == 0x158E68u) {
        ctx->pc = 0x158E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E64u;
        // 0x158e68: 0x34a500a1  ori         $a1, $a1, 0xA1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)161);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E6Cu;
        goto label_158e6c;
    }
    ctx->pc = 0x158E64u;
    SET_GPR_U32(ctx, 31, 0x158E6Cu);
    ctx->pc = 0x158E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E64u;
    // 0x158e68: 0x34a500a1  ori         $a1, $a1, 0xA1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)161);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x158E64u, 0x158E6Cu)) {
        return;
    }
    ctx->pc = 0x158E6Cu;
label_158e6c:
    // 0x158e6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158e70:
    // 0x158e70: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x158e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_158e74:
    // 0x158e74: 0x40f809  jalr        $v0
label_158e78:
    if (ctx->pc == 0x158E78u) {
        ctx->pc = 0x158E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E74u;
        // 0x158e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E7Cu;
        goto label_158e7c;
    }
    ctx->pc = 0x158E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E7Cu);
        ctx->pc = 0x158E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E74u;
        // 0x158e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E74u, 0x158E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E7Cu;
label_158e7c:
    // 0x158e7c: 0x8e908620  lw          $s0, -0x79E0($s4)
    ctx->pc = 0x158e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936096)));
label_158e80:
    // 0x158e80: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_158e84:
    if (ctx->pc == 0x158E84u) {
        ctx->pc = 0x158E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E80u;
        // 0x158e84: 0x26300fd8  addiu       $s0, $s1, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E88u;
        goto label_158e88;
    }
    ctx->pc = 0x158E80u;
    {
        const bool branch_taken_0x158e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e80) {
            ctx->pc = 0x158E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E80u;
            // 0x158e84: 0x26300fd8  addiu       $s0, $s1, 0xFD8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158EACu;
            goto label_158eac;
        }
    }
    ctx->pc = 0x158E88u;
label_158e88:
    // 0x158e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158e8c:
    // 0x158e8c: 0x0  nop
    ctx->pc = 0x158e8cu;
    // NOP
label_158e90:
    // 0x158e90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_158e94:
    // 0x158e94: 0xc0562ec  jal         func_158BB0
label_158e98:
    if (ctx->pc == 0x158E98u) {
        ctx->pc = 0x158E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E94u;
        // 0x158e98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E9Cu;
        goto label_158e9c;
    }
    ctx->pc = 0x158E94u;
    SET_GPR_U32(ctx, 31, 0x158E9Cu);
    ctx->pc = 0x158E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E94u;
    // 0x158e98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158BB0u, 0x158E94u, 0x158E9Cu)) {
        return;
    }
    ctx->pc = 0x158E9Cu;
label_158e9c:
    // 0x158e9c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x158e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158ea0:
    // 0x158ea0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_158ea4:
    if (ctx->pc == 0x158EA4u) {
        ctx->pc = 0x158EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EA0u;
        // 0x158ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EA8u;
        goto label_158ea8;
    }
    ctx->pc = 0x158EA0u;
    {
        const bool branch_taken_0x158ea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x158EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EA0u;
        // 0x158ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ea0) {
            ctx->pc = 0x158E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158e90;
        }
    }
    ctx->pc = 0x158EA8u;
label_158ea8:
    // 0x158ea8: 0x26300fd8  addiu       $s0, $s1, 0xFD8
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
label_158eac:
    // 0x158eac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x158eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_158eb0:
    // 0x158eb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158eb4:
    // 0x158eb4: 0x40f809  jalr        $v0
label_158eb8:
    if (ctx->pc == 0x158EB8u) {
        ctx->pc = 0x158EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EB4u;
        // 0x158eb8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EBCu;
        goto label_158ebc;
    }
    ctx->pc = 0x158EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158EBCu);
        ctx->pc = 0x158EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EB4u;
        // 0x158eb8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158EB4u, 0x158EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158EBCu;
label_158ebc:
    // 0x158ebc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158ec0:
    // 0x158ec0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_158ec4:
    // 0x158ec4: 0x40f809  jalr        $v0
label_158ec8:
    if (ctx->pc == 0x158EC8u) {
        ctx->pc = 0x158EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EC4u;
        // 0x158ec8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158ECCu;
        goto label_158ecc;
    }
    ctx->pc = 0x158EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158ECCu);
        ctx->pc = 0x158EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EC4u;
        // 0x158ec8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158EC4u, 0x158ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158ECCu;
label_158ecc:
    // 0x158ecc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158ed0:
    // 0x158ed0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x158ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_158ed4:
    // 0x158ed4: 0x40f809  jalr        $v0
label_158ed8:
    if (ctx->pc == 0x158ED8u) {
        ctx->pc = 0x158ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ED4u;
        // 0x158ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EDCu;
        goto label_158edc;
    }
    ctx->pc = 0x158ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158EDCu);
        ctx->pc = 0x158ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ED4u;
        // 0x158ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158ED4u, 0x158EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158EDCu;
label_158edc:
    // 0x158edc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x158edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_158ee0:
    // 0x158ee0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_158ee4:
    if (ctx->pc == 0x158EE4u) {
        ctx->pc = 0x158EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EE0u;
        // 0x158ee4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EE8u;
        goto label_158ee8;
    }
    ctx->pc = 0x158EE0u;
    {
        const bool branch_taken_0x158ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EE0u;
        // 0x158ee4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ee0) {
            ctx->pc = 0x158EFCu;
            goto label_158efc;
        }
    }
    ctx->pc = 0x158EE8u;
label_158ee8:
    // 0x158ee8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158eec:
    // 0x158eec: 0x40f809  jalr        $v0
label_158ef0:
    if (ctx->pc == 0x158EF0u) {
        ctx->pc = 0x158EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EECu;
        // 0x158ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EF4u;
        goto label_158ef4;
    }
    ctx->pc = 0x158EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158EF4u);
        ctx->pc = 0x158EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EECu;
        // 0x158ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158EECu, 0x158EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158EF4u;
label_158ef4:
    // 0x158ef4: 0x10000005  b           . + 4 + (0x5 << 2)
label_158ef8:
    if (ctx->pc == 0x158EF8u) {
        ctx->pc = 0x158EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF4u;
        // 0x158ef8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EFCu;
        goto label_158efc;
    }
    ctx->pc = 0x158EF4u;
    {
        const bool branch_taken_0x158ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF4u;
        // 0x158ef8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ef4) {
            ctx->pc = 0x158F0Cu;
            goto label_158f0c;
        }
    }
    ctx->pc = 0x158EFCu;
label_158efc:
    // 0x158efc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158f00:
    // 0x158f00: 0x40f809  jalr        $v0
label_158f04:
    if (ctx->pc == 0x158F04u) {
        ctx->pc = 0x158F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F00u;
        // 0x158f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F08u;
        goto label_158f08;
    }
    ctx->pc = 0x158F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158F08u);
        ctx->pc = 0x158F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F00u;
        // 0x158f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F00u, 0x158F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158F08u;
label_158f08:
    // 0x158f08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x158f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_158f0c:
    // 0x158f0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_158f10:
    if (ctx->pc == 0x158F10u) {
        ctx->pc = 0x158F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F0Cu;
        // 0x158f10: 0x26230fd8  addiu       $v1, $s1, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F14u;
        goto label_158f14;
    }
    ctx->pc = 0x158F0Cu;
    {
        const bool branch_taken_0x158f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F0Cu;
        // 0x158f10: 0x26230fd8  addiu       $v1, $s1, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f0c) {
            ctx->pc = 0x158F2Cu;
            goto label_158f2c;
        }
    }
    ctx->pc = 0x158F14u;
label_158f14:
    // 0x158f14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x158f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158f18:
    // 0x158f18: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x158f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_158f1c:
    // 0x158f1c: 0x40f809  jalr        $v0
label_158f20:
    if (ctx->pc == 0x158F20u) {
        ctx->pc = 0x158F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F1Cu;
        // 0x158f20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F24u;
        goto label_158f24;
    }
    ctx->pc = 0x158F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158F24u);
        ctx->pc = 0x158F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F1Cu;
        // 0x158f20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F1Cu, 0x158F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158F24u;
label_158f24:
    // 0x158f24: 0x10000006  b           . + 4 + (0x6 << 2)
label_158f28:
    if (ctx->pc == 0x158F28u) {
        ctx->pc = 0x158F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F24u;
        // 0x158f28: 0x26300fd8  addiu       $s0, $s1, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F2Cu;
        goto label_158f2c;
    }
    ctx->pc = 0x158F24u;
    {
        const bool branch_taken_0x158f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F24u;
        // 0x158f28: 0x26300fd8  addiu       $s0, $s1, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f24) {
            ctx->pc = 0x158F40u;
            goto label_158f40;
        }
    }
    ctx->pc = 0x158F2Cu;
label_158f2c:
    // 0x158f2c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x158f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158f30:
    // 0x158f30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x158f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_158f34:
    // 0x158f34: 0x40f809  jalr        $v0
label_158f38:
    if (ctx->pc == 0x158F38u) {
        ctx->pc = 0x158F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F34u;
        // 0x158f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F3Cu;
        goto label_158f3c;
    }
    ctx->pc = 0x158F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158F3Cu);
        ctx->pc = 0x158F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F34u;
        // 0x158f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F34u, 0x158F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158F3Cu;
label_158f3c:
    // 0x158f3c: 0x26300fd8  addiu       $s0, $s1, 0xFD8
    ctx->pc = 0x158f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
label_158f40:
    // 0x158f40: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x158f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_158f44:
    // 0x158f44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158f48:
    // 0x158f48: 0x40f809  jalr        $v0
label_158f4c:
    if (ctx->pc == 0x158F4Cu) {
        ctx->pc = 0x158F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F48u;
        // 0x158f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F50u;
        goto label_158f50;
    }
    ctx->pc = 0x158F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158F50u);
        ctx->pc = 0x158F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F48u;
        // 0x158f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F48u, 0x158F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158F50u;
label_158f50:
    // 0x158f50: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x158f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_158f54:
    // 0x158f54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x158f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_158f58:
    // 0x158f58: 0x40f809  jalr        $v0
label_158f5c:
    if (ctx->pc == 0x158F5Cu) {
        ctx->pc = 0x158F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F58u;
        // 0x158f5c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F60u;
        goto label_158f60;
    }
    ctx->pc = 0x158F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158F60u);
        ctx->pc = 0x158F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F58u;
        // 0x158f5c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F58u, 0x158F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158F60u;
label_158f60:
    // 0x158f60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x158f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158f64:
    // 0x158f64: 0xc08c4aa  jal         func_2312A8
label_158f68:
    if (ctx->pc == 0x158F68u) {
        ctx->pc = 0x158F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F64u;
        // 0x158f68: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F6Cu;
        goto label_158f6c;
    }
    ctx->pc = 0x158F64u;
    SET_GPR_U32(ctx, 31, 0x158F6Cu);
    ctx->pc = 0x158F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F64u;
    // 0x158f68: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x158F64u, 0x158F6Cu)) {
        return;
    }
    ctx->pc = 0x158F6Cu;
label_158f6c:
    // 0x158f6c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x158f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_158f70:
    // 0x158f70: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x158f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_158f74:
    // 0x158f74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x158f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_158f78:
    // 0x158f78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158f78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_158f7c:
    // 0x158f7c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x158f7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_158f80:
    // 0x158f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158f84:
    // 0x158f84: 0x3e00008  jr          $ra
label_158f88:
    if (ctx->pc == 0x158F88u) {
        ctx->pc = 0x158F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F84u;
        // 0x158f88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F8Cu;
        goto label_158f8c;
    }
    ctx->pc = 0x158F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F84u;
        // 0x158f88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158F8Cu;
label_158f8c:
    // 0x158f8c: 0x0  nop
    ctx->pc = 0x158f8cu;
    // NOP
label_158f90:
    // 0x158f90: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x158f90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_158f94:
    // 0x158f94: 0x0  nop
    ctx->pc = 0x158f94u;
    // NOP
    ctx->pc = 0x158f98u;
}
