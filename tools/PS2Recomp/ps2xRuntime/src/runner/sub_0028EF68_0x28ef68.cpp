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

// Function: sub_0028EF68
// Address: 0x28ef68 - 0x28f030
void sub_0028EF68_0x28ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF68_0x28ef68");
#endif

    switch (ctx->pc) {
        case 0x28ef68u: goto label_28ef68;
        case 0x28ef6cu: goto label_28ef6c;
        case 0x28ef70u: goto label_28ef70;
        case 0x28ef74u: goto label_28ef74;
        case 0x28ef78u: goto label_28ef78;
        case 0x28ef7cu: goto label_28ef7c;
        case 0x28ef80u: goto label_28ef80;
        case 0x28ef84u: goto label_28ef84;
        case 0x28ef88u: goto label_28ef88;
        case 0x28ef8cu: goto label_28ef8c;
        case 0x28ef90u: goto label_28ef90;
        case 0x28ef94u: goto label_28ef94;
        case 0x28ef98u: goto label_28ef98;
        case 0x28ef9cu: goto label_28ef9c;
        case 0x28efa0u: goto label_28efa0;
        case 0x28efa4u: goto label_28efa4;
        case 0x28efa8u: goto label_28efa8;
        case 0x28efacu: goto label_28efac;
        case 0x28efb0u: goto label_28efb0;
        case 0x28efb4u: goto label_28efb4;
        case 0x28efb8u: goto label_28efb8;
        case 0x28efbcu: goto label_28efbc;
        case 0x28efc0u: goto label_28efc0;
        case 0x28efc4u: goto label_28efc4;
        case 0x28efc8u: goto label_28efc8;
        case 0x28efccu: goto label_28efcc;
        case 0x28efd0u: goto label_28efd0;
        case 0x28efd4u: goto label_28efd4;
        case 0x28efd8u: goto label_28efd8;
        case 0x28efdcu: goto label_28efdc;
        case 0x28efe0u: goto label_28efe0;
        case 0x28efe4u: goto label_28efe4;
        case 0x28efe8u: goto label_28efe8;
        case 0x28efecu: goto label_28efec;
        case 0x28eff0u: goto label_28eff0;
        case 0x28eff4u: goto label_28eff4;
        case 0x28eff8u: goto label_28eff8;
        case 0x28effcu: goto label_28effc;
        case 0x28f000u: goto label_28f000;
        case 0x28f004u: goto label_28f004;
        case 0x28f008u: goto label_28f008;
        case 0x28f00cu: goto label_28f00c;
        case 0x28f010u: goto label_28f010;
        case 0x28f014u: goto label_28f014;
        case 0x28f018u: goto label_28f018;
        case 0x28f01cu: goto label_28f01c;
        case 0x28f020u: goto label_28f020;
        case 0x28f024u: goto label_28f024;
        case 0x28f028u: goto label_28f028;
        case 0x28f02cu: goto label_28f02c;
        default: break;
    }

    ctx->pc = 0x28ef68u;

label_28ef68:
    // 0x28ef68: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_28ef6c:
    // 0x28ef6c: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x28ef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_28ef70:
    // 0x28ef70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28ef74:
    // 0x28ef74: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x28ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_28ef78:
    // 0x28ef78: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28ef78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28ef7c:
    // 0x28ef7c: 0x8cc468b0  lw          $a0, 0x68B0($a2)
    ctx->pc = 0x28ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 26800)));
label_28ef80:
    // 0x28ef80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28ef84:
    // 0x28ef84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28ef88:
    // 0x28ef88: 0x40f809  jalr        $v0
label_28ef8c:
    if (ctx->pc == 0x28EF8Cu) {
        ctx->pc = 0x28EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF88u;
        // 0x28ef8c: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF90u;
        goto label_28ef90;
    }
    ctx->pc = 0x28EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EF90u);
        ctx->pc = 0x28EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF88u;
        // 0x28ef8c: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF88u, 0x28EF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EF90u;
label_28ef90:
    // 0x28ef90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ef90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ef94:
    // 0x28ef94: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28ef98:
    if (ctx->pc == 0x28EF98u) {
        ctx->pc = 0x28EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF94u;
        // 0x28ef98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EF9Cu;
        goto label_28ef9c;
    }
    ctx->pc = 0x28EF94u;
    {
        const bool branch_taken_0x28ef94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF94u;
        // 0x28ef98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef94) {
            ctx->pc = 0x28EFA4u;
            goto label_28efa4;
        }
    }
    ctx->pc = 0x28EF9Cu;
