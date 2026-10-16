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

// Function: sub_00211BD0
// Address: 0x211bd0 - 0x211e78
void sub_00211BD0_0x211bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211BD0_0x211bd0");
#endif

    switch (ctx->pc) {
        case 0x211bd0u: goto label_211bd0;
        case 0x211bd4u: goto label_211bd4;
        case 0x211bd8u: goto label_211bd8;
        case 0x211bdcu: goto label_211bdc;
        case 0x211be0u: goto label_211be0;
        case 0x211be4u: goto label_211be4;
        case 0x211be8u: goto label_211be8;
        case 0x211becu: goto label_211bec;
        case 0x211bf0u: goto label_211bf0;
        case 0x211bf4u: goto label_211bf4;
        case 0x211bf8u: goto label_211bf8;
        case 0x211bfcu: goto label_211bfc;
        case 0x211c00u: goto label_211c00;
        case 0x211c04u: goto label_211c04;
        case 0x211c08u: goto label_211c08;
        case 0x211c0cu: goto label_211c0c;
        case 0x211c10u: goto label_211c10;
        case 0x211c14u: goto label_211c14;
        case 0x211c18u: goto label_211c18;
        case 0x211c1cu: goto label_211c1c;
        case 0x211c20u: goto label_211c20;
        case 0x211c24u: goto label_211c24;
        case 0x211c28u: goto label_211c28;
        case 0x211c2cu: goto label_211c2c;
        case 0x211c30u: goto label_211c30;
        case 0x211c34u: goto label_211c34;
        case 0x211c38u: goto label_211c38;
        case 0x211c3cu: goto label_211c3c;
        case 0x211c40u: goto label_211c40;
        case 0x211c44u: goto label_211c44;
        case 0x211c48u: goto label_211c48;
        case 0x211c4cu: goto label_211c4c;
        case 0x211c50u: goto label_211c50;
        case 0x211c54u: goto label_211c54;
        case 0x211c58u: goto label_211c58;
        case 0x211c5cu: goto label_211c5c;
        case 0x211c60u: goto label_211c60;
        case 0x211c64u: goto label_211c64;
        case 0x211c68u: goto label_211c68;
        case 0x211c6cu: goto label_211c6c;
        case 0x211c70u: goto label_211c70;
        case 0x211c74u: goto label_211c74;
        case 0x211c78u: goto label_211c78;
        case 0x211c7cu: goto label_211c7c;
        case 0x211c80u: goto label_211c80;
        case 0x211c84u: goto label_211c84;
        case 0x211c88u: goto label_211c88;
        case 0x211c8cu: goto label_211c8c;
        case 0x211c90u: goto label_211c90;
        case 0x211c94u: goto label_211c94;
        case 0x211c98u: goto label_211c98;
        case 0x211c9cu: goto label_211c9c;
        case 0x211ca0u: goto label_211ca0;
        case 0x211ca4u: goto label_211ca4;
        case 0x211ca8u: goto label_211ca8;
        case 0x211cacu: goto label_211cac;
        case 0x211cb0u: goto label_211cb0;
        case 0x211cb4u: goto label_211cb4;
        case 0x211cb8u: goto label_211cb8;
        case 0x211cbcu: goto label_211cbc;
        case 0x211cc0u: goto label_211cc0;
        case 0x211cc4u: goto label_211cc4;
        case 0x211cc8u: goto label_211cc8;
        case 0x211cccu: goto label_211ccc;
        case 0x211cd0u: goto label_211cd0;
        case 0x211cd4u: goto label_211cd4;
        case 0x211cd8u: goto label_211cd8;
        case 0x211cdcu: goto label_211cdc;
        case 0x211ce0u: goto label_211ce0;
        case 0x211ce4u: goto label_211ce4;
        case 0x211ce8u: goto label_211ce8;
        case 0x211cecu: goto label_211cec;
        case 0x211cf0u: goto label_211cf0;
        case 0x211cf4u: goto label_211cf4;
        case 0x211cf8u: goto label_211cf8;
        case 0x211cfcu: goto label_211cfc;
        case 0x211d00u: goto label_211d00;
        case 0x211d04u: goto label_211d04;
        case 0x211d08u: goto label_211d08;
        case 0x211d0cu: goto label_211d0c;
        case 0x211d10u: goto label_211d10;
        case 0x211d14u: goto label_211d14;
        case 0x211d18u: goto label_211d18;
        case 0x211d1cu: goto label_211d1c;
        case 0x211d20u: goto label_211d20;
        case 0x211d24u: goto label_211d24;
        case 0x211d28u: goto label_211d28;
        case 0x211d2cu: goto label_211d2c;
        case 0x211d30u: goto label_211d30;
        case 0x211d34u: goto label_211d34;
        case 0x211d38u: goto label_211d38;
        case 0x211d3cu: goto label_211d3c;
        case 0x211d40u: goto label_211d40;
        case 0x211d44u: goto label_211d44;
        case 0x211d48u: goto label_211d48;
        case 0x211d4cu: goto label_211d4c;
        case 0x211d50u: goto label_211d50;
        case 0x211d54u: goto label_211d54;
        case 0x211d58u: goto label_211d58;
        case 0x211d5cu: goto label_211d5c;
        case 0x211d60u: goto label_211d60;
        case 0x211d64u: goto label_211d64;
        case 0x211d68u: goto label_211d68;
        case 0x211d6cu: goto label_211d6c;
        case 0x211d70u: goto label_211d70;
        case 0x211d74u: goto label_211d74;
        case 0x211d78u: goto label_211d78;
        case 0x211d7cu: goto label_211d7c;
        case 0x211d80u: goto label_211d80;
        case 0x211d84u: goto label_211d84;
        case 0x211d88u: goto label_211d88;
        case 0x211d8cu: goto label_211d8c;
        case 0x211d90u: goto label_211d90;
        case 0x211d94u: goto label_211d94;
        case 0x211d98u: goto label_211d98;
        case 0x211d9cu: goto label_211d9c;
        case 0x211da0u: goto label_211da0;
        case 0x211da4u: goto label_211da4;
        case 0x211da8u: goto label_211da8;
        case 0x211dacu: goto label_211dac;
        case 0x211db0u: goto label_211db0;
        case 0x211db4u: goto label_211db4;
        case 0x211db8u: goto label_211db8;
        case 0x211dbcu: goto label_211dbc;
        case 0x211dc0u: goto label_211dc0;
        case 0x211dc4u: goto label_211dc4;
        case 0x211dc8u: goto label_211dc8;
        case 0x211dccu: goto label_211dcc;
        case 0x211dd0u: goto label_211dd0;
        case 0x211dd4u: goto label_211dd4;
        case 0x211dd8u: goto label_211dd8;
        case 0x211ddcu: goto label_211ddc;
        case 0x211de0u: goto label_211de0;
        case 0x211de4u: goto label_211de4;
        case 0x211de8u: goto label_211de8;
        case 0x211decu: goto label_211dec;
        case 0x211df0u: goto label_211df0;
        case 0x211df4u: goto label_211df4;
        case 0x211df8u: goto label_211df8;
        case 0x211dfcu: goto label_211dfc;
        case 0x211e00u: goto label_211e00;
        case 0x211e04u: goto label_211e04;
        case 0x211e08u: goto label_211e08;
        case 0x211e0cu: goto label_211e0c;
        case 0x211e10u: goto label_211e10;
        case 0x211e14u: goto label_211e14;
        case 0x211e18u: goto label_211e18;
        case 0x211e1cu: goto label_211e1c;
        case 0x211e20u: goto label_211e20;
        case 0x211e24u: goto label_211e24;
        case 0x211e28u: goto label_211e28;
        case 0x211e2cu: goto label_211e2c;
        case 0x211e30u: goto label_211e30;
        case 0x211e34u: goto label_211e34;
        case 0x211e38u: goto label_211e38;
        case 0x211e3cu: goto label_211e3c;
        case 0x211e40u: goto label_211e40;
        case 0x211e44u: goto label_211e44;
        case 0x211e48u: goto label_211e48;
        case 0x211e4cu: goto label_211e4c;
        case 0x211e50u: goto label_211e50;
        case 0x211e54u: goto label_211e54;
        case 0x211e58u: goto label_211e58;
        case 0x211e5cu: goto label_211e5c;
        case 0x211e60u: goto label_211e60;
        case 0x211e64u: goto label_211e64;
        case 0x211e68u: goto label_211e68;
        case 0x211e6cu: goto label_211e6c;
        case 0x211e70u: goto label_211e70;
        case 0x211e74u: goto label_211e74;
        default: break;
    }

    ctx->pc = 0x211bd0u;

