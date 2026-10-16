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

// Function: sub_001C3D70
// Address: 0x1c3d70 - 0x1c3e68
void sub_001C3D70_0x1c3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3D70_0x1c3d70");
#endif

    switch (ctx->pc) {
        case 0x1c3d70u: goto label_1c3d70;
        case 0x1c3d74u: goto label_1c3d74;
        case 0x1c3d78u: goto label_1c3d78;
        case 0x1c3d7cu: goto label_1c3d7c;
        case 0x1c3d80u: goto label_1c3d80;
        case 0x1c3d84u: goto label_1c3d84;
        case 0x1c3d88u: goto label_1c3d88;
        case 0x1c3d8cu: goto label_1c3d8c;
        case 0x1c3d90u: goto label_1c3d90;
        case 0x1c3d94u: goto label_1c3d94;
        case 0x1c3d98u: goto label_1c3d98;
        case 0x1c3d9cu: goto label_1c3d9c;
        case 0x1c3da0u: goto label_1c3da0;
        case 0x1c3da4u: goto label_1c3da4;
        case 0x1c3da8u: goto label_1c3da8;
        case 0x1c3dacu: goto label_1c3dac;
        case 0x1c3db0u: goto label_1c3db0;
        case 0x1c3db4u: goto label_1c3db4;
        case 0x1c3db8u: goto label_1c3db8;
        case 0x1c3dbcu: goto label_1c3dbc;
        case 0x1c3dc0u: goto label_1c3dc0;
        case 0x1c3dc4u: goto label_1c3dc4;
        case 0x1c3dc8u: goto label_1c3dc8;
        case 0x1c3dccu: goto label_1c3dcc;
        case 0x1c3dd0u: goto label_1c3dd0;
        case 0x1c3dd4u: goto label_1c3dd4;
        case 0x1c3dd8u: goto label_1c3dd8;
        case 0x1c3ddcu: goto label_1c3ddc;
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3de4u: goto label_1c3de4;
        case 0x1c3de8u: goto label_1c3de8;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3df0u: goto label_1c3df0;
        case 0x1c3df4u: goto label_1c3df4;
        case 0x1c3df8u: goto label_1c3df8;
        case 0x1c3dfcu: goto label_1c3dfc;
        case 0x1c3e00u: goto label_1c3e00;
        case 0x1c3e04u: goto label_1c3e04;
        case 0x1c3e08u: goto label_1c3e08;
        case 0x1c3e0cu: goto label_1c3e0c;
        case 0x1c3e10u: goto label_1c3e10;
        case 0x1c3e14u: goto label_1c3e14;
        case 0x1c3e18u: goto label_1c3e18;
        case 0x1c3e1cu: goto label_1c3e1c;
        case 0x1c3e20u: goto label_1c3e20;
        case 0x1c3e24u: goto label_1c3e24;
        case 0x1c3e28u: goto label_1c3e28;
        case 0x1c3e2cu: goto label_1c3e2c;
        case 0x1c3e30u: goto label_1c3e30;
        case 0x1c3e34u: goto label_1c3e34;
        case 0x1c3e38u: goto label_1c3e38;
        case 0x1c3e3cu: goto label_1c3e3c;
        case 0x1c3e40u: goto label_1c3e40;
        case 0x1c3e44u: goto label_1c3e44;
        case 0x1c3e48u: goto label_1c3e48;
        case 0x1c3e4cu: goto label_1c3e4c;
        case 0x1c3e50u: goto label_1c3e50;
        case 0x1c3e54u: goto label_1c3e54;
        case 0x1c3e58u: goto label_1c3e58;
        case 0x1c3e5cu: goto label_1c3e5c;
        case 0x1c3e60u: goto label_1c3e60;
        case 0x1c3e64u: goto label_1c3e64;
        default: break;
    }

    ctx->pc = 0x1c3d70u;

label_1c3d70:
    // 0x1c3d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c3d74:
    // 0x1c3d74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c3d78:
    // 0x1c3d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3d7c:
    // 0x1c3d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3d80:
    // 0x1c3d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c3d84:
    // 0x1c3d84: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c3d88:
    // 0x1c3d88: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x1c3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_1c3d8c:
    // 0x1c3d8c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1c3d90:
    if (ctx->pc == 0x1C3D90u) {
        ctx->pc = 0x1C3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D8Cu;
        // 0x1c3d90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D94u;
        goto label_1c3d94;
    }
    ctx->pc = 0x1C3D8Cu;
    {
        const bool branch_taken_0x1c3d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D8Cu;
        // 0x1c3d90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d8c) {
            ctx->pc = 0x1C3DCCu;
            goto label_1c3dcc;
        }
    }
    ctx->pc = 0x1C3D94u;
