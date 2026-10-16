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

// Function: sub_0018EEE0
// Address: 0x18eee0 - 0x18f060
void sub_0018EEE0_0x18eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EEE0_0x18eee0");
#endif

    switch (ctx->pc) {
        case 0x18eee0u: goto label_18eee0;
        case 0x18eee4u: goto label_18eee4;
        case 0x18eee8u: goto label_18eee8;
        case 0x18eeecu: goto label_18eeec;
        case 0x18eef0u: goto label_18eef0;
        case 0x18eef4u: goto label_18eef4;
        case 0x18eef8u: goto label_18eef8;
        case 0x18eefcu: goto label_18eefc;
        case 0x18ef00u: goto label_18ef00;
        case 0x18ef04u: goto label_18ef04;
        case 0x18ef08u: goto label_18ef08;
        case 0x18ef0cu: goto label_18ef0c;
        case 0x18ef10u: goto label_18ef10;
        case 0x18ef14u: goto label_18ef14;
        case 0x18ef18u: goto label_18ef18;
        case 0x18ef1cu: goto label_18ef1c;
        case 0x18ef20u: goto label_18ef20;
        case 0x18ef24u: goto label_18ef24;
        case 0x18ef28u: goto label_18ef28;
        case 0x18ef2cu: goto label_18ef2c;
        case 0x18ef30u: goto label_18ef30;
        case 0x18ef34u: goto label_18ef34;
        case 0x18ef38u: goto label_18ef38;
        case 0x18ef3cu: goto label_18ef3c;
        case 0x18ef40u: goto label_18ef40;
        case 0x18ef44u: goto label_18ef44;
        case 0x18ef48u: goto label_18ef48;
        case 0x18ef4cu: goto label_18ef4c;
        case 0x18ef50u: goto label_18ef50;
        case 0x18ef54u: goto label_18ef54;
        case 0x18ef58u: goto label_18ef58;
        case 0x18ef5cu: goto label_18ef5c;
        case 0x18ef60u: goto label_18ef60;
        case 0x18ef64u: goto label_18ef64;
        case 0x18ef68u: goto label_18ef68;
        case 0x18ef6cu: goto label_18ef6c;
        case 0x18ef70u: goto label_18ef70;
        case 0x18ef74u: goto label_18ef74;
        case 0x18ef78u: goto label_18ef78;
        case 0x18ef7cu: goto label_18ef7c;
        case 0x18ef80u: goto label_18ef80;
        case 0x18ef84u: goto label_18ef84;
        case 0x18ef88u: goto label_18ef88;
        case 0x18ef8cu: goto label_18ef8c;
        case 0x18ef90u: goto label_18ef90;
        case 0x18ef94u: goto label_18ef94;
        case 0x18ef98u: goto label_18ef98;
        case 0x18ef9cu: goto label_18ef9c;
        case 0x18efa0u: goto label_18efa0;
        case 0x18efa4u: goto label_18efa4;
        case 0x18efa8u: goto label_18efa8;
        case 0x18efacu: goto label_18efac;
        case 0x18efb0u: goto label_18efb0;
        case 0x18efb4u: goto label_18efb4;
        case 0x18efb8u: goto label_18efb8;
        case 0x18efbcu: goto label_18efbc;
        case 0x18efc0u: goto label_18efc0;
        case 0x18efc4u: goto label_18efc4;
        case 0x18efc8u: goto label_18efc8;
        case 0x18efccu: goto label_18efcc;
        case 0x18efd0u: goto label_18efd0;
        case 0x18efd4u: goto label_18efd4;
        case 0x18efd8u: goto label_18efd8;
        case 0x18efdcu: goto label_18efdc;
        case 0x18efe0u: goto label_18efe0;
        case 0x18efe4u: goto label_18efe4;
        case 0x18efe8u: goto label_18efe8;
        case 0x18efecu: goto label_18efec;
        case 0x18eff0u: goto label_18eff0;
        case 0x18eff4u: goto label_18eff4;
        case 0x18eff8u: goto label_18eff8;
        case 0x18effcu: goto label_18effc;
        case 0x18f000u: goto label_18f000;
        case 0x18f004u: goto label_18f004;
        case 0x18f008u: goto label_18f008;
        case 0x18f00cu: goto label_18f00c;
        case 0x18f010u: goto label_18f010;
        case 0x18f014u: goto label_18f014;
        case 0x18f018u: goto label_18f018;
        case 0x18f01cu: goto label_18f01c;
        case 0x18f020u: goto label_18f020;
        case 0x18f024u: goto label_18f024;
        case 0x18f028u: goto label_18f028;
        case 0x18f02cu: goto label_18f02c;
        case 0x18f030u: goto label_18f030;
        case 0x18f034u: goto label_18f034;
        case 0x18f038u: goto label_18f038;
        case 0x18f03cu: goto label_18f03c;
        case 0x18f040u: goto label_18f040;
        case 0x18f044u: goto label_18f044;
        case 0x18f048u: goto label_18f048;
        case 0x18f04cu: goto label_18f04c;
        case 0x18f050u: goto label_18f050;
        case 0x18f054u: goto label_18f054;
        case 0x18f058u: goto label_18f058;
        case 0x18f05cu: goto label_18f05c;
        default: break;
    }

    ctx->pc = 0x18eee0u;

