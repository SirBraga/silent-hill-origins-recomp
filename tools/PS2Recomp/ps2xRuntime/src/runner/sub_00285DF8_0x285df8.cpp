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

// Function: sub_00285DF8
// Address: 0x285df8 - 0x286008
void sub_00285DF8_0x285df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285DF8_0x285df8");
#endif

    switch (ctx->pc) {
        case 0x285df8u: goto label_285df8;
        case 0x285dfcu: goto label_285dfc;
        case 0x285e00u: goto label_285e00;
        case 0x285e04u: goto label_285e04;
        case 0x285e08u: goto label_285e08;
        case 0x285e0cu: goto label_285e0c;
        case 0x285e10u: goto label_285e10;
        case 0x285e14u: goto label_285e14;
        case 0x285e18u: goto label_285e18;
        case 0x285e1cu: goto label_285e1c;
        case 0x285e20u: goto label_285e20;
        case 0x285e24u: goto label_285e24;
        case 0x285e28u: goto label_285e28;
        case 0x285e2cu: goto label_285e2c;
        case 0x285e30u: goto label_285e30;
        case 0x285e34u: goto label_285e34;
        case 0x285e38u: goto label_285e38;
        case 0x285e3cu: goto label_285e3c;
        case 0x285e40u: goto label_285e40;
        case 0x285e44u: goto label_285e44;
        case 0x285e48u: goto label_285e48;
        case 0x285e4cu: goto label_285e4c;
        case 0x285e50u: goto label_285e50;
        case 0x285e54u: goto label_285e54;
        case 0x285e58u: goto label_285e58;
        case 0x285e5cu: goto label_285e5c;
        case 0x285e60u: goto label_285e60;
        case 0x285e64u: goto label_285e64;
        case 0x285e68u: goto label_285e68;
        case 0x285e6cu: goto label_285e6c;
        case 0x285e70u: goto label_285e70;
        case 0x285e74u: goto label_285e74;
        case 0x285e78u: goto label_285e78;
        case 0x285e7cu: goto label_285e7c;
        case 0x285e80u: goto label_285e80;
        case 0x285e84u: goto label_285e84;
        case 0x285e88u: goto label_285e88;
        case 0x285e8cu: goto label_285e8c;
        case 0x285e90u: goto label_285e90;
        case 0x285e94u: goto label_285e94;
        case 0x285e98u: goto label_285e98;
        case 0x285e9cu: goto label_285e9c;
        case 0x285ea0u: goto label_285ea0;
        case 0x285ea4u: goto label_285ea4;
        case 0x285ea8u: goto label_285ea8;
        case 0x285eacu: goto label_285eac;
        case 0x285eb0u: goto label_285eb0;
        case 0x285eb4u: goto label_285eb4;
        case 0x285eb8u: goto label_285eb8;
        case 0x285ebcu: goto label_285ebc;
        case 0x285ec0u: goto label_285ec0;
        case 0x285ec4u: goto label_285ec4;
        case 0x285ec8u: goto label_285ec8;
        case 0x285eccu: goto label_285ecc;
        case 0x285ed0u: goto label_285ed0;
        case 0x285ed4u: goto label_285ed4;
        case 0x285ed8u: goto label_285ed8;
        case 0x285edcu: goto label_285edc;
        case 0x285ee0u: goto label_285ee0;
        case 0x285ee4u: goto label_285ee4;
        case 0x285ee8u: goto label_285ee8;
        case 0x285eecu: goto label_285eec;
        case 0x285ef0u: goto label_285ef0;
        case 0x285ef4u: goto label_285ef4;
        case 0x285ef8u: goto label_285ef8;
        case 0x285efcu: goto label_285efc;
        case 0x285f00u: goto label_285f00;
        case 0x285f04u: goto label_285f04;
        case 0x285f08u: goto label_285f08;
        case 0x285f0cu: goto label_285f0c;
        case 0x285f10u: goto label_285f10;
        case 0x285f14u: goto label_285f14;
        case 0x285f18u: goto label_285f18;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f20u: goto label_285f20;
        case 0x285f24u: goto label_285f24;
        case 0x285f28u: goto label_285f28;
        case 0x285f2cu: goto label_285f2c;
        case 0x285f30u: goto label_285f30;
        case 0x285f34u: goto label_285f34;
        case 0x285f38u: goto label_285f38;
        case 0x285f3cu: goto label_285f3c;
        case 0x285f40u: goto label_285f40;
        case 0x285f44u: goto label_285f44;
        case 0x285f48u: goto label_285f48;
        case 0x285f4cu: goto label_285f4c;
        case 0x285f50u: goto label_285f50;
        case 0x285f54u: goto label_285f54;
        case 0x285f58u: goto label_285f58;
        case 0x285f5cu: goto label_285f5c;
        case 0x285f60u: goto label_285f60;
        case 0x285f64u: goto label_285f64;
        case 0x285f68u: goto label_285f68;
        case 0x285f6cu: goto label_285f6c;
        case 0x285f70u: goto label_285f70;
        case 0x285f74u: goto label_285f74;
        case 0x285f78u: goto label_285f78;
        case 0x285f7cu: goto label_285f7c;
        case 0x285f80u: goto label_285f80;
        case 0x285f84u: goto label_285f84;
        case 0x285f88u: goto label_285f88;
        case 0x285f8cu: goto label_285f8c;
        case 0x285f90u: goto label_285f90;
        case 0x285f94u: goto label_285f94;
        case 0x285f98u: goto label_285f98;
        case 0x285f9cu: goto label_285f9c;
        case 0x285fa0u: goto label_285fa0;
        case 0x285fa4u: goto label_285fa4;
        case 0x285fa8u: goto label_285fa8;
        case 0x285facu: goto label_285fac;
        case 0x285fb0u: goto label_285fb0;
        case 0x285fb4u: goto label_285fb4;
        case 0x285fb8u: goto label_285fb8;
        case 0x285fbcu: goto label_285fbc;
        case 0x285fc0u: goto label_285fc0;
        case 0x285fc4u: goto label_285fc4;
        case 0x285fc8u: goto label_285fc8;
        case 0x285fccu: goto label_285fcc;
        case 0x285fd0u: goto label_285fd0;
        case 0x285fd4u: goto label_285fd4;
        case 0x285fd8u: goto label_285fd8;
        case 0x285fdcu: goto label_285fdc;
        case 0x285fe0u: goto label_285fe0;
        case 0x285fe4u: goto label_285fe4;
        case 0x285fe8u: goto label_285fe8;
        case 0x285fecu: goto label_285fec;
        case 0x285ff0u: goto label_285ff0;
        case 0x285ff4u: goto label_285ff4;
        case 0x285ff8u: goto label_285ff8;
        case 0x285ffcu: goto label_285ffc;
        case 0x286000u: goto label_286000;
        case 0x286004u: goto label_286004;
        default: break;
    }

    ctx->pc = 0x285df8u;

