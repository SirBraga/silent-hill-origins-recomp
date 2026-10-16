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

// Function: sub_0020EED0
// Address: 0x20eed0 - 0x20f0a0
void sub_0020EED0_0x20eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EED0_0x20eed0");
#endif

    switch (ctx->pc) {
        case 0x20eed0u: goto label_20eed0;
        case 0x20eed4u: goto label_20eed4;
        case 0x20eed8u: goto label_20eed8;
        case 0x20eedcu: goto label_20eedc;
        case 0x20eee0u: goto label_20eee0;
        case 0x20eee4u: goto label_20eee4;
        case 0x20eee8u: goto label_20eee8;
        case 0x20eeecu: goto label_20eeec;
        case 0x20eef0u: goto label_20eef0;
        case 0x20eef4u: goto label_20eef4;
        case 0x20eef8u: goto label_20eef8;
        case 0x20eefcu: goto label_20eefc;
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef04u: goto label_20ef04;
        case 0x20ef08u: goto label_20ef08;
        case 0x20ef0cu: goto label_20ef0c;
        case 0x20ef10u: goto label_20ef10;
        case 0x20ef14u: goto label_20ef14;
        case 0x20ef18u: goto label_20ef18;
        case 0x20ef1cu: goto label_20ef1c;
        case 0x20ef20u: goto label_20ef20;
        case 0x20ef24u: goto label_20ef24;
        case 0x20ef28u: goto label_20ef28;
        case 0x20ef2cu: goto label_20ef2c;
        case 0x20ef30u: goto label_20ef30;
        case 0x20ef34u: goto label_20ef34;
        case 0x20ef38u: goto label_20ef38;
        case 0x20ef3cu: goto label_20ef3c;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef44u: goto label_20ef44;
        case 0x20ef48u: goto label_20ef48;
        case 0x20ef4cu: goto label_20ef4c;
        case 0x20ef50u: goto label_20ef50;
        case 0x20ef54u: goto label_20ef54;
        case 0x20ef58u: goto label_20ef58;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20ef60u: goto label_20ef60;
        case 0x20ef64u: goto label_20ef64;
        case 0x20ef68u: goto label_20ef68;
        case 0x20ef6cu: goto label_20ef6c;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef74u: goto label_20ef74;
        case 0x20ef78u: goto label_20ef78;
        case 0x20ef7cu: goto label_20ef7c;
        case 0x20ef80u: goto label_20ef80;
        case 0x20ef84u: goto label_20ef84;
        case 0x20ef88u: goto label_20ef88;
        case 0x20ef8cu: goto label_20ef8c;
        case 0x20ef90u: goto label_20ef90;
        case 0x20ef94u: goto label_20ef94;
        case 0x20ef98u: goto label_20ef98;
        case 0x20ef9cu: goto label_20ef9c;
        case 0x20efa0u: goto label_20efa0;
        case 0x20efa4u: goto label_20efa4;
        case 0x20efa8u: goto label_20efa8;
        case 0x20efacu: goto label_20efac;
        case 0x20efb0u: goto label_20efb0;
        case 0x20efb4u: goto label_20efb4;
        case 0x20efb8u: goto label_20efb8;
        case 0x20efbcu: goto label_20efbc;
        case 0x20efc0u: goto label_20efc0;
        case 0x20efc4u: goto label_20efc4;
        case 0x20efc8u: goto label_20efc8;
        case 0x20efccu: goto label_20efcc;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd4u: goto label_20efd4;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efdcu: goto label_20efdc;
        case 0x20efe0u: goto label_20efe0;
        case 0x20efe4u: goto label_20efe4;
        case 0x20efe8u: goto label_20efe8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff0u: goto label_20eff0;
        case 0x20eff4u: goto label_20eff4;
        case 0x20eff8u: goto label_20eff8;
        case 0x20effcu: goto label_20effc;
        case 0x20f000u: goto label_20f000;
        case 0x20f004u: goto label_20f004;
        case 0x20f008u: goto label_20f008;
        case 0x20f00cu: goto label_20f00c;
        case 0x20f010u: goto label_20f010;
        case 0x20f014u: goto label_20f014;
        case 0x20f018u: goto label_20f018;
        case 0x20f01cu: goto label_20f01c;
        case 0x20f020u: goto label_20f020;
        case 0x20f024u: goto label_20f024;
        case 0x20f028u: goto label_20f028;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f030u: goto label_20f030;
        case 0x20f034u: goto label_20f034;
        case 0x20f038u: goto label_20f038;
        case 0x20f03cu: goto label_20f03c;
        case 0x20f040u: goto label_20f040;
        case 0x20f044u: goto label_20f044;
        case 0x20f048u: goto label_20f048;
        case 0x20f04cu: goto label_20f04c;
        case 0x20f050u: goto label_20f050;
        case 0x20f054u: goto label_20f054;
        case 0x20f058u: goto label_20f058;
        case 0x20f05cu: goto label_20f05c;
        case 0x20f060u: goto label_20f060;
        case 0x20f064u: goto label_20f064;
        case 0x20f068u: goto label_20f068;
        case 0x20f06cu: goto label_20f06c;
        case 0x20f070u: goto label_20f070;
        case 0x20f074u: goto label_20f074;
        case 0x20f078u: goto label_20f078;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f080u: goto label_20f080;
        case 0x20f084u: goto label_20f084;
        case 0x20f088u: goto label_20f088;
        case 0x20f08cu: goto label_20f08c;
        case 0x20f090u: goto label_20f090;
        case 0x20f094u: goto label_20f094;
        case 0x20f098u: goto label_20f098;
        case 0x20f09cu: goto label_20f09c;
        default: break;
    }

    ctx->pc = 0x20eed0u;