label_211bd0:
    // 0x211bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_211bd4:
    // 0x211bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211bd8:
    // 0x211bd8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x211bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_211bdc:
    // 0x211bdc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x211bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_211be0:
    // 0x211be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_211be4:
    // 0x211be4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x211be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_211be8:
    // 0x211be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_211bec:
    // 0x211bec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211bf0:
    // 0x211bf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211bf4:
    // 0x211bf4: 0x40f809  jalr        $v0
label_211bf8:
    if (ctx->pc == 0x211BF8u) {
        ctx->pc = 0x211BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BF4u;
        // 0x211bf8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BFCu;
        goto label_211bfc;
    }
    ctx->pc = 0x211BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211BFCu);
        ctx->pc = 0x211BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BF4u;
        // 0x211bf8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BF4u, 0x211BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211BFCu;
label_211bfc:
    // 0x211bfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x211bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211c00:
    // 0x211c00: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x211c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_211c04:
    // 0x211c04: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x211c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_211c08:
    // 0x211c08: 0xae1201cc  sw          $s2, 0x1CC($s0)
    ctx->pc = 0x211c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 18));
label_211c0c:
    // 0x211c0c: 0x24421960  addiu       $v0, $v0, 0x1960
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6496));
label_211c10:
    // 0x211c10: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