label_28ef9c:
    // 0x28ef9c: 0x10000020  b           . + 4 + (0x20 << 2)
label_28efa0:
    if (ctx->pc == 0x28EFA0u) {
        ctx->pc = 0x28EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF9Cu;
        // 0x28efa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFA4u;
        goto label_28efa4;
    }
    ctx->pc = 0x28EF9Cu;
    {
        const bool branch_taken_0x28ef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF9Cu;
        // 0x28efa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef9c) {
            ctx->pc = 0x28F020u;
            goto label_28f020;
        }
    }
    ctx->pc = 0x28EFA4u;
label_28efa4:
    // 0x28efa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28efa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28efa8:
    // 0x28efa8: 0xc0c493d  jal         func_3124F4
label_28efac:
    if (ctx->pc == 0x28EFACu) {
        ctx->pc = 0x28EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFA8u;
        // 0x28efac: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFB0u;
        goto label_28efb0;
    }
    ctx->pc = 0x28EFA8u;
    SET_GPR_U32(ctx, 31, 0x28EFB0u);
    ctx->pc = 0x28EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFA8u;
    // 0x28efac: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x28EFA8u, 0x28EFB0u)) {
        return;
    }
    ctx->pc = 0x28EFB0u;
label_28efb0:
    // 0x28efb0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_28efb4:
    // 0x28efb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28efb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28efb8:
    // 0x28efb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28efb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28efbc:
    // 0x28efbc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x28efbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28efc0:
    // 0x28efc0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x28efc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28efc4:
    // 0x28efc4: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x28efc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_28efc8:
    // 0x28efc8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x28efc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_28efcc:
    // 0x28efcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28efd0:
    // 0x28efd0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x28efd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_28efd4:
    // 0x28efd4: 0xc0a3c26  jal         func_28F098
label_28efd8:
    if (ctx->pc == 0x28EFD8u) {
        ctx->pc = 0x28EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFD4u;
        // 0x28efd8: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFDCu;
        goto label_28efdc;
    }
    ctx->pc = 0x28EFD4u;
    SET_GPR_U32(ctx, 31, 0x28EFDCu);
    ctx->pc = 0x28EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFD4u;
    // 0x28efd8: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F098u, 0x28EFD4u, 0x28EFDCu)) {
        return;
    }
    ctx->pc = 0x28EFDCu;
label_28efdc:
    // 0x28efdc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28efe0:
    // 0x28efe0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28efe4:
    // 0x28efe4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28efe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28efe8:
    // 0x28efe8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28efe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28efec:
    // 0x28efec: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x28efecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28eff0:
    // 0x28eff0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_28eff4:
    // 0x28eff4: 0xc0a3c7c  jal         func_28F1F0
label_28eff8:
    if (ctx->pc == 0x28EFF8u) {
        ctx->pc = 0x28EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFF4u;
        // 0x28eff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFFCu;
        goto label_28effc;
    }
    ctx->pc = 0x28EFF4u;
    SET_GPR_U32(ctx, 31, 0x28EFFCu);
    ctx->pc = 0x28EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFF4u;
    // 0x28eff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F1F0u, 0x28EFF4u, 0x28EFFCu)) {
        return;
    }
    ctx->pc = 0x28EFFCu;
label_28effc:
    // 0x28effc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f000:
    // 0x28f000: 0xc0a3cb0  jal         func_28F2C0
label_28f004:
    if (ctx->pc == 0x28F004u) {
        ctx->pc = 0x28F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F000u;
        // 0x28f004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F008u;
        goto label_28f008;
    }
    ctx->pc = 0x28F000u;
    SET_GPR_U32(ctx, 31, 0x28F008u);
    ctx->pc = 0x28F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F000u;
    // 0x28f004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F2C0u, 0x28F000u, 0x28F008u)) {
        return;
    }
    ctx->pc = 0x28F008u;
label_28f008:
    // 0x28f008: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_28f00c:
    // 0x28f00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f010:
    // 0x28f010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f014:
    // 0x28f014: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x28f014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_28f018:
    // 0x28f018: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x28f018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_28f01c:
    // 0x28f01c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28f01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f020:
    // 0x28f020: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28f020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28f024:
    // 0x28f024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28f028:
    // 0x28f028: 0x3e00008  jr          $ra
label_28f02c:
    if (ctx->pc == 0x28F02Cu) {
        ctx->pc = 0x28F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F028u;
        // 0x28f02c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F030u;
        goto label_fallthrough_0x28f028;
    }
    ctx->pc = 0x28F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F028u;
        // 0x28f02c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f028:
    ctx->pc = 0x28F030u;
}