label_285df8:
    // 0x285df8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x285df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_285dfc:
    // 0x285dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285e00:
    // 0x285e00: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x285e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_285e04:
    // 0x285e04: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x285e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_285e08:
    // 0x285e08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x285e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285e0c:
    // 0x285e0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_285e10:
    // 0x285e10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x285e10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285e14:
    // 0x285e14: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x285e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_285e18:
    // 0x285e18: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x285e18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285e1c:
    // 0x285e1c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x285e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_285e20:
    // 0x285e20: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x285e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_285e24:
    // 0x285e24: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
label_285e28:
    if (ctx->pc == 0x285E28u) {
        ctx->pc = 0x285E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E24u;
        // 0x285e28: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E2Cu;
        goto label_285e2c;
    }
    ctx->pc = 0x285E24u;
    {
        const bool branch_taken_0x285e24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x285E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E24u;
        // 0x285e28: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e24) {
            ctx->pc = 0x285E40u;
            goto label_285e40;
        }
    }
    ctx->pc = 0x285E2Cu;
label_285e2c:
    // 0x285e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x285e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285e30:
    // 0x285e30: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
label_285e34:
    if (ctx->pc == 0x285E34u) {
        ctx->pc = 0x285E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E30u;
        // 0x285e34: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E38u;
        goto label_285e38;
    }
    ctx->pc = 0x285E30u;
    {
        const bool branch_taken_0x285e30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x285E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E30u;
        // 0x285e34: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e30) {
            ctx->pc = 0x285EA8u;
            goto label_285ea8;
        }
    }
    ctx->pc = 0x285E38u;
