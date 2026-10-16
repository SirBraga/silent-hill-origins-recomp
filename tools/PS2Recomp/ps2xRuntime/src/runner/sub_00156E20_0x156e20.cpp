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

// Function: sub_00156E20
// Address: 0x156e20 - 0x156fb0
void sub_00156E20_0x156e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156E20_0x156e20");
#endif

    switch (ctx->pc) {
        case 0x156e68u: goto label_156e68;
        case 0x156ed8u: goto label_156ed8;
        case 0x156f54u: goto label_156f54;
        case 0x156f6cu: goto label_156f6c;
        case 0x156f80u: goto label_156f80;
        case 0x156f94u: goto label_156f94;
        default: break;
    }

    ctx->pc = 0x156e20u;

    // 0x156e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156e24: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x156e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x156e28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x156e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x156e2c: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x156e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
    // 0x156e30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x156e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x156e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x156e38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x156e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156e44: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x156e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x156e48: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x156e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x156e4c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x156e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x156e50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x156e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x156e54: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x156e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x156e58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x156e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156e64: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x156e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_156e68:
    // 0x156e68: 0xac60fff0  sw          $zero, -0x10($v1)
    ctx->pc = 0x156e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 0));
    // 0x156e6c: 0xac60fff4  sw          $zero, -0xC($v1)
    ctx->pc = 0x156e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 0));
    // 0x156e70: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x156e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x156e74: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x156e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x156e78: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x156e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x156e7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x156e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x156e80: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x156e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x156e84: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x156e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x156e88: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x156e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x156e8c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x156e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x156e90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x156e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x156e94: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x156e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x156e98: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x156e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x156e9c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x156e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x156ea0: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x156ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x156ea4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x156ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x156ea8: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x156ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x156eac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x156eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x156eb0: 0x14a6ffed  bne         $a1, $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x156EB0u;
    {
        const bool branch_taken_0x156eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x156EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EB0u;
        // 0x156eb4: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156eb0) {
            ctx->pc = 0x156E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156e68;
        }
    }
    ctx->pc = 0x156EB8u;
    // 0x156eb8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x156eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x156ebc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156ec4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x156ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x156ec8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x156ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x156ecc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x156eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156ed0: 0x26430720  addiu       $v1, $s2, 0x720
    ctx->pc = 0x156ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1824));
    // 0x156ed4: 0x0  nop
    ctx->pc = 0x156ed4u;
    // NOP
label_156ed8:
    // 0x156ed8: 0xac60fff0  sw          $zero, -0x10($v1)
    ctx->pc = 0x156ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 0));
    // 0x156edc: 0xac60fff4  sw          $zero, -0xC($v1)
    ctx->pc = 0x156edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 0));
    // 0x156ee0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x156ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x156ee4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x156ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x156ee8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x156ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x156eec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x156eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x156ef0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x156ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x156ef4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x156ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x156ef8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x156ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x156efc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x156efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x156f00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x156f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x156f04: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x156f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x156f08: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x156f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x156f0c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x156f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x156f10: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x156f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x156f14: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x156f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x156f18: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x156f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x156f1c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x156f20: 0x14a6ffed  bne         $a1, $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x156F20u;
    {
        const bool branch_taken_0x156f20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x156F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F20u;
        // 0x156f24: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f20) {
            ctx->pc = 0x156ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156ed8;
        }
    }
    ctx->pc = 0x156F28u;
    // 0x156f28: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x156f2c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x156f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x156f30: 0x263146a0  addiu       $s1, $s1, 0x46A0
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18080));
    // 0x156f34: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x156f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x156f38: 0xae400850  sw          $zero, 0x850($s2)
    ctx->pc = 0x156f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2128), GPR_U32(ctx, 0));
    // 0x156f3c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x156f40: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x156f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
    // 0x156f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f4c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x156F4Cu;
    SET_GPR_U32(ctx, 31, 0x156F54u);
    ctx->pc = 0x156F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F4Cu;
    // 0x156f50: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x156F4Cu, 0x156F54u)) {
        return;
    }
    ctx->pc = 0x156F54u;
label_156f54:
    // 0x156f54: 0x261046a8  addiu       $s0, $s0, 0x46A8
    ctx->pc = 0x156f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18088));
    // 0x156f58: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x156f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f60: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x156f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x156f64: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x156F64u;
    SET_GPR_U32(ctx, 31, 0x156F6Cu);
    ctx->pc = 0x156F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F64u;
    // 0x156f68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x156F64u, 0x156F6Cu)) {
        return;
    }
    ctx->pc = 0x156F6Cu;
label_156f6c:
    // 0x156f6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f78: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x156F78u;
    SET_GPR_U32(ctx, 31, 0x156F80u);
    ctx->pc = 0x156F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F78u;
    // 0x156f7c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x156F78u, 0x156F80u)) {
        return;
    }
    ctx->pc = 0x156F80u;
label_156f80:
    // 0x156f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f8c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x156F8Cu;
    SET_GPR_U32(ctx, 31, 0x156F94u);
    ctx->pc = 0x156F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F8Cu;
    // 0x156f90: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x156F8Cu, 0x156F94u)) {
        return;
    }
    ctx->pc = 0x156F94u;
label_156f94:
    // 0x156f94: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x156f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156f9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x156f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156fa0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x156fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x156FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA8u;
        // 0x156fac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156FB0u;
}