label_18eee0:
    // 0x18eee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_18eee4:
    // 0x18eee4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_18eee8:
    // 0x18eee8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x18eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_18eeec:
    // 0x18eeec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18eeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18eef0:
    // 0x18eef0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_18eef4:
    // 0x18eef4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x18eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_18eef8:
    // 0x18eef8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_18eefc:
    // 0x18eefc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_18ef00:
    // 0x18ef00: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x18ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_18ef04:
    // 0x18ef04: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x18ef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_18ef08:
    // 0x18ef08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18ef0c:
    // 0x18ef0c: 0xc07d234  jal         func_1F48D0
label_18ef10:
    if (ctx->pc == 0x18EF10u) {
        ctx->pc = 0x18EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF0Cu;
        // 0x18ef10: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF14u;
        goto label_18ef14;
    }
    ctx->pc = 0x18EF0Cu;
    SET_GPR_U32(ctx, 31, 0x18EF14u);
    ctx->pc = 0x18EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF0Cu;
    // 0x18ef10: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18EF0Cu, 0x18EF14u)) {
        return;
    }
    ctx->pc = 0x18EF14u;
label_18ef14:
    // 0x18ef14: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_18ef18:
    // 0x18ef18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ef18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ef1c:
    // 0x18ef1c: 0x8c658ae4  lw          $a1, -0x751C($v1)
    ctx->pc = 0x18ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937316)));
label_18ef20:
    // 0x18ef20: 0xc07d3d6  jal         func_1F4F58
label_18ef24:
    if (ctx->pc == 0x18EF24u) {
        ctx->pc = 0x18EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF20u;
        // 0x18ef24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF28u;
        goto label_18ef28;
    }
    ctx->pc = 0x18EF20u;
    SET_GPR_U32(ctx, 31, 0x18EF28u);
    ctx->pc = 0x18EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF20u;
    // 0x18ef24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EF20u, 0x18EF28u)) {
        return;
    }
    ctx->pc = 0x18EF28u;
label_18ef28:
    // 0x18ef28: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_18ef2c:
    if (ctx->pc == 0x18EF2Cu) {
        ctx->pc = 0x18EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF28u;
        // 0x18ef2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF30u;
        goto label_18ef30;
    }
    ctx->pc = 0x18EF28u;
    {
        const bool branch_taken_0x18ef28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF28u;
        // 0x18ef2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef28) {
            ctx->pc = 0x18F034u;
            goto label_18f034;
        }
    }
    ctx->pc = 0x18EF30u;
label_18ef30:
    // 0x18ef30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ef30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ef34:
    // 0x18ef34: 0xc07d3d6  jal         func_1F4F58
label_18ef38:
    if (ctx->pc == 0x18EF38u) {
        ctx->pc = 0x18EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF34u;
        // 0x18ef38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF3Cu;
        goto label_18ef3c;
    }
    ctx->pc = 0x18EF34u;
    SET_GPR_U32(ctx, 31, 0x18EF3Cu);
    ctx->pc = 0x18EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF34u;
    // 0x18ef38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EF34u, 0x18EF3Cu)) {
        return;
    }
    ctx->pc = 0x18EF3Cu;
label_18ef3c:
    // 0x18ef3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18ef3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ef40:
    // 0x18ef40: 0x12a0003c  beqz        $s5, . + 4 + (0x3C << 2)
label_18ef44:
    if (ctx->pc == 0x18EF44u) {
        ctx->pc = 0x18EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF40u;
        // 0x18ef44: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF48u;
        goto label_18ef48;
    }
    ctx->pc = 0x18EF40u;
    {
        const bool branch_taken_0x18ef40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF40u;
        // 0x18ef44: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef40) {
            ctx->pc = 0x18F034u;
            goto label_18f034;
        }
    }
    ctx->pc = 0x18EF48u;
label_18ef48:
    // 0x18ef48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_18ef4c:
    // 0x18ef4c: 0x24a59480  addiu       $a1, $a1, -0x6B80
    ctx->pc = 0x18ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939776));
label_18ef50:
    // 0x18ef50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18ef54:
    // 0x18ef54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ef54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18ef58:
    // 0x18ef58: 0xc07d352  jal         func_1F4D48
