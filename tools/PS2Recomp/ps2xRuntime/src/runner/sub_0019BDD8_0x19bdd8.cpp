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

// Function: sub_0019BDD8
// Address: 0x19bdd8 - 0x19bf60
void sub_0019BDD8_0x19bdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BDD8_0x19bdd8");
#endif

    switch (ctx->pc) {
        case 0x19be68u: goto label_19be68;
        case 0x19be88u: goto label_19be88;
        case 0x19bea0u: goto label_19bea0;
        case 0x19bea8u: goto label_19bea8;
        case 0x19bedcu: goto label_19bedc;
        case 0x19bf0cu: goto label_19bf0c;
        case 0x19bf3cu: goto label_19bf3c;
        default: break;
    }

    ctx->pc = 0x19bdd8u;

    // 0x19bdd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19bdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bddc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19bde0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19bde4: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x19bde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19bdf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19bdf4: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x19bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19bdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bdfc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x19bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x19be00: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x19be00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x19be04: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x19be04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x19be08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19be08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19be0c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x19be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x19be10: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x19be10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x19be14: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x19be14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19be18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19be18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19be1c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x19be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x19be20: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19be20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x19be24: 0x24e7a1f0  addiu       $a3, $a3, -0x5E10
    ctx->pc = 0x19be24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943216));
    // 0x19be28: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x19be28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x19be2c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x19be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x19be30: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x19be30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19be34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19be34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be38: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19be38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19be3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19be40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19be40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be44: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x19be44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x19be48: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x19be48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x19be4c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x19be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x19be50: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x19be50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x19be54: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x19be54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x19be58: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x19be58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x19be5c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x19be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x19be60: 0xc05ee62  jal         func_17B988
    ctx->pc = 0x19BE60u;
    SET_GPR_U32(ctx, 31, 0x19BE68u);
    ctx->pc = 0x19BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE60u;
    // 0x19be64: 0x8c64870c  lw          $a0, -0x78F4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B988u, 0x19BE60u, 0x19BE68u)) {
        return;
    }
    ctx->pc = 0x19BE68u;
label_19be68:
    // 0x19be68: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x19be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19be6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19be6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be70: 0x10910007  beq         $a0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BE70u;
    {
        const bool branch_taken_0x19be70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x19be70) {
            ctx->pc = 0x19BE90u;
            goto label_19be90;
        }
    }
    ctx->pc = 0x19BE78u;
    // 0x19be78: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BE78u;
    {
        const bool branch_taken_0x19be78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be78) {
            ctx->pc = 0x19BE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BE78u;
            // 0x19be7c: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BE8Cu;
            goto label_19be8c;
        }
    }
    ctx->pc = 0x19BE80u;
    // 0x19be80: 0xc0769f2  jal         func_1DA7C8
    ctx->pc = 0x19BE80u;
    SET_GPR_U32(ctx, 31, 0x19BE88u);
    ctx->pc = 0x1DA7C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA7C8u, 0x19BE80u, 0x19BE88u)) {
        return;
    }
    ctx->pc = 0x19BE88u;
label_19be88:
    // 0x19be88: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x19be88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_19be8c:
    // 0x19be8c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x19be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_19be90:
    // 0x19be90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BE90u;
    {
        const bool branch_taken_0x19be90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be90) {
            ctx->pc = 0x19BEA0u;
            goto label_19bea0;
        }
    }
    ctx->pc = 0x19BE98u;
    // 0x19be98: 0xc0769b0  jal         func_1DA6C0
    ctx->pc = 0x19BE98u;
    SET_GPR_U32(ctx, 31, 0x19BEA0u);
    ctx->pc = 0x19BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE98u;
    // 0x19be9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA6C0u, 0x19BE98u, 0x19BEA0u)) {
        return;
    }
    ctx->pc = 0x19BEA0u;
label_19bea0:
    // 0x19bea0: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x19BEA0u;
    SET_GPR_U32(ctx, 31, 0x19BEA8u);
    ctx->pc = 0x1D9760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9760u, 0x19BEA0u, 0x19BEA8u)) {
        return;
    }
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x19bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x19beac: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19beb0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19beb4: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x19beb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x19beb8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x19beb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19bebc: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x19bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x19bec0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bec4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19bec8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BEC8u;
    {
        const bool branch_taken_0x19bec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEC8u;
        // 0x19becc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bec8) {
            ctx->pc = 0x19BEE0u;
            goto label_19bee0;
        }
    }
    ctx->pc = 0x19BED0u;
    // 0x19bed0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bed4: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x19BED4u;
    SET_GPR_U32(ctx, 31, 0x19BEDCu);
    ctx->pc = 0x19BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BED4u;
    // 0x19bed8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x19BED4u, 0x19BEDCu)) {
        return;
    }
    ctx->pc = 0x19BEDCu;
label_19bedc:
    // 0x19bedc: 0x0  nop
    ctx->pc = 0x19bedcu;
    // NOP
label_19bee0:
    // 0x19bee0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x19bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bee4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x19bee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x19bee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19bee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19beec: 0x0  nop
    ctx->pc = 0x19beecu;
    // NOP
    // 0x19bef0: 0xe46c0058  swc1        $f12, 0x58($v1)
    ctx->pc = 0x19bef0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x19bef4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bef8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19befc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BEFCu;
    {
        const bool branch_taken_0x19befc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEFCu;
        // 0x19bf00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19befc) {
            ctx->pc = 0x19BF10u;
            goto label_19bf10;
        }
    }
    ctx->pc = 0x19BF04u;
    // 0x19bf04: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x19BF04u;
    SET_GPR_U32(ctx, 31, 0x19BF0Cu);
    ctx->pc = 0x19BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF04u;
    // 0x19bf08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x19BF04u, 0x19BF0Cu)) {
        return;
    }
    ctx->pc = 0x19BF0Cu;
label_19bf0c:
    // 0x19bf0c: 0x0  nop
    ctx->pc = 0x19bf0cu;
    // NOP
label_19bf10:
    // 0x19bf10: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x19bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bf14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19bf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19bf18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19bf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19bf1c: 0x0  nop
    ctx->pc = 0x19bf1cu;
    // NOP
    // 0x19bf20: 0xe46c005c  swc1        $f12, 0x5C($v1)
    ctx->pc = 0x19bf20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x19bf24: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bf28: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19bf2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BF2Cu;
    {
        const bool branch_taken_0x19bf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF2Cu;
        // 0x19bf30: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf2c) {
            ctx->pc = 0x19BF40u;
            goto label_19bf40;
        }
    }
    ctx->pc = 0x19BF34u;
    // 0x19bf34: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x19BF34u;
    SET_GPR_U32(ctx, 31, 0x19BF3Cu);
    ctx->pc = 0x19BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF34u;
    // 0x19bf38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x19BF34u, 0x19BF3Cu)) {
        return;
    }
    ctx->pc = 0x19BF3Cu;
label_19bf3c:
    // 0x19bf3c: 0x0  nop
    ctx->pc = 0x19bf3cu;
    // NOP
label_19bf40:
    // 0x19bf40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19bf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19bf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bf48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19bf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bf4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19bf4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bf54: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF54u;
        // 0x19bf58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BF5Cu;
    // 0x19bf5c: 0x0  nop
    ctx->pc = 0x19bf5cu;
    // NOP
    ctx->pc = 0x19bf60u;
}
