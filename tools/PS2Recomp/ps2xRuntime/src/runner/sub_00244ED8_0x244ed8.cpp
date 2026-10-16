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

// Function: sub_00244ED8
// Address: 0x244ed8 - 0x244fc8
void sub_00244ED8_0x244ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244ED8_0x244ed8");
#endif

    switch (ctx->pc) {
        case 0x244ed8u: goto label_244ed8;
        case 0x244edcu: goto label_244edc;
        case 0x244ee0u: goto label_244ee0;
        case 0x244ee4u: goto label_244ee4;
        case 0x244ee8u: goto label_244ee8;
        case 0x244eecu: goto label_244eec;
        case 0x244ef0u: goto label_244ef0;
        case 0x244ef4u: goto label_244ef4;
        case 0x244ef8u: goto label_244ef8;
        case 0x244efcu: goto label_244efc;
        case 0x244f00u: goto label_244f00;
        case 0x244f04u: goto label_244f04;
        case 0x244f08u: goto label_244f08;
        case 0x244f0cu: goto label_244f0c;
        case 0x244f10u: goto label_244f10;
        case 0x244f14u: goto label_244f14;
        case 0x244f18u: goto label_244f18;
        case 0x244f1cu: goto label_244f1c;
        case 0x244f20u: goto label_244f20;
        case 0x244f24u: goto label_244f24;
        case 0x244f28u: goto label_244f28;
        case 0x244f2cu: goto label_244f2c;
        case 0x244f30u: goto label_244f30;
        case 0x244f34u: goto label_244f34;
        case 0x244f38u: goto label_244f38;
        case 0x244f3cu: goto label_244f3c;
        case 0x244f40u: goto label_244f40;
        case 0x244f44u: goto label_244f44;
        case 0x244f48u: goto label_244f48;
        case 0x244f4cu: goto label_244f4c;
        case 0x244f50u: goto label_244f50;
        case 0x244f54u: goto label_244f54;
        case 0x244f58u: goto label_244f58;
        case 0x244f5cu: goto label_244f5c;
        case 0x244f60u: goto label_244f60;
        case 0x244f64u: goto label_244f64;
        case 0x244f68u: goto label_244f68;
        case 0x244f6cu: goto label_244f6c;
        case 0x244f70u: goto label_244f70;
        case 0x244f74u: goto label_244f74;
        case 0x244f78u: goto label_244f78;
        case 0x244f7cu: goto label_244f7c;
        case 0x244f80u: goto label_244f80;
        case 0x244f84u: goto label_244f84;
        case 0x244f88u: goto label_244f88;
        case 0x244f8cu: goto label_244f8c;
        case 0x244f90u: goto label_244f90;
        case 0x244f94u: goto label_244f94;
        case 0x244f98u: goto label_244f98;
        case 0x244f9cu: goto label_244f9c;
        case 0x244fa0u: goto label_244fa0;
        case 0x244fa4u: goto label_244fa4;
        case 0x244fa8u: goto label_244fa8;
        case 0x244facu: goto label_244fac;
        case 0x244fb0u: goto label_244fb0;
        case 0x244fb4u: goto label_244fb4;
        case 0x244fb8u: goto label_244fb8;
        case 0x244fbcu: goto label_244fbc;
        case 0x244fc0u: goto label_244fc0;
        case 0x244fc4u: goto label_244fc4;
        default: break;
    }

    ctx->pc = 0x244ed8u;

label_244ed8:
    // 0x244ed8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x244ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_244edc:
    // 0x244edc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_244ee0:
    // 0x244ee0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x244ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_244ee4:
    // 0x244ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_244ee8:
    // 0x244ee8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x244ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_244eec:
    // 0x244eec: 0x311200ff  andi        $s2, $t0, 0xFF
    ctx->pc = 0x244eecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_244ef0:
    // 0x244ef0: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x244ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_244ef4:
    // 0x244ef4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x244ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_244ef8:
    // 0x244ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_244efc:
    // 0x244efc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x244efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_244f00:
    // 0x244f00: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x244f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_244f04:
    // 0x244f04: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x244f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_244f08:
    // 0x244f08: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_244f0c:
    if (ctx->pc == 0x244F0Cu) {
        ctx->pc = 0x244F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F08u;
        // 0x244f0c: 0x4883e  dsrl32      $s1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F10u;
        goto label_244f10;
    }
    ctx->pc = 0x244F08u;
    {
        const bool branch_taken_0x244f08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F08u;
        // 0x244f0c: 0x4883e  dsrl32      $s1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f08) {
            ctx->pc = 0x244F5Cu;
            goto label_244f5c;
        }
    }
    ctx->pc = 0x244F10u;
label_244f10:
    // 0x244f10: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x244f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_244f14:
    // 0x244f14: 0x6624000f  daddiu      $a0, $s1, 0xF
    ctx->pc = 0x244f14u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15);
label_244f18:
    // 0x244f18: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x244f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_244f1c:
    // 0x244f1c: 0x34a5fee0  ori         $a1, $a1, 0xFEE0
    ctx->pc = 0x244f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65248);
label_244f20:
    // 0x244f20: 0xc07db0a  jal         func_1F6C28
label_244f24:
    if (ctx->pc == 0x244F24u) {
        ctx->pc = 0x244F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F20u;
        // 0x244f24: 0x26100fc8  addiu       $s0, $s0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F28u;
        goto label_244f28;
    }
    ctx->pc = 0x244F20u;
    SET_GPR_U32(ctx, 31, 0x244F28u);
    ctx->pc = 0x244F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F20u;
    // 0x244f24: 0x26100fc8  addiu       $s0, $s0, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x244F20u, 0x244F28u)) {
        return;
    }
    ctx->pc = 0x244F28u;