label_18ef5c:
    if (ctx->pc == 0x18EF5Cu) {
        ctx->pc = 0x18EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF58u;
        // 0x18ef5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF60u;
        goto label_18ef60;
    }
    ctx->pc = 0x18EF58u;
    SET_GPR_U32(ctx, 31, 0x18EF60u);
    ctx->pc = 0x18EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF58u;
    // 0x18ef5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x18EF58u, 0x18EF60u)) {
        return;
    }
    ctx->pc = 0x18EF60u;
label_18ef60:
    // 0x18ef60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18ef64:
    // 0x18ef64: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_18ef68:
    if (ctx->pc == 0x18EF68u) {
        ctx->pc = 0x18EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF64u;
        // 0x18ef68: 0x26d3009c  addiu       $s3, $s6, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF6Cu;
        goto label_18ef6c;
    }
    ctx->pc = 0x18EF64u;
    {
        const bool branch_taken_0x18ef64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF64u;
        // 0x18ef68: 0x26d3009c  addiu       $s3, $s6, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef64) {
            ctx->pc = 0x18F034u;
            goto label_18f034;
        }
    }
    ctx->pc = 0x18EF6Cu;
label_18ef6c:
    // 0x18ef6c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x18ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_18ef70:
    // 0x18ef70: 0x2457108c  addiu       $s7, $v0, 0x108C
    ctx->pc = 0x18ef70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_18ef74:
    // 0x18ef74: 0x0  nop
    ctx->pc = 0x18ef74u;
    // NOP
label_18ef78:
    // 0x18ef78: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x18ef78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_18ef7c:
    // 0x18ef7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_18ef80:
    // 0x18ef80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18ef84:
    // 0x18ef84: 0xc07d392  jal         func_1F4E48
label_18ef88:
    if (ctx->pc == 0x18EF88u) {
        ctx->pc = 0x18EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF84u;
        // 0x18ef88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF8Cu;
        goto label_18ef8c;
    }
    ctx->pc = 0x18EF84u;
    SET_GPR_U32(ctx, 31, 0x18EF8Cu);
    ctx->pc = 0x18EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF84u;
    // 0x18ef88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E48u, 0x18EF84u, 0x18EF8Cu)) {
        return;
    }
    ctx->pc = 0x18EF8Cu;
label_18ef8c:
    // 0x18ef8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ef90:
    // 0x18ef90: 0xc0808f0  jal         func_2023C0
label_18ef94:
    if (ctx->pc == 0x18EF94u) {
        ctx->pc = 0x18EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF90u;
        // 0x18ef94: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF98u;
        goto label_18ef98;
    }
    ctx->pc = 0x18EF90u;
    SET_GPR_U32(ctx, 31, 0x18EF98u);
    ctx->pc = 0x18EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF90u;
    // 0x18ef94: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18EF90u, 0x18EF98u)) {
        return;
    }
    ctx->pc = 0x18EF98u;
label_18ef98:
    // 0x18ef98: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18ef9c:
    // 0x18ef9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18ef9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18efa0:
    // 0x18efa0: 0x8ee20030  lw          $v0, 0x30($s7)
    ctx->pc = 0x18efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_18efa4:
    // 0x18efa4: 0x40f809  jalr        $v0
label_18efa8:
    if (ctx->pc == 0x18EFA8u) {
        ctx->pc = 0x18EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA4u;
        // 0x18efa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFACu;
        goto label_18efac;
    }
    ctx->pc = 0x18EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EFACu);
        ctx->pc = 0x18EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA4u;
        // 0x18efa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EFA4u, 0x18EFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EFACu;
label_18efac:
    // 0x18efac: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x18efacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18efb0:
    // 0x18efb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18efb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18efb4:
    // 0x18efb4: 0xc080924  jal         func_202490
label_18efb8:
    if (ctx->pc == 0x18EFB8u) {
        ctx->pc = 0x18EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFB4u;
        // 0x18efb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFBCu;
        goto label_18efbc;
    }
    ctx->pc = 0x18EFB4u;
    SET_GPR_U32(ctx, 31, 0x18EFBCu);
    ctx->pc = 0x18EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFB4u;
    // 0x18efb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x18EFB4u, 0x18EFBCu)) {
        return;
    }
    ctx->pc = 0x18EFBCu;
label_18efbc:
    // 0x18efbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18efbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18efc0:
    // 0x18efc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18efc4:
    // 0x18efc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18efc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18efc8:
    // 0x18efc8: 0xc081b9a  jal         func_206E68