label_1c3d94:
    // 0x1c3d94: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c3d98:
    // 0x1c3d98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c3d9c:
    if (ctx->pc == 0x1C3D9Cu) {
        ctx->pc = 0x1C3DA0u;
        goto label_1c3da0;
    }
    ctx->pc = 0x1C3D98u;
    {
        const bool branch_taken_0x1c3d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d98) {
            ctx->pc = 0x1C3DCCu;
            goto label_1c3dcc;
        }
    }
    ctx->pc = 0x1C3DA0u;
label_1c3da0:
    // 0x1c3da0: 0x8e030258  lw          $v1, 0x258($s0)
    ctx->pc = 0x1c3da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1c3da4:
    // 0x1c3da4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1c3da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1c3da8:
    // 0x1c3da8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1c3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1c3dac:
    // 0x1c3dac: 0x40f809  jalr        $v0
label_1c3db0:
    if (ctx->pc == 0x1C3DB0u) {
        ctx->pc = 0x1C3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DACu;
        // 0x1c3db0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DB4u;
        goto label_1c3db4;
    }
    ctx->pc = 0x1C3DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3DB4u);
        ctx->pc = 0x1C3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DACu;
        // 0x1c3db0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3DACu, 0x1C3DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3DB4u;
label_1c3db4:
    // 0x1c3db4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c3db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c3db8:
    // 0x1c3db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3dbc:
    // 0x1c3dbc: 0xc06ca48  jal         func_1B2920
label_1c3dc0:
    if (ctx->pc == 0x1C3DC0u) {
        ctx->pc = 0x1C3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DBCu;
        // 0x1c3dc0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DC4u;
        goto label_1c3dc4;
    }
    ctx->pc = 0x1C3DBCu;
    SET_GPR_U32(ctx, 31, 0x1C3DC4u);
    ctx->pc = 0x1C3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DBCu;
    // 0x1c3dc0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2920u, 0x1C3DBCu, 0x1C3DC4u)) {
        return;
    }
    ctx->pc = 0x1C3DC4u;
label_1c3dc4:
    // 0x1c3dc4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1c3dc8:
    if (ctx->pc == 0x1C3DC8u) {
        ctx->pc = 0x1C3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DC4u;
        // 0x1c3dc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DCCu;
        goto label_1c3dcc;
    }
    ctx->pc = 0x1C3DC4u;
    {
        const bool branch_taken_0x1c3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DC4u;
        // 0x1c3dc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dc4) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3DCCu;
label_1c3dcc:
    // 0x1c3dcc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1c3dd0:
    if (ctx->pc == 0x1C3DD0u) {
        ctx->pc = 0x1C3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DCCu;
        // 0x1c3dd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DD4u;
        goto label_1c3dd4;
    }
    ctx->pc = 0x1C3DCCu;
    {
        const bool branch_taken_0x1c3dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DCCu;
        // 0x1c3dd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dcc) {
            ctx->pc = 0x1C3DF8u;
            goto label_1c3df8;
        }
    }
    ctx->pc = 0x1C3DD4u;
label_1c3dd4:
    // 0x1c3dd4: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1c3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c3dd8:
    // 0x1c3dd8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1c3ddc:
    if (ctx->pc == 0x1C3DDCu) {
        ctx->pc = 0x1C3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DD8u;
        // 0x1c3ddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DE0u;
        goto label_1c3de0;
    }
    ctx->pc = 0x1C3DD8u;
    {
        const bool branch_taken_0x1c3dd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3dd8) {
            ctx->pc = 0x1C3DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3DD8u;
            // 0x1c3ddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3DF8u;
            goto label_1c3df8;
        }
    }
    ctx->pc = 0x1C3DE0u;
label_1c3de0:
    // 0x1c3de0: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1c3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1c3de4:
    // 0x1c3de4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c3de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1c3de8:
    // 0x1c3de8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1c3de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c3dec:
    // 0x1c3dec: 0x60f809  jalr        $v1
label_1c3df0:
    if (ctx->pc == 0x1C3DF0u) {
        ctx->pc = 0x1C3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DECu;
        // 0x1c3df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DF4u;
        goto label_1c3df4;
    }
    ctx->pc = 0x1C3DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3DF4u);
        ctx->pc = 0x1C3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DECu;
        // 0x1c3df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3DECu, 0x1C3DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3DF4u;