label_285e38:
    // 0x285e38: 0x10000035  b           . + 4 + (0x35 << 2)
label_285e3c:
    if (ctx->pc == 0x285E3Cu) {
        ctx->pc = 0x285E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E38u;
        // 0x285e3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E40u;
        goto label_285e40;
    }
    ctx->pc = 0x285E38u;
    {
        const bool branch_taken_0x285e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E38u;
        // 0x285e3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e38) {
            ctx->pc = 0x285F10u;
            goto label_285f10;
        }
    }
    ctx->pc = 0x285E40u;
label_285e40:
    // 0x285e40: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x285e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_285e44:
    // 0x285e44: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x285e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_285e48:
    // 0x285e48: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x285e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_285e4c:
    // 0x285e4c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x285e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_285e50:
    // 0x285e50: 0x24c30fc8  addiu       $v1, $a2, 0xFC8
    ctx->pc = 0x285e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
label_285e54:
    // 0x285e54: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x285e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_285e58:
    // 0x285e58: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_285e5c:
    // 0x285e5c: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x285e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_285e60:
    // 0x285e60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x285e60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285e64:
    // 0x285e64: 0x24910044  addiu       $s1, $a0, 0x44
    ctx->pc = 0x285e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_285e68:
    // 0x285e68: 0x40f809  jalr        $v0
label_285e6c:
    if (ctx->pc == 0x285E6Cu) {
        ctx->pc = 0x285E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E68u;
        // 0x285e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E70u;
        goto label_285e70;
    }
    ctx->pc = 0x285E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285E70u);
        ctx->pc = 0x285E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E68u;
        // 0x285e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285E68u, 0x285E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285E70u;
label_285e70:
    // 0x285e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285e74:
    // 0x285e74: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_285e78:
    if (ctx->pc == 0x285E78u) {
        ctx->pc = 0x285E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E74u;
        // 0x285e78: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E7Cu;
        goto label_285e7c;
    }
    ctx->pc = 0x285E74u;
    {
        const bool branch_taken_0x285e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x285E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E74u;
        // 0x285e78: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e74) {
            ctx->pc = 0x285EA0u;
            goto label_285ea0;
        }
    }
    ctx->pc = 0x285E7Cu;
label_285e7c:
    // 0x285e7c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x285e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_285e80:
    // 0x285e80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x285e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_285e84:
    // 0x285e84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x285e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_285e88:
    // 0x285e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285e8c:
    // 0x285e8c: 0xc092848  jal         func_24A120
label_285e90:
    if (ctx->pc == 0x285E90u) {
        ctx->pc = 0x285E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E8Cu;
        // 0x285e90: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E94u;
        goto label_285e94;
    }
    ctx->pc = 0x285E8Cu;
    SET_GPR_U32(ctx, 31, 0x285E94u);
    ctx->pc = 0x285E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E8Cu;
    // 0x285e90: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285E8Cu, 0x285E94u)) {
        return;
    }
    ctx->pc = 0x285E94u;
label_285e94:
    // 0x285e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x285e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_285e98:
    // 0x285e98: 0x1000004e  b           . + 4 + (0x4E << 2)
label_285e9c:
    if (ctx->pc == 0x285E9Cu) {
        ctx->pc = 0x285E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E98u;
        // 0x285e9c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EA0u;
        goto label_285ea0;
    }
    ctx->pc = 0x285E98u;
    {
        const bool branch_taken_0x285e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E98u;
        // 0x285e9c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e98) {
            ctx->pc = 0x285FD4u;
            goto label_285fd4;
        }
    }
    ctx->pc = 0x285EA0u;
label_285ea0:
    // 0x285ea0: 0x10000021  b           . + 4 + (0x21 << 2)
label_285ea4:
    if (ctx->pc == 0x285EA4u) {
        ctx->pc = 0x285EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EA0u;
        // 0x285ea4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EA8u;
        goto label_285ea8;
    }
    ctx->pc = 0x285EA0u;
    {
        const bool branch_taken_0x285ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EA0u;
        // 0x285ea4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ea0) {
            ctx->pc = 0x285F28u;
            goto label_285f28;
        }
    }
    ctx->pc = 0x285EA8u;
