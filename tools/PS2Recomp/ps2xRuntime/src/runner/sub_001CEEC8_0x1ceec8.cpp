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

// Function: sub_001CEEC8
// Address: 0x1ceec8 - 0x1cf078
void sub_001CEEC8_0x1ceec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEEC8_0x1ceec8");
#endif

    switch (ctx->pc) {
        case 0x1cef0cu: goto label_1cef0c;
        case 0x1cef40u: goto label_1cef40;
        case 0x1cef5cu: goto label_1cef5c;
        case 0x1cef64u: goto label_1cef64;
        case 0x1cef9cu: goto label_1cef9c;
        case 0x1cefa8u: goto label_1cefa8;
        case 0x1cefd4u: goto label_1cefd4;
        case 0x1cefdcu: goto label_1cefdc;
        case 0x1cf024u: goto label_1cf024;
        case 0x1cf030u: goto label_1cf030;
        case 0x1cf044u: goto label_1cf044;
        default: break;
    }

    ctx->pc = 0x1ceec8u;

    // 0x1ceec8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1ceec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1ceecc: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1ceeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x1ceed0: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1ceed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x1ceed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ceed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceed8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ceed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceedc: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1ceedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x1ceee0: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1ceee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1ceee4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1ceee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1ceee8: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1ceee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x1ceeec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ceeecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceef0: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1ceef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x1ceef4: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1ceef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1ceef8: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1ceef8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1ceefc: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1ceefcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1cef00: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1cef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1cef04: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1CEF04u;
    SET_GPR_U32(ctx, 31, 0x1CEF0Cu);
    ctx->pc = 0x1CEF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF04u;
    // 0x1cef08: 0x3c15006a  lui         $s5, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1CEF04u, 0x1CEF0Cu)) {
        return;
    }
    ctx->pc = 0x1CEF0Cu;
label_1cef0c:
    // 0x1cef0c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1cef0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1cef10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cef10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cef14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cef14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cef18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cef18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cef1c: 0xc6810080  lwc1        $f1, 0x80($s4)
    ctx->pc = 0x1cef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cef20: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1cef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1cef24: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1cef24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cef28: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1cef28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1cef2c: 0x0  nop
    ctx->pc = 0x1cef2cu;
    // NOP
    // 0x1cef30: 0x0  nop
    ctx->pc = 0x1cef30u;
    // NOP
    // 0x1cef34: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1cef34u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1cef38: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x1cef38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1cef3c: 0x24700728  addiu       $s0, $v1, 0x728
    ctx->pc = 0x1cef3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1832));
label_1cef40:
    // 0x1cef40: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x1cef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x1cef44: 0x56420019  bnel        $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CEF44u;
    {
        const bool branch_taken_0x1cef44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cef44) {
            ctx->pc = 0x1CEF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEF44u;
            // 0x1cef48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEFACu;
            goto label_1cefac;
        }
    }
    ctx->pc = 0x1CEF4Cu;
    // 0x1cef4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cef4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef50: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1cef50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cef54: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CEF54u;
    SET_GPR_U32(ctx, 31, 0x1CEF5Cu);
    ctx->pc = 0x1CEF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF54u;
    // 0x1cef58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CEF54u, 0x1CEF5Cu)) {
        return;
    }
    ctx->pc = 0x1CEF5Cu;
label_1cef5c:
    // 0x1cef5c: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CEF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF64u);
    ctx->pc = 0x1CEF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF5Cu;
    // 0x1cef60: 0x8e240270  lw          $a0, 0x270($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CEF5Cu, 0x1CEF64u)) {
        return;
    }
    ctx->pc = 0x1CEF64u;
label_1cef64:
    // 0x1cef64: 0xc6d00018  lwc1        $f16, 0x18($s6)
    ctx->pc = 0x1cef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cef68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef6c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1cef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cef70: 0x26a50720  addiu       $a1, $s5, 0x720
    ctx->pc = 0x1cef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1824));
    // 0x1cef74: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1cef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cef78: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1cef78u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1cef7c: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1cef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cef80: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x1cef80u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
    // 0x1cef84: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x1cef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cef88: 0x4600b4c6  mov.s       $f19, $f22
    ctx->pc = 0x1cef88u;
    ctx->f[19] = FPU_MOV_S(ctx->f[22]);
    // 0x1cef8c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1cef8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cef90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cef90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cef94: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CEF94u;
    SET_GPR_U32(ctx, 31, 0x1CEF9Cu);
    ctx->pc = 0x1CEF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF94u;
    // 0x1cef98: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CEF94u, 0x1CEF9Cu)) {
        return;
    }
    ctx->pc = 0x1CEF9Cu;