label_244f28:
    // 0x244f28: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x244f28u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_244f2c:
    // 0x244f2c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x244f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_244f30:
    // 0x244f30: 0x22078  dsll        $a0, $v0, 1
    ctx->pc = 0x244f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 1);
label_244f34:
    // 0x244f34: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x244f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_244f38:
    // 0x244f38: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x244f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_244f3c:
    // 0x244f3c: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x244f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_244f40:
    // 0x244f40: 0x648400b0  daddiu      $a0, $a0, 0xB0
    ctx->pc = 0x244f40u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)176);
label_244f44:
    // 0x244f44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x244f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_244f48:
    // 0x244f48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x244f48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_244f4c:
    // 0x244f4c: 0x60f809  jalr        $v1
label_244f50:
    if (ctx->pc == 0x244F50u) {
        ctx->pc = 0x244F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F4Cu;
        // 0x244f50: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F54u;
        goto label_244f54;
    }
    ctx->pc = 0x244F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x244F54u);
        ctx->pc = 0x244F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F4Cu;
        // 0x244f50: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244F4Cu, 0x244F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244F54u;
label_244f54:
    // 0x244f54: 0x10000011  b           . + 4 + (0x11 << 2)
label_244f58:
    if (ctx->pc == 0x244F58u) {
        ctx->pc = 0x244F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F54u;
        // 0x244f58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F5Cu;
        goto label_244f5c;
    }
    ctx->pc = 0x244F54u;
    {
        const bool branch_taken_0x244f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F54u;
        // 0x244f58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f54) {
            ctx->pc = 0x244F9Cu;
            goto label_244f9c;
        }
    }
    ctx->pc = 0x244F5Cu;
label_244f5c:
    // 0x244f5c: 0xc08ba56  jal         func_22E958
label_244f60:
    if (ctx->pc == 0x244F60u) {
        ctx->pc = 0x244F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F5Cu;
        // 0x244f60: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F64u;
        goto label_244f64;
    }
    ctx->pc = 0x244F5Cu;
    SET_GPR_U32(ctx, 31, 0x244F64u);
    ctx->pc = 0x244F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F5Cu;
    // 0x244f60: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E958u, 0x244F5Cu, 0x244F64u)) {
        return;
    }
    ctx->pc = 0x244F64u;
label_244f64:
    // 0x244f64: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x244f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_244f68:
    // 0x244f68: 0x34a5fee0  ori         $a1, $a1, 0xFEE0
    ctx->pc = 0x244f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65248);
label_244f6c:
    // 0x244f6c: 0xc07db0a  jal         func_1F6C28
label_244f70:
    if (ctx->pc == 0x244F70u) {
        ctx->pc = 0x244F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F6Cu;
        // 0x244f70: 0x6624000f  daddiu      $a0, $s1, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F74u;
        goto label_244f74;
    }
    ctx->pc = 0x244F6Cu;
    SET_GPR_U32(ctx, 31, 0x244F74u);
    ctx->pc = 0x244F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F6Cu;
    // 0x244f70: 0x6624000f  daddiu      $a0, $s1, 0xF (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x244F6Cu, 0x244F74u)) {
        return;
    }
    ctx->pc = 0x244F74u;
label_244f74:
    // 0x244f74: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x244f74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_244f78:
    // 0x244f78: 0x22078  dsll        $a0, $v0, 1
    ctx->pc = 0x244f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 1);
label_244f7c:
    // 0x244f7c: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x244f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_244f80:
    // 0x244f80: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x244f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_244f84:
    // 0x244f84: 0x648400b0  daddiu      $a0, $a0, 0xB0
    ctx->pc = 0x244f84u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)176);
label_244f88:
    // 0x244f88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x244f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_244f8c:
    // 0x244f8c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x244f8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_244f90:
    // 0x244f90: 0xc08bdde  jal         func_22F778
label_244f94:
    if (ctx->pc == 0x244F94u) {
        ctx->pc = 0x244F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F90u;
        // 0x244f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F98u;
        goto label_244f98;
    }
    ctx->pc = 0x244F90u;
    SET_GPR_U32(ctx, 31, 0x244F98u);
    ctx->pc = 0x244F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F90u;
    // 0x244f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22F778u, 0x244F90u, 0x244F98u)) {
        return;
    }
    ctx->pc = 0x244F98u;
label_244f98:
    // 0x244f98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244f9c:
    // 0x244f9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x244f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244fa0:
    // 0x244fa0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x244fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244fa4:
    // 0x244fa4: 0xc09134a  jal         func_244D28
label_244fa8:
    if (ctx->pc == 0x244FA8u) {
        ctx->pc = 0x244FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FA4u;
        // 0x244fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FACu;
        goto label_244fac;
    }
    ctx->pc = 0x244FA4u;
    SET_GPR_U32(ctx, 31, 0x244FACu);
    ctx->pc = 0x244FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FA4u;
    // 0x244fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244D28u, 0x244FA4u, 0x244FACu)) {
        return;
    }
    ctx->pc = 0x244FACu;
label_244fac:
    // 0x244fac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x244facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244fb0:
    // 0x244fb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x244fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_244fb4:
    // 0x244fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x244fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244fb8:
    // 0x244fb8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x244fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244fbc:
    // 0x244fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244fc0:
    // 0x244fc0: 0x3e00008  jr          $ra
label_244fc4:
    if (ctx->pc == 0x244FC4u) {
        ctx->pc = 0x244FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FC0u;
        // 0x244fc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FC8u;
        goto label_fallthrough_0x244fc0;
    }
    ctx->pc = 0x244FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FC0u;
        // 0x244fc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244fc0:
    ctx->pc = 0x244FC8u;
}