label_285ea8:
    // 0x285ea8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x285ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_285eac:
    // 0x285eac: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x285eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_285eb0:
    // 0x285eb0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x285eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_285eb4:
    // 0x285eb4: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x285eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_285eb8:
    // 0x285eb8: 0x24c30fc8  addiu       $v1, $a2, 0xFC8
    ctx->pc = 0x285eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
label_285ebc:
    // 0x285ebc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x285ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_285ec0:
    // 0x285ec0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x285ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_285ec4:
    // 0x285ec4: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x285ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_285ec8:
    // 0x285ec8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x285ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285ecc:
    // 0x285ecc: 0x24910044  addiu       $s1, $a0, 0x44
    ctx->pc = 0x285eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_285ed0:
    // 0x285ed0: 0x40f809  jalr        $v0
label_285ed4:
    if (ctx->pc == 0x285ED4u) {
        ctx->pc = 0x285ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ED0u;
        // 0x285ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285ED8u;
        goto label_285ed8;
    }
    ctx->pc = 0x285ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285ED8u);
        ctx->pc = 0x285ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ED0u;
        // 0x285ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285ED0u, 0x285ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285ED8u;
label_285ed8:
    // 0x285ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285edc:
    // 0x285edc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_285ee0:
    if (ctx->pc == 0x285EE0u) {
        ctx->pc = 0x285EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EDCu;
        // 0x285ee0: 0x26420003  addiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EE4u;
        goto label_285ee4;
    }
    ctx->pc = 0x285EDCu;
    {
        const bool branch_taken_0x285edc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x285EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EDCu;
        // 0x285ee0: 0x26420003  addiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285edc) {
            ctx->pc = 0x285F08u;
            goto label_285f08;
        }
    }
    ctx->pc = 0x285EE4u;
label_285ee4:
    // 0x285ee4: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x285ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_285ee8:
    // 0x285ee8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x285ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_285eec:
    // 0x285eec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x285eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_285ef0:
    // 0x285ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285ef4:
    // 0x285ef4: 0xc092848  jal         func_24A120
label_285ef8:
    if (ctx->pc == 0x285EF8u) {
        ctx->pc = 0x285EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EF4u;
        // 0x285ef8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EFCu;
        goto label_285efc;
    }
    ctx->pc = 0x285EF4u;
    SET_GPR_U32(ctx, 31, 0x285EFCu);
    ctx->pc = 0x285EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285EF4u;
    // 0x285ef8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285EF4u, 0x285EFCu)) {
        return;
    }
    ctx->pc = 0x285EFCu;
label_285efc:
    // 0x285efc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x285efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_285f00:
    // 0x285f00: 0x10000034  b           . + 4 + (0x34 << 2)
label_285f04:
    if (ctx->pc == 0x285F04u) {
        ctx->pc = 0x285F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F00u;
        // 0x285f04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F08u;
        goto label_285f08;
    }
    ctx->pc = 0x285F00u;
    {
        const bool branch_taken_0x285f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F00u;
        // 0x285f04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f00) {
            ctx->pc = 0x285FD4u;
            goto label_285fd4;
        }
    }
    ctx->pc = 0x285F08u;
label_285f08:
    // 0x285f08: 0x10000007  b           . + 4 + (0x7 << 2)
label_285f0c:
    if (ctx->pc == 0x285F0Cu) {
        ctx->pc = 0x285F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F08u;
        // 0x285f0c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F10u;
        goto label_285f10;
    }
    ctx->pc = 0x285F08u;
    {
        const bool branch_taken_0x285f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F08u;
        // 0x285f0c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f08) {
            ctx->pc = 0x285F28u;
            goto label_285f28;
        }
    }
    ctx->pc = 0x285F10u;
label_285f10:
    // 0x285f10: 0xc092848  jal         func_24A120
label_285f14:
    if (ctx->pc == 0x285F14u) {
        ctx->pc = 0x285F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F10u;
        // 0x285f14: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F18u;
        goto label_285f18;
    }
    ctx->pc = 0x285F10u;
    SET_GPR_U32(ctx, 31, 0x285F18u);
    ctx->pc = 0x285F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285F10u;
    // 0x285f14: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285F10u, 0x285F18u)) {
        return;
    }
    ctx->pc = 0x285F18u;