label_1c3df4:
    // 0x1c3df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3df8:
    // 0x1c3df8: 0xc06bc48  jal         func_1AF120
label_1c3dfc:
    if (ctx->pc == 0x1C3DFCu) {
        ctx->pc = 0x1C3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DF8u;
        // 0x1c3dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E00u;
        goto label_1c3e00;
    }
    ctx->pc = 0x1C3DF8u;
    SET_GPR_U32(ctx, 31, 0x1C3E00u);
    ctx->pc = 0x1C3DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DF8u;
    // 0x1c3dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF120u, 0x1C3DF8u, 0x1C3E00u)) {
        return;
    }
    ctx->pc = 0x1C3E00u;
label_1c3e00:
    // 0x1c3e00: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c3e04:
    // 0x1c3e04: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1c3e08:
    if (ctx->pc == 0x1C3E08u) {
        ctx->pc = 0x1C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E04u;
        // 0x1c3e08: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E0Cu;
        goto label_1c3e0c;
    }
    ctx->pc = 0x1C3E04u;
    {
        const bool branch_taken_0x1c3e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e04) {
            ctx->pc = 0x1C3E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3E04u;
            // 0x1c3e08: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3E40u;
            goto label_1c3e40;
        }
    }
    ctx->pc = 0x1C3E0Cu;
label_1c3e0c:
    // 0x1c3e0c: 0x8e030258  lw          $v1, 0x258($s0)
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1c3e10:
    // 0x1c3e10: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1c3e14:
    // 0x1c3e14: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1c3e18:
    // 0x1c3e18: 0x40f809  jalr        $v0
label_1c3e1c:
    if (ctx->pc == 0x1C3E1Cu) {
        ctx->pc = 0x1C3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E18u;
        // 0x1c3e1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E20u;
        goto label_1c3e20;
    }
    ctx->pc = 0x1C3E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3E20u);
        ctx->pc = 0x1C3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E18u;
        // 0x1c3e1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E18u, 0x1C3E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3E20u;
label_1c3e20:
    // 0x1c3e20: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c3e24:
    // 0x1c3e24: 0xac620158  sw          $v0, 0x158($v1)
    ctx->pc = 0x1c3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 2));
label_1c3e28:
    // 0x1c3e28: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x1c3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c3e2c:
    // 0x1c3e2c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1c3e30:
    if (ctx->pc == 0x1C3E30u) {
        ctx->pc = 0x1C3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E2Cu;
        // 0x1c3e30: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E34u;
        goto label_1c3e34;
    }
    ctx->pc = 0x1C3E2Cu;
    {
        const bool branch_taken_0x1c3e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e2c) {
            ctx->pc = 0x1C3E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3E2Cu;
            // 0x1c3e30: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3E40u;
            goto label_1c3e40;
        }
    }
    ctx->pc = 0x1C3E34u;
label_1c3e34:
    // 0x1c3e34: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c3e38:
    // 0x1c3e38: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1c3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
label_1c3e3c:
    // 0x1c3e3c: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1c3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1c3e40:
    // 0x1c3e40: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1c3e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c3e44:
    // 0x1c3e44: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1c3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c3e48:
    // 0x1c3e48: 0x60f809  jalr        $v1
label_1c3e4c:
    if (ctx->pc == 0x1C3E4Cu) {
        ctx->pc = 0x1C3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E48u;
        // 0x1c3e4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E50u;
        goto label_1c3e50;
    }
    ctx->pc = 0x1C3E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3E50u);
        ctx->pc = 0x1C3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E48u;
        // 0x1c3e4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E48u, 0x1C3E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3E50u;
label_1c3e50:
    // 0x1c3e50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3e54:
    // 0x1c3e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3e58:
    // 0x1c3e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3e5c:
    // 0x1c3e5c: 0x3e00008  jr          $ra
label_1c3e60:
    if (ctx->pc == 0x1C3E60u) {
        ctx->pc = 0x1C3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E5Cu;
        // 0x1c3e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E64u;
        goto label_1c3e64;
    }
    ctx->pc = 0x1C3E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E5Cu;
        // 0x1c3e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3E64u;
label_1c3e64:
    // 0x1c3e64: 0x0  nop
    ctx->pc = 0x1c3e64u;
    // NOP
    ctx->pc = 0x1c3e68u;
}