label_20eed0:
    // 0x20eed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20eed4:
    // 0x20eed4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20eed8:
    // 0x20eed8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20eedc:
    // 0x20eedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20eedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20eee0:
    // 0x20eee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20eee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20eee4:
    // 0x20eee4: 0xc083d2a  jal         func_20F4A8
label_20eee8:
    if (ctx->pc == 0x20EEE8u) {
        ctx->pc = 0x20EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEE4u;
        // 0x20eee8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EEECu;
        goto label_20eeec;
    }
    ctx->pc = 0x20EEE4u;
    SET_GPR_U32(ctx, 31, 0x20EEECu);
    ctx->pc = 0x20EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEE4u;
    // 0x20eee8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F4A8u, 0x20EEE4u, 0x20EEECu)) {
        return;
    }
    ctx->pc = 0x20EEECu;
label_20eeec:
    // 0x20eeec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20eef0:
    // 0x20eef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20eef4:
    // 0x20eef4: 0xc083cfa  jal         func_20F3E8
label_20eef8:
    if (ctx->pc == 0x20EEF8u) {
        ctx->pc = 0x20EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEF4u;
        // 0x20eef8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EEFCu;
        goto label_20eefc;
    }
    ctx->pc = 0x20EEF4u;
    SET_GPR_U32(ctx, 31, 0x20EEFCu);
    ctx->pc = 0x20EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEF4u;
    // 0x20eef8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F3E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F3E8u, 0x20EEF4u, 0x20EEFCu)) {
        return;
    }
    ctx->pc = 0x20EEFCu;
label_20eefc:
    // 0x20eefc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20eefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ef00:
    // 0x20ef00: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_20ef04:
    if (ctx->pc == 0x20EF04u) {
        ctx->pc = 0x20EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF00u;
        // 0x20ef04: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF08u;
        goto label_20ef08;
    }
    ctx->pc = 0x20EF00u;
    {
        const bool branch_taken_0x20ef00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF00u;
        // 0x20ef04: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef00) {
            ctx->pc = 0x20EF38u;
            goto label_20ef38;
        }
    }
    ctx->pc = 0x20EF08u;
label_20ef08:
    // 0x20ef08: 0xc083d2c  jal         func_20F4B0