label_285f18:
    // 0x285f18: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x285f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_285f1c:
    // 0x285f1c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_285f20:
    if (ctx->pc == 0x285F20u) {
        ctx->pc = 0x285F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F1Cu;
        // 0x285f20: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F24u;
        goto label_285f24;
    }
    ctx->pc = 0x285F1Cu;
    {
        const bool branch_taken_0x285f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F1Cu;
        // 0x285f20: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f1c) {
            ctx->pc = 0x285FD4u;
            goto label_285fd4;
        }
    }
    ctx->pc = 0x285F24u;
label_285f24:
    // 0x285f24: 0x0  nop
    ctx->pc = 0x285f24u;
    // NOP
label_285f28:
    // 0x285f28: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x285f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_285f2c:
    // 0x285f2c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x285f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_285f30:
    // 0x285f30: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x285f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_285f34:
    // 0x285f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285f38:
    // 0x285f38: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x285f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_285f3c:
    // 0x285f3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x285f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_285f40:
    // 0x285f40: 0xc0a11bc  jal         func_2846F0
label_285f44:
    if (ctx->pc == 0x285F44u) {
        ctx->pc = 0x285F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F40u;
        // 0x285f44: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F48u;
        goto label_285f48;
    }
    ctx->pc = 0x285F40u;
    SET_GPR_U32(ctx, 31, 0x285F48u);
    ctx->pc = 0x285F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285F40u;
    // 0x285f44: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2846F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2846F0u, 0x285F40u, 0x285F48u)) {
        return;
    }
    ctx->pc = 0x285F48u;
label_285f48:
    // 0x285f48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_285f4c:
    if (ctx->pc == 0x285F4Cu) {
        ctx->pc = 0x285F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F48u;
        // 0x285f4c: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F50u;
        goto label_285f50;
    }
    ctx->pc = 0x285F48u;
    {
        const bool branch_taken_0x285f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f48) {
            ctx->pc = 0x285F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285F48u;
            // 0x285f4c: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285F68u;
            goto label_285f68;
        }
    }
    ctx->pc = 0x285F50u;
label_285f50:
    // 0x285f50: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x285f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_285f54:
    // 0x285f54: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x285f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_285f58:
    // 0x285f58: 0x40f809  jalr        $v0
label_285f5c:
    if (ctx->pc == 0x285F5Cu) {
        ctx->pc = 0x285F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F58u;
        // 0x285f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F60u;
        goto label_285f60;
    }
    ctx->pc = 0x285F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285F60u);
        ctx->pc = 0x285F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F58u;
        // 0x285f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F58u, 0x285F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285F60u;
label_285f60:
    // 0x285f60: 0x1000001f  b           . + 4 + (0x1F << 2)
label_285f64:
    if (ctx->pc == 0x285F64u) {
        ctx->pc = 0x285F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F60u;
        // 0x285f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F68u;
        goto label_285f68;
    }
    ctx->pc = 0x285F60u;
    {
        const bool branch_taken_0x285f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F60u;
        // 0x285f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f60) {
            ctx->pc = 0x285FE0u;
            goto label_285fe0;
        }
    }
    ctx->pc = 0x285F68u;
label_285f68:
    // 0x285f68: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x285f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_285f6c:
    // 0x285f6c: 0x2428818  mult        $s1, $s2, $v0
    ctx->pc = 0x285f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_285f70:
    // 0x285f70: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x285f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_285f74:
    // 0x285f74: 0x26920fc8  addiu       $s2, $s4, 0xFC8
    ctx->pc = 0x285f74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_285f78:
    // 0x285f78: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x285f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_285f7c:
    // 0x285f7c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x285f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_285f80:
    // 0x285f80: 0x40f809  jalr        $v0
label_285f84:
    if (ctx->pc == 0x285F84u) {
        ctx->pc = 0x285F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F80u;
        // 0x285f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F88u;
        goto label_285f88;
    }
    ctx->pc = 0x285F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285F88u);
        ctx->pc = 0x285F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F80u;
        // 0x285f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F80u, 0x285F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285F88u;