label_1cef9c:
    // 0x1cef9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefa0: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CEFA0u;
    SET_GPR_U32(ctx, 31, 0x1CEFA8u);
    ctx->pc = 0x1CEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFA0u;
    // 0x1cefa4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CEFA0u, 0x1CEFA8u)) {
        return;
    }
    ctx->pc = 0x1CEFA8u;
label_1cefa8:
    // 0x1cefa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cefac:
    // 0x1cefac: 0x2a42000d  slti        $v0, $s2, 0xD
    ctx->pc = 0x1cefacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1cefb0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1CEFB0u;
    {
        const bool branch_taken_0x1cefb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEFB0u;
        // 0x1cefb4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefb0) {
            ctx->pc = 0x1CEF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cef40;
        }
    }
    ctx->pc = 0x1CEFB8u;
    // 0x1cefb8: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x1cefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x1cefbc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CEFBCu;
    {
        const bool branch_taken_0x1cefbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEFBCu;
        // 0x1cefc0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefbc) {
            ctx->pc = 0x1CF030u;
            goto label_1cf030;
        }
    }
    ctx->pc = 0x1CEFC4u;
    // 0x1cefc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cefc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefc8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cefcc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CEFCCu;
    SET_GPR_U32(ctx, 31, 0x1CEFD4u);
    ctx->pc = 0x1CEFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFCCu;
    // 0x1cefd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CEFCCu, 0x1CEFD4u)) {
        return;
    }
    ctx->pc = 0x1CEFD4u;
label_1cefd4:
    // 0x1cefd4: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CEFD4u;
    SET_GPR_U32(ctx, 31, 0x1CEFDCu);
    ctx->pc = 0x1CEFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFD4u;
    // 0x1cefd8: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CEFD4u, 0x1CEFDCu)) {
        return;
    }
    ctx->pc = 0x1CEFDCu;
label_1cefdc:
    // 0x1cefdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cefdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cefe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cefe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cefe4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1cefe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1cefe8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1cefe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1cefec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cefecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ceff0: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1ceff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ceff4: 0x24a50720  addiu       $a1, $a1, 0x720
    ctx->pc = 0x1ceff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1824));
    // 0x1ceff8: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x1ceff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ceffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf000: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x1cf000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cf004: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1cf004u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1cf008: 0xc62f000c  lwc1        $f15, 0xC($s1)
    ctx->pc = 0x1cf008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cf00c: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1cf00cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1cf010: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1cf010u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cf014: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf018: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cf018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cf01c: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CF01Cu;
    SET_GPR_U32(ctx, 31, 0x1CF024u);
    ctx->pc = 0x1CF020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF01Cu;
    // 0x1cf020: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CF01Cu, 0x1CF024u)) {
        return;
    }
    ctx->pc = 0x1CF024u;
label_1cf024:
    // 0x1cf024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf028: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CF028u;
    SET_GPR_U32(ctx, 31, 0x1CF030u);
    ctx->pc = 0x1CF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF028u;
    // 0x1cf02c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CF028u, 0x1CF030u)) {
        return;
    }
    ctx->pc = 0x1CF030u;
label_1cf030:
    // 0x1cf030: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1cf034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF034u;
    {
        const bool branch_taken_0x1cf034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF034u;
        // 0x1cf038: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf034) {
            ctx->pc = 0x1CF048u;
            goto label_1cf048;
        }
    }
    ctx->pc = 0x1CF03Cu;
    // 0x1cf03c: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1CF03Cu;
    SET_GPR_U32(ctx, 31, 0x1CF044u);
    ctx->pc = 0x1CF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF03Cu;
    // 0x1cf040: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1CF03Cu, 0x1CF044u)) {
        return;
    }
    ctx->pc = 0x1CF044u;
label_1cf044:
    // 0x1cf044: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1cf044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1cf048:
    // 0x1cf048: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1cf048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1cf04c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1cf04cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cf050: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1cf050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cf054: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1cf054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cf058: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1cf058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cf05c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1cf05cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cf060: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1cf060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cf064: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1cf064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cf068: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1cf068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cf06c: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1cf06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf070: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF070u;
        // 0x1cf074: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF078u;
}