label_211c14:
    // 0x211c14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x211c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_211c18:
    // 0x211c18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x211c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_211c1c:
    // 0x211c1c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x211c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_211c20:
    // 0x211c20: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x211c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_211c24:
    // 0x211c24: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x211c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_211c28:
    // 0x211c28: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x211c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_211c2c:
    // 0x211c2c: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_211c30:
    if (ctx->pc == 0x211C30u) {
        ctx->pc = 0x211C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C2Cu;
        // 0x211c30: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C34u;
        goto label_211c34;
    }
    ctx->pc = 0x211C2Cu;
    {
        const bool branch_taken_0x211c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x211C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C2Cu;
        // 0x211c30: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c2c) {
            ctx->pc = 0x211C4Cu;
            goto label_211c4c;
        }
    }
    ctx->pc = 0x211C34u;
label_211c34:
    // 0x211c34: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x211c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211c38:
    // 0x211c38: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x211c38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_211c3c:
    // 0x211c3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x211c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211c40:
    // 0x211c40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211c44:
    // 0x211c44: 0x60f809  jalr        $v1
label_211c48:
    if (ctx->pc == 0x211C48u) {
        ctx->pc = 0x211C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C44u;
        // 0x211c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C4Cu;
        goto label_211c4c;
    }
    ctx->pc = 0x211C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x211C4Cu);
        ctx->pc = 0x211C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C44u;
        // 0x211c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C44u, 0x211C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C4Cu;
label_211c4c:
    // 0x211c4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211c50:
    // 0x211c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211c54:
    // 0x211c54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211c58:
    // 0x211c58: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x211c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_211c5c:
    // 0x211c5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211c60:
    // 0x211c60: 0x40f809  jalr        $v0
label_211c64:
    if (ctx->pc == 0x211C64u) {
        ctx->pc = 0x211C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C60u;
        // 0x211c64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C68u;
        goto label_211c68;
    }
    ctx->pc = 0x211C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211C68u);
        ctx->pc = 0x211C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C60u;
        // 0x211c64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C60u, 0x211C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C68u;
label_211c68:
    // 0x211c68: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x211c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_211c6c:
    // 0x211c6c: 0x0  nop
    ctx->pc = 0x211c6cu;
    // NOP
label_211c70:
    // 0x211c70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211c74:
    // 0x211c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211c78:
    // 0x211c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211c7c:
    // 0x211c7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x211c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_211c80:
    // 0x211c80: 0x40f809  jalr        $v0
label_211c84:
    if (ctx->pc == 0x211C84u) {
        ctx->pc = 0x211C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C80u;
        // 0x211c84: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C88u;
        goto label_211c88;
    }
    ctx->pc = 0x211C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211C88u);
        ctx->pc = 0x211C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C80u;
        // 0x211c84: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C80u, 0x211C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211C88u;