label_20ef0c:
    if (ctx->pc == 0x20EF0Cu) {
        ctx->pc = 0x20EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF08u;
        // 0x20ef0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF10u;
        goto label_20ef10;
    }
    ctx->pc = 0x20EF08u;
    SET_GPR_U32(ctx, 31, 0x20EF10u);
    ctx->pc = 0x20EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF08u;
    // 0x20ef0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F4B0u, 0x20EF08u, 0x20EF10u)) {
        return;
    }
    ctx->pc = 0x20EF10u;
label_20ef10:
    // 0x20ef10: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ef14:
    // 0x20ef14: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x20ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20ef18:
    // 0x20ef18: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ef1c:
    // 0x20ef1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ef20:
    // 0x20ef20: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x20ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_20ef24:
    // 0x20ef24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ef28:
    // 0x20ef28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ef2c:
    // 0x20ef2c: 0x40f809  jalr        $v0
label_20ef30:
    if (ctx->pc == 0x20EF30u) {
        ctx->pc = 0x20EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF2Cu;
        // 0x20ef30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF34u;
        goto label_20ef34;
    }
    ctx->pc = 0x20EF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EF34u);
        ctx->pc = 0x20EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF2Cu;
        // 0x20ef30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EF2Cu, 0x20EF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EF34u;
label_20ef34:
    // 0x20ef34: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20ef38:
    // 0x20ef38: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_20ef3c:
    // 0x20ef3c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_20ef40:
    // 0x20ef40: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_20ef44:
    // 0x20ef44: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_20ef48:
    // 0x20ef48: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
label_20ef4c:
    // 0x20ef4c: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x20ef4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
label_20ef50:
    // 0x20ef50: 0x3c090021  lui         $t1, 0x21
    ctx->pc = 0x20ef50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)33 << 16));
label_20ef54:
    // 0x20ef54: 0x3c0a0021  lui         $t2, 0x21
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)33 << 16));
label_20ef58:
    // 0x20ef58: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x20ef58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
label_20ef5c:
    // 0x20ef5c: 0x3c0c0021  lui         $t4, 0x21
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)33 << 16));
label_20ef60:
    // 0x20ef60: 0x2442dc68  addiu       $v0, $v0, -0x2398
    ctx->pc = 0x20ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958184));
label_20ef64:
    // 0x20ef64: 0x2463f0a0  addiu       $v1, $v1, -0xF60
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963360));
label_20ef68:
    // 0x20ef68: 0x2484de80  addiu       $a0, $a0, -0x2180
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958720));
label_20ef6c:
    // 0x20ef6c: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x20ef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
label_20ef70:
    // 0x20ef70: 0x24c6f1e0  addiu       $a2, $a2, -0xE20
    ctx->pc = 0x20ef70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963680));
label_20ef74:
    // 0x20ef74: 0x24e7f2b0  addiu       $a3, $a3, -0xD50
    ctx->pc = 0x20ef74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963888));
label_20ef78:
    // 0x20ef78: 0x2508e2e8  addiu       $t0, $t0, -0x1D18
    ctx->pc = 0x20ef78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959848));
label_20ef7c:
    // 0x20ef7c: 0x2529e8c8  addiu       $t1, $t1, -0x1738
    ctx->pc = 0x20ef7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961352));
label_20ef80:
    // 0x20ef80: 0x254aeaf8  addiu       $t2, $t2, -0x1508
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961912));
label_20ef84:
    // 0x20ef84: 0x256bed30  addiu       $t3, $t3, -0x12D0
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294962480));
label_20ef88:
    // 0x20ef88: 0x258cf380  addiu       $t4, $t4, -0xC80
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294964096));
label_20ef8c:
    // 0x20ef8c: 0x3c0d3b9a  lui         $t5, 0x3B9A
    ctx->pc = 0x20ef8cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)15258 << 16));
label_20ef90:
    // 0x20ef90: 0x35adca00  ori         $t5, $t5, 0xCA00
    ctx->pc = 0x20ef90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)51712);