label_18efcc:
    if (ctx->pc == 0x18EFCCu) {
        ctx->pc = 0x18EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFC8u;
        // 0x18efcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFD0u;
        goto label_18efd0;
    }
    ctx->pc = 0x18EFC8u;
    SET_GPR_U32(ctx, 31, 0x18EFD0u);
    ctx->pc = 0x18EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFC8u;
    // 0x18efcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18EFC8u, 0x18EFD0u)) {
        return;
    }
    ctx->pc = 0x18EFD0u;
label_18efd0:
    // 0x18efd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18efd4:
    // 0x18efd4: 0xc065c40  jal         func_197100
label_18efd8:
    if (ctx->pc == 0x18EFD8u) {
        ctx->pc = 0x18EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFD4u;
        // 0x18efd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFDCu;
        goto label_18efdc;
    }
    ctx->pc = 0x18EFD4u;
    SET_GPR_U32(ctx, 31, 0x18EFDCu);
    ctx->pc = 0x18EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFD4u;
    // 0x18efd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18EFD4u, 0x18EFDCu)) {
        return;
    }
    ctx->pc = 0x18EFDCu;
label_18efdc:
    // 0x18efdc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x18efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_18efe0:
    // 0x18efe0: 0xc080858  jal         func_202160
label_18efe4:
    if (ctx->pc == 0x18EFE4u) {
        ctx->pc = 0x18EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFE0u;
        // 0x18efe4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFE8u;
        goto label_18efe8;
    }
    ctx->pc = 0x18EFE0u;
    SET_GPR_U32(ctx, 31, 0x18EFE8u);
    ctx->pc = 0x18EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFE0u;
    // 0x18efe4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18EFE0u, 0x18EFE8u)) {
        return;
    }
    ctx->pc = 0x18EFE8u;
label_18efe8:
    // 0x18efe8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18efe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18efec:
    // 0x18efec: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x18efecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_18eff0:
    // 0x18eff0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18eff4:
    // 0x18eff4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_18eff8:
    // 0x18eff8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18effc:
    // 0x18effc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18f000:
    // 0x18f000: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18f004:
    if (ctx->pc == 0x18F004u) {
        ctx->pc = 0x18F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F000u;
        // 0x18f004: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F008u;
        goto label_18f008;
    }
    ctx->pc = 0x18F000u;
    {
        const bool branch_taken_0x18f000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f000) {
            ctx->pc = 0x18F004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F000u;
            // 0x18f004: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F008u;
            goto label_18f008;
        }
    }
    ctx->pc = 0x18F008u;
label_18f008:
    // 0x18f008: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_18f00c:
    // 0x18f00c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_18f010:
    if (ctx->pc == 0x18F010u) {
        ctx->pc = 0x18F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F00Cu;
        // 0x18f010: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F014u;
        goto label_18f014;
    }
    ctx->pc = 0x18F00Cu;
    {
        const bool branch_taken_0x18f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f00c) {
            ctx->pc = 0x18F010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F00Cu;
            // 0x18f010: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F014u;
            goto label_18f014;
        }
    }
    ctx->pc = 0x18F014u;
label_18f014:
    // 0x18f014: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x18f014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_18f018:
    // 0x18f018: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_18f01c:
    // 0x18f01c: 0x8ec2009c  lw          $v0, 0x9C($s6)
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 156)));
label_18f020:
    // 0x18f020: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18f024:
    // 0x18f024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18f028:
    // 0x18f028: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x18f028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18f02c:
    // 0x18f02c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_18f030:
    if (ctx->pc == 0x18F030u) {
        ctx->pc = 0x18F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F02Cu;
        // 0x18f030: 0xaec2009c  sw          $v0, 0x9C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F034u;
        goto label_18f034;
    }
    ctx->pc = 0x18F02Cu;
    {
        const bool branch_taken_0x18f02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F02Cu;
        // 0x18f030: 0xaec2009c  sw          $v0, 0x9C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f02c) {
            ctx->pc = 0x18EF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ef78;
        }
    }
    ctx->pc = 0x18F034u;
label_18f034:
    // 0x18f034: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18f034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18f038:
    // 0x18f038: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18f038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18f03c:
    // 0x18f03c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18f03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18f040:
    // 0x18f040: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18f040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18f044:
    // 0x18f044: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18f044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18f048:
    // 0x18f048: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x18f048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18f04c:
    // 0x18f04c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x18f04cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f050:
    // 0x18f050: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x18f050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f054:
    // 0x18f054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18f058:
    // 0x18f058: 0x3e00008  jr          $ra
label_18f05c:
    if (ctx->pc == 0x18F05Cu) {
        ctx->pc = 0x18F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F058u;
        // 0x18f05c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F060u;
        goto label_fallthrough_0x18f058;
    }
    ctx->pc = 0x18F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F058u;
        // 0x18f05c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f058:
    ctx->pc = 0x18F060u;
}