label_211c88:
    // 0x211c88: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x211c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_211c8c:
    // 0x211c8c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x211c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_211c90:
    // 0x211c90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211c94:
    // 0x211c94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x211c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_211c98:
    // 0x211c98: 0x2a240020  slti        $a0, $s1, 0x20
    ctx->pc = 0x211c98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_211c9c:
    // 0x211c9c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_211ca0:
    if (ctx->pc == 0x211CA0u) {
        ctx->pc = 0x211CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C9Cu;
        // 0x211ca0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CA4u;
        goto label_211ca4;
    }
    ctx->pc = 0x211C9Cu;
    {
        const bool branch_taken_0x211c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x211CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C9Cu;
        // 0x211ca0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c9c) {
            ctx->pc = 0x211C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211c70;
        }
    }
    ctx->pc = 0x211CA4u;
label_211ca4:
    // 0x211ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211ca8:
    // 0x211ca8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x211ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_211cac:
    // 0x211cac: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_211cb0:
    // 0x211cb0: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
label_211cb4:
    if (ctx->pc == 0x211CB4u) {
        ctx->pc = 0x211CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CB0u;
        // 0x211cb4: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CB8u;
        goto label_211cb8;
    }
    ctx->pc = 0x211CB0u;
    {
        const bool branch_taken_0x211cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211cb0) {
            ctx->pc = 0x211CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211CB0u;
            // 0x211cb4: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211D44u;
            goto label_211d44;
        }
    }
    ctx->pc = 0x211CB8u;
label_211cb8:
    // 0x211cb8: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_211cbc:
    // 0x211cbc: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x211cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_211cc0:
    // 0x211cc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_211cc4:
    if (ctx->pc == 0x211CC4u) {
        ctx->pc = 0x211CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CC0u;
        // 0x211cc4: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CC8u;
        goto label_211cc8;
    }
    ctx->pc = 0x211CC0u;
    {
        const bool branch_taken_0x211cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CC0u;
        // 0x211cc4: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211cc0) {
            ctx->pc = 0x211CECu;
            goto label_211cec;
        }
    }
    ctx->pc = 0x211CC8u;
label_211cc8:
    // 0x211cc8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x211cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211ccc:
    // 0x211ccc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x211cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_211cd0:
    // 0x211cd0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x211cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_211cd4:
    // 0x211cd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x211cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211cd8:
    // 0x211cd8: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x211cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_211cdc:
    // 0x211cdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x211cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211ce0:
    // 0x211ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211ce4:
    // 0x211ce4: 0x40f809  jalr        $v0
label_211ce8:
    if (ctx->pc == 0x211CE8u) {
        ctx->pc = 0x211CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE4u;
        // 0x211ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CECu;
        goto label_211cec;
    }
    ctx->pc = 0x211CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211CECu);
        ctx->pc = 0x211CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE4u;
        // 0x211ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CE4u, 0x211CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211CECu;
label_211cec:
    // 0x211cec: 0x2a220101  slti        $v0, $s1, 0x101
    ctx->pc = 0x211cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
label_211cf0:
    // 0x211cf0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_211cf4:
    if (ctx->pc == 0x211CF4u) {
        ctx->pc = 0x211CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CF0u;
        // 0x211cf4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CF8u;
        goto label_211cf8;
    }
    ctx->pc = 0x211CF0u;
    {
        const bool branch_taken_0x211cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211cf0) {
            ctx->pc = 0x211CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211CF0u;
            // 0x211cf4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211D24u;
            goto label_211d24;
        }
    }
    ctx->pc = 0x211CF8u;
label_211cf8:
    // 0x211cf8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x211cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211cfc:
    // 0x211cfc: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x211cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_211d00:
    // 0x211d00: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_211d04:
    // 0x211d04: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x211d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_211d08:
    // 0x211d08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x211d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211d0c:
    // 0x211d0c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x211d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_211d10:
    // 0x211d10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x211d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211d14:
    // 0x211d14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211d18:
    // 0x211d18: 0x40f809  jalr        $v0
label_211d1c:
    if (ctx->pc == 0x211D1Cu) {
        ctx->pc = 0x211D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D18u;
        // 0x211d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D20u;
        goto label_211d20;
    }
    ctx->pc = 0x211D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211D20u);
        ctx->pc = 0x211D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D18u;
        // 0x211d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D18u, 0x211D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D20u;
label_211d20:
    // 0x211d20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211d24:
    // 0x211d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211d28:
    // 0x211d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211d2c:
    // 0x211d2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_211d30:
    // 0x211d30: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x211d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_211d34:
    // 0x211d34: 0x40f809  jalr        $v0