label_20ef94:
    // 0x20ef94: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x20ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_20ef98:
    // 0x20ef98: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x20ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_20ef9c:
    // 0x20ef9c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20efa0:
    // 0x20efa0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20efa4:
    // 0x20efa4: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x20efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_20efa8:
    // 0x20efa8: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x20efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
label_20efac:
    // 0x20efac: 0x26030044  addiu       $v1, $s0, 0x44
    ctx->pc = 0x20efacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_20efb0:
    // 0x20efb0: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x20efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_20efb4:
    // 0x20efb4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x20efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_20efb8:
    // 0x20efb8: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x20efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_20efbc:
    // 0x20efbc: 0xae09001c  sw          $t1, 0x1C($s0)
    ctx->pc = 0x20efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 9));
label_20efc0:
    // 0x20efc0: 0xae0a0020  sw          $t2, 0x20($s0)
    ctx->pc = 0x20efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 10));
label_20efc4:
    // 0x20efc4: 0xae0b0024  sw          $t3, 0x24($s0)
    ctx->pc = 0x20efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 11));
label_20efc8:
    // 0x20efc8: 0xae0c0028  sw          $t4, 0x28($s0)
    ctx->pc = 0x20efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 12));
label_20efcc:
    // 0x20efcc: 0xfe0d0038  sd          $t5, 0x38($s0)
    ctx->pc = 0x20efccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 13));
label_20efd0:
    // 0x20efd0: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x20efd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20efd4:
    // 0x20efd4: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x20efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
label_20efd8:
    // 0x20efd8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20efdc:
    // 0x20efdc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x20efdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_20efe0:
    // 0x20efe0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_20efe4:
    // 0x20efe4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x20efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_20efe8:
    // 0x20efe8: 0x5c1fffb  bgez        $t6, . + 4 + (-0x5 << 2)
label_20efec:
    if (ctx->pc == 0x20EFECu) {
        ctx->pc = 0x20EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFE8u;
        // 0x20efec: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFF0u;
        goto label_20eff0;
    }
    ctx->pc = 0x20EFE8u;
    {
        const bool branch_taken_0x20efe8 = (GPR_S64(ctx, 14) >= 0);
        ctx->pc = 0x20EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFE8u;
        // 0x20efec: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efe8) {
            ctx->pc = 0x20EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20efd8;
        }
    }
    ctx->pc = 0x20EFF0u;
label_20eff0:
    // 0x20eff0: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x20eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_20eff4:
    // 0x20eff4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x20eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_20eff8:
    // 0x20eff8: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x20eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
label_20effc:
    // 0x20effc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x20effcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_20f000:
    // 0x20f000: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x20f000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_20f004:
    // 0x20f004: 0x24845598  addiu       $a0, $a0, 0x5598
    ctx->pc = 0x20f004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21912));
label_20f008:
    // 0x20f008: 0xc0c5402  jal         func_315008
label_20f00c:
    if (ctx->pc == 0x20F00Cu) {
        ctx->pc = 0x20F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F008u;
        // 0x20f00c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F010u;
        goto label_20f010;
    }
    ctx->pc = 0x20F008u;
    SET_GPR_U32(ctx, 31, 0x20F010u);
    ctx->pc = 0x20F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F008u;
    // 0x20f00c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315008u, 0x20F008u, 0x20F010u)) {
        return;
    }
    ctx->pc = 0x20F010u;
label_20f010:
    // 0x20f010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f014:
    // 0x20f014: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_20f018:
    if (ctx->pc == 0x20F018u) {
        ctx->pc = 0x20F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F014u;
        // 0x20f018: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F01Cu;
        goto label_20f01c;
    }
    ctx->pc = 0x20F014u;
    {
        const bool branch_taken_0x20f014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F014u;
        // 0x20f018: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f014) {
            ctx->pc = 0x20F088u;
            goto label_20f088;
        }
    }
    ctx->pc = 0x20F01Cu;