label_285f88:
    // 0x285f88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_285f8c:
    if (ctx->pc == 0x285F8Cu) {
        ctx->pc = 0x285F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F88u;
        // 0x285f8c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F90u;
        goto label_285f90;
    }
    ctx->pc = 0x285F88u;
    {
        const bool branch_taken_0x285f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F88u;
        // 0x285f8c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f88) {
            ctx->pc = 0x285FA8u;
            goto label_285fa8;
        }
    }
    ctx->pc = 0x285F90u;
label_285f90:
    // 0x285f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285f94:
    // 0x285f94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x285f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_285f98:
    // 0x285f98: 0xc075fdc  jal         func_1D7F70
label_285f9c:
    if (ctx->pc == 0x285F9Cu) {
        ctx->pc = 0x285F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F98u;
        // 0x285f9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FA0u;
        goto label_285fa0;
    }
    ctx->pc = 0x285F98u;
    SET_GPR_U32(ctx, 31, 0x285FA0u);
    ctx->pc = 0x285F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285F98u;
    // 0x285f9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x285F98u, 0x285FA0u)) {
        return;
    }
    ctx->pc = 0x285FA0u;
label_285fa0:
    // 0x285fa0: 0x1000000f  b           . + 4 + (0xF << 2)
label_285fa4:
    if (ctx->pc == 0x285FA4u) {
        ctx->pc = 0x285FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA0u;
        // 0x285fa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FA8u;
        goto label_285fa8;
    }
    ctx->pc = 0x285FA0u;
    {
        const bool branch_taken_0x285fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA0u;
        // 0x285fa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fa0) {
            ctx->pc = 0x285FE0u;
            goto label_285fe0;
        }
    }
    ctx->pc = 0x285FA8u;
label_285fa8:
    // 0x285fa8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x285fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_285fac:
    // 0x285fac: 0x40f809  jalr        $v0
label_285fb0:
    if (ctx->pc == 0x285FB0u) {
        ctx->pc = 0x285FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FACu;
        // 0x285fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FB4u;
        goto label_285fb4;
    }
    ctx->pc = 0x285FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285FB4u);
        ctx->pc = 0x285FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FACu;
        // 0x285fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FACu, 0x285FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285FB4u;
label_285fb4:
    // 0x285fb4: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x285fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_285fb8:
    // 0x285fb8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x285fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_285fbc:
    // 0x285fbc: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x285fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_285fc0:
    // 0x285fc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285fc4:
    // 0x285fc4: 0xc092848  jal         func_24A120
label_285fc8:
    if (ctx->pc == 0x285FC8u) {
        ctx->pc = 0x285FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FC4u;
        // 0x285fc8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FCCu;
        goto label_285fcc;
    }
    ctx->pc = 0x285FC4u;
    SET_GPR_U32(ctx, 31, 0x285FCCu);
    ctx->pc = 0x285FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285FC4u;
    // 0x285fc8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285FC4u, 0x285FCCu)) {
        return;
    }
    ctx->pc = 0x285FCCu;
label_285fcc:
    // 0x285fcc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x285fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_285fd0:
    // 0x285fd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x285fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_285fd4:
    // 0x285fd4: 0xc09281a  jal         func_24A068
label_285fd8:
    if (ctx->pc == 0x285FD8u) {
        ctx->pc = 0x285FDCu;
        goto label_285fdc;
    }
    ctx->pc = 0x285FD4u;
    SET_GPR_U32(ctx, 31, 0x285FDCu);
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x285FD4u, 0x285FDCu)) {
        return;
    }
    ctx->pc = 0x285FDCu;
label_285fdc:
    // 0x285fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285fe0:
    // 0x285fe0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x285fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_285fe4:
    // 0x285fe4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x285fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_285fe8:
    // 0x285fe8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x285fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_285fec:
    // 0x285fec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x285fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_285ff0:
    // 0x285ff0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x285ff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_285ff4:
    // 0x285ff4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285ff4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_285ff8:
    // 0x285ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x285ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_285ffc:
    // 0x285ffc: 0x3e00008  jr          $ra
label_286000:
    if (ctx->pc == 0x286000u) {
        ctx->pc = 0x286000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FFCu;
        // 0x286000: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286004u;
        goto label_286004;
    }
    ctx->pc = 0x285FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FFCu;
        // 0x286000: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286004u;
label_286004:
    // 0x286004: 0x0  nop
    ctx->pc = 0x286004u;
    // NOP
    ctx->pc = 0x286008u;
}