label_211d38:
    if (ctx->pc == 0x211D38u) {
        ctx->pc = 0x211D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D34u;
        // 0x211d38: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D3Cu;
        goto label_211d3c;
    }
    ctx->pc = 0x211D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211D3Cu);
        ctx->pc = 0x211D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D34u;
        // 0x211d38: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D34u, 0x211D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D3Cu;
label_211d3c:
    // 0x211d3c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x211d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_211d40:
    // 0x211d40: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x211d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
label_211d44:
    // 0x211d44: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x211d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_211d48:
    // 0x211d48: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_211d4c:
    if (ctx->pc == 0x211D4Cu) {
        ctx->pc = 0x211D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D48u;
        // 0x211d4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D50u;
        goto label_211d50;
    }
    ctx->pc = 0x211D48u;
    {
        const bool branch_taken_0x211d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D48u;
        // 0x211d4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d48) {
            ctx->pc = 0x211D54u;
            goto label_211d54;
        }
    }
    ctx->pc = 0x211D50u;
label_211d50:
    // 0x211d50: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x211d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_211d54:
    // 0x211d54: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x211d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_211d58:
    // 0x211d58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x211d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_211d5c:
    // 0x211d5c: 0x54620040  bnel        $v1, $v0, . + 4 + (0x40 << 2)
label_211d60:
    if (ctx->pc == 0x211D60u) {
        ctx->pc = 0x211D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D5Cu;
        // 0x211d60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D64u;
        goto label_211d64;
    }
    ctx->pc = 0x211D5Cu;
    {
        const bool branch_taken_0x211d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211d5c) {
            ctx->pc = 0x211D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211D5Cu;
            // 0x211d60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211E60u;
            goto label_211e60;
        }
    }
    ctx->pc = 0x211D64u;
label_211d64:
    // 0x211d64: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x211d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_211d68:
    // 0x211d68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x211d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_211d6c:
    // 0x211d6c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211d70:
    // 0x211d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211d74:
    // 0x211d74: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x211d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_211d78:
    // 0x211d78: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x211d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_211d7c:
    // 0x211d7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x211d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_211d80:
    // 0x211d80: 0x3012  mflo        $a2
    ctx->pc = 0x211d80u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_211d84:
    // 0x211d84: 0x40f809  jalr        $v0
label_211d88:
    if (ctx->pc == 0x211D88u) {
        ctx->pc = 0x211D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D84u;
        // 0x211d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D8Cu;
        goto label_211d8c;
    }
    ctx->pc = 0x211D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211D8Cu);
        ctx->pc = 0x211D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D84u;
        // 0x211d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D84u, 0x211D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D8Cu;
label_211d8c:
    // 0x211d8c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x211d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_211d90:
    // 0x211d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211d94:
    // 0x211d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211d98:
    // 0x211d98: 0x240607fc  addiu       $a2, $zero, 0x7FC
    ctx->pc = 0x211d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
label_211d9c:
    // 0x211d9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211da0:
    // 0x211da0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211da4:
    // 0x211da4: 0x40f809  jalr        $v0
label_211da8:
    if (ctx->pc == 0x211DA8u) {
        ctx->pc = 0x211DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DA4u;
        // 0x211da8: 0x8e1001cc  lw          $s0, 0x1CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DACu;
        goto label_211dac;
    }
    ctx->pc = 0x211DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211DACu);
        ctx->pc = 0x211DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DA4u;
        // 0x211da8: 0x8e1001cc  lw          $s0, 0x1CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DA4u, 0x211DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211DACu;
label_211dac:
    // 0x211dac: 0x244803fc  addiu       $t0, $v0, 0x3FC
    ctx->pc = 0x211dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1020));
label_211db0:
    // 0x211db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x211db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211db4:
    // 0x211db4: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x211db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
label_211db8:
    // 0x211db8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x211db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_211dbc:
    // 0x211dbc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x211dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_211dc0:
    // 0x211dc0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x211dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_211dc4:
    // 0x211dc4: 0x0  nop
    ctx->pc = 0x211dc4u;
    // NOP