label_20f01c:
    // 0x20f01c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x20f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_20f020:
    // 0x20f020: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x20f020u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_20f024:
    // 0x20f024: 0x24a555a0  addiu       $a1, $a1, 0x55A0
    ctx->pc = 0x20f024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
label_20f028:
    // 0x20f028: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x20f028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_20f02c:
    // 0x20f02c: 0xc0c4fe6  jal         func_313F98
label_20f030:
    if (ctx->pc == 0x20F030u) {
        ctx->pc = 0x20F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F02Cu;
        // 0x20f030: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F034u;
        goto label_20f034;
    }
    ctx->pc = 0x20F02Cu;
    SET_GPR_U32(ctx, 31, 0x20F034u);
    ctx->pc = 0x20F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F02Cu;
    // 0x20f030: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F98u, 0x20F02Cu, 0x20F034u)) {
        return;
    }
    ctx->pc = 0x20F034u;
label_20f034:
    // 0x20f034: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_20f038:
    if (ctx->pc == 0x20F038u) {
        ctx->pc = 0x20F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F034u;
        // 0x20f038: 0x83a30000  lb          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F03Cu;
        goto label_20f03c;
    }
    ctx->pc = 0x20F034u;
    {
        const bool branch_taken_0x20f034 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F034u;
        // 0x20f038: 0x83a30000  lb          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f034) {
            ctx->pc = 0x20F088u;
            goto label_20f088;
        }
    }
    ctx->pc = 0x20F03Cu;
label_20f03c:
    // 0x20f03c: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x20f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_20f040:
    // 0x20f040: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20f044:
    if (ctx->pc == 0x20F044u) {
        ctx->pc = 0x20F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F040u;
        // 0x20f044: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F048u;
        goto label_20f048;
    }
    ctx->pc = 0x20F040u;
    {
        const bool branch_taken_0x20f040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F040u;
        // 0x20f044: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f040) {
            ctx->pc = 0x20F050u;
            goto label_20f050;
        }
    }
    ctx->pc = 0x20F048u;
label_20f048:
    // 0x20f048: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_20f04c:
    if (ctx->pc == 0x20F04Cu) {
        ctx->pc = 0x20F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F048u;
        // 0x20f04c: 0xdfa30008  ld          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F050u;
        goto label_20f050;
    }
    ctx->pc = 0x20F048u;
    {
        const bool branch_taken_0x20f048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F048u;
        // 0x20f04c: 0xdfa30008  ld          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f048) {
            ctx->pc = 0x20F070u;
            goto label_20f070;
        }
    }
    ctx->pc = 0x20F050u;
label_20f050:
    // 0x20f050: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x20f050u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20f054:
    // 0x20f054: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x20f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
label_20f058:
    // 0x20f058: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x20f058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_20f05c:
    // 0x20f05c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x20f05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_20f060:
    // 0x20f060: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x20f060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_20f064:
    // 0x20f064: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x20f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
label_20f068:
    // 0x20f068: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20f06c:
    // 0x20f06c: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x20f06cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20f070:
    // 0x20f070: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x20f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
label_20f074:
    // 0x20f074: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x20f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_20f078:
    // 0x20f078: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x20f078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_20f07c:
    // 0x20f07c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x20f07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_20f080:
    // 0x20f080: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x20f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
label_20f084:
    // 0x20f084: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x20f084u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
label_20f088:
    // 0x20f088: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20f088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f08c:
    // 0x20f08c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20f08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f090:
    // 0x20f090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f094:
    // 0x20f094: 0x3e00008  jr          $ra
label_20f098:
    if (ctx->pc == 0x20F098u) {
        ctx->pc = 0x20F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F094u;
        // 0x20f098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F09Cu;
        goto label_20f09c;
    }
    ctx->pc = 0x20F094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F094u;
        // 0x20f098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F09Cu;
label_20f09c:
    // 0x20f09c: 0x0  nop
    ctx->pc = 0x20f09cu;
    // NOP
    ctx->pc = 0x20f0a0u;
}