label_211dc8:
    // 0x211dc8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x211dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_211dcc:
    // 0x211dcc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x211dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_211dd0:
    // 0x211dd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x211dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_211dd4:
    // 0x211dd4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x211dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_211dd8:
    // 0x211dd8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x211dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_211ddc:
    // 0x211ddc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x211ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_211de0:
    // 0x211de0: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_211de4:
    if (ctx->pc == 0x211DE4u) {
        ctx->pc = 0x211DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DE0u;
        // 0x211de4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DE8u;
        goto label_211de8;
    }
    ctx->pc = 0x211DE0u;
    {
        const bool branch_taken_0x211de0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x211DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DE0u;
        // 0x211de4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211de0) {
            ctx->pc = 0x211DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211dc8;
        }
    }
    ctx->pc = 0x211DE8u;
label_211de8:
    // 0x211de8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x211de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_211dec:
    // 0x211dec: 0x2506ffc0  addiu       $a2, $t0, -0x40
    ctx->pc = 0x211decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
label_211df0:
    // 0x211df0: 0x25040040  addiu       $a0, $t0, 0x40
    ctx->pc = 0x211df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_211df4:
    // 0x211df4: 0x0  nop
    ctx->pc = 0x211df4u;
    // NOP
label_211df8:
    // 0x211df8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x211df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_211dfc:
    // 0x211dfc: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x211dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_211e00:
    // 0x211e00: 0x71023  negu        $v0, $a3
    ctx->pc = 0x211e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_211e04:
    // 0x211e04: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x211e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_211e08:
    // 0x211e08: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x211e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_211e0c:
    // 0x211e0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_211e10:
    // 0x211e10: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x211e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_211e14:
    // 0x211e14: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x211e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_211e18:
    // 0x211e18: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x211e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
label_211e1c:
    // 0x211e1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_211e20:
    if (ctx->pc == 0x211E20u) {
        ctx->pc = 0x211E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E1Cu;
        // 0x211e20: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E24u;
        goto label_211e24;
    }
    ctx->pc = 0x211E1Cu;
    {
        const bool branch_taken_0x211e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E1Cu;
        // 0x211e20: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e1c) {
            ctx->pc = 0x211DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211df8;
        }
    }
    ctx->pc = 0x211E24u;
label_211e24:
    // 0x211e24: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x211e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_211e28:
    // 0x211e28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_211e2c:
    if (ctx->pc == 0x211E2Cu) {
        ctx->pc = 0x211E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E28u;
        // 0x211e2c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E30u;
        goto label_211e30;
    }
    ctx->pc = 0x211E28u;
    {
        const bool branch_taken_0x211e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E28u;
        // 0x211e2c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e28) {
            ctx->pc = 0x211E5Cu;
            goto label_211e5c;
        }
    }
    ctx->pc = 0x211E30u;
label_211e30:
    // 0x211e30: 0x73023  negu        $a2, $a3
    ctx->pc = 0x211e30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_211e34:
    // 0x211e34: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x211e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_211e38:
    // 0x211e38: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x211e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_211e3c:
    // 0x211e3c: 0x0  nop
    ctx->pc = 0x211e3cu;
    // NOP
label_211e40:
    // 0x211e40: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x211e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_211e44:
    // 0x211e44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x211e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_211e48:
    // 0x211e48: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x211e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_211e4c:
    // 0x211e4c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x211e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_211e50:
    // 0x211e50: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x211e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_211e54:
    // 0x211e54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_211e58:
    if (ctx->pc == 0x211E58u) {
        ctx->pc = 0x211E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E54u;
        // 0x211e58: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E5Cu;
        goto label_211e5c;
    }
    ctx->pc = 0x211E54u;
    {
        const bool branch_taken_0x211e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E54u;
        // 0x211e58: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e54) {
            ctx->pc = 0x211E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211e40;
        }
    }
    ctx->pc = 0x211E5Cu;
label_211e5c:
    // 0x211e5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x211e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_211e60:
    // 0x211e60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x211e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_211e64:
    // 0x211e64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x211e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_211e68:
    // 0x211e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_211e6c:
    // 0x211e6c: 0x3e00008  jr          $ra
label_211e70:
    if (ctx->pc == 0x211E70u) {
        ctx->pc = 0x211E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E6Cu;
        // 0x211e70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E74u;
        goto label_211e74;
    }
    ctx->pc = 0x211E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E6Cu;
        // 0x211e70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211E74u;
label_211e74:
    // 0x211e74: 0x0  nop
    ctx->pc = 0x211e74u;
    // NOP
    ctx->pc = 0x211e78u;
}
