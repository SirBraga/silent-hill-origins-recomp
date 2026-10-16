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

// Function: sub_0015A9E8
// Address: 0x15a9e8 - 0x15ae10
void sub_0015A9E8_0x15a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A9E8_0x15a9e8");
#endif

    switch (ctx->pc) {
        case 0x15aa50u: goto label_15aa50;
        case 0x15aadcu: goto label_15aadc;
        case 0x15ab1cu: goto label_15ab1c;
        case 0x15ab34u: goto label_15ab34;
        case 0x15ab50u: goto label_15ab50;
        case 0x15ab98u: goto label_15ab98;
        case 0x15abf4u: goto label_15abf4;
        case 0x15ac38u: goto label_15ac38;
        case 0x15ac50u: goto label_15ac50;
        case 0x15ac70u: goto label_15ac70;
        case 0x15acb8u: goto label_15acb8;
        case 0x15ad24u: goto label_15ad24;
        case 0x15ad3cu: goto label_15ad3c;
        case 0x15ad40u: goto label_15ad40;
        case 0x15ad4cu: goto label_15ad4c;
        case 0x15ad74u: goto label_15ad74;
        case 0x15ad88u: goto label_15ad88;
        case 0x15ad94u: goto label_15ad94;
        case 0x15ada4u: goto label_15ada4;
        case 0x15adb0u: goto label_15adb0;
        case 0x15add4u: goto label_15add4;
        case 0x15ade4u: goto label_15ade4;
        default: break;
    }

    ctx->pc = 0x15a9e8u;

    // 0x15a9e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15a9ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a9f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a9f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x15a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x15a9f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x15a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x15a9fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15a9fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x15aa04: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15aa04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x15aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x15aa0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15aa10: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x15aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x15aa14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15aa18: 0xae4700b4  sw          $a3, 0xB4($s2)
    ctx->pc = 0x15aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 7));
    // 0x15aa1c: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x15aa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x15aa20: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x15aa20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa24: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x15aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x15aa28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15aa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa2c: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x15aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x15aa30: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x15aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x15aa34: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x15aa34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15aa38: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15aa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15aa3c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15AA3Cu;
    {
        const bool branch_taken_0x15aa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA3Cu;
        // 0x15aa40: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa3c) {
            ctx->pc = 0x15AA70u;
            goto label_15aa70;
        }
    }
    ctx->pc = 0x15AA44u;
    // 0x15aa44: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x15aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x15aa48: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x15aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x15aa4c: 0x0  nop
    ctx->pc = 0x15aa4cu;
    // NOP
label_15aa50:
    // 0x15aa50: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x15aa50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15aa54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15aa58: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x15aa5c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x15aa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x15aa60: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x15aa60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15aa64: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x15aa64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15aa68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15AA68u;
    {
        const bool branch_taken_0x15aa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA68u;
        // 0x15aa6c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa68) {
            ctx->pc = 0x15AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aa50;
        }
    }
    ctx->pc = 0x15AA70u;
label_15aa70:
    // 0x15aa70: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x15aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x15aa74: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x15aa78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15aa78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15aa80: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x15aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x15aa84: 0x2655003c  addiu       $s5, $s2, 0x3C
    ctx->pc = 0x15aa84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x15aa88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15aa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15aa8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15aa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15aa90: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x15aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x15aa94: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x15aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x15aa98: 0xe64000b0  swc1        $f0, 0xB0($s2)
    ctx->pc = 0x15aa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x15aa9c: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x15aa9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x15aaa0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x15aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x15aaa4: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x15aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x15aaa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15aaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15aaac: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x15aaacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15aab0: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x15aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x15aab4: 0xa2420030  sb          $v0, 0x30($s2)
    ctx->pc = 0x15aab4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aab8: 0xe642004c  swc1        $f2, 0x4C($s2)
    ctx->pc = 0x15aab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x15aabc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15aac0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15aac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aac8: 0x0  nop
    ctx->pc = 0x15aac8u;
    // NOP
    // 0x15aacc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15aaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15aad0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15aad0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x15aad4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15AAD4u;
    SET_GPR_U32(ctx, 31, 0x15AADCu);
    ctx->pc = 0x15AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AAD4u;
    // 0x15aad8: 0xe641002c  swc1        $f1, 0x2C($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15AAD4u, 0x15AADCu)) {
        return;
    }
    ctx->pc = 0x15AADCu;
label_15aadc:
    // 0x15aadc: 0x92510030  lbu         $s1, 0x30($s2)
    ctx->pc = 0x15aadcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x15aae0: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x15aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x15aae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15aae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aae8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15aaec: 0x2240018  mult        $zero, $s1, $a0
    ctx->pc = 0x15aaecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15aaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aaf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15aaf8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x15aafc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x15aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x15ab00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15ab00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x15ab04: 0x2012  mflo        $a0
    ctx->pc = 0x15ab04u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x15ab08: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x15ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x15ab0c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x15ab10: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x15ab14: 0xc080924  jal         func_202490
    ctx->pc = 0x15AB14u;
    SET_GPR_U32(ctx, 31, 0x15AB1Cu);
    ctx->pc = 0x15AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB14u;
    // 0x15ab18: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15AB14u, 0x15AB1Cu)) {
        return;
    }
    ctx->pc = 0x15AB1Cu;
label_15ab1c:
    // 0x15ab1c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x15ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ab20: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ab24: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x15ab28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ab2c: 0xc080924  jal         func_202490
    ctx->pc = 0x15AB2Cu;
    SET_GPR_U32(ctx, 31, 0x15AB34u);
    ctx->pc = 0x15AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB2Cu;
    // 0x15ab30: 0x642018  mult        $a0, $v1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15AB2Cu, 0x15AB34u)) {
        return;
    }
    ctx->pc = 0x15AB34u;
label_15ab34:
    // 0x15ab34: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x15ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ab38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ab38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15ab40: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15AB40u;
    {
        const bool branch_taken_0x15ab40 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB40u;
        // 0x15ab44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab40) {
            ctx->pc = 0x15AB80u;
            goto label_15ab80;
        }
    }
    ctx->pc = 0x15AB48u;
    // 0x15ab48: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x15ab48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15ab4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ab4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ab50:
    // 0x15ab50: 0xe81018  mult        $v0, $a3, $t0
    ctx->pc = 0x15ab50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15ab54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ab58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ab5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15ab60: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ab64: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x15ab64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x15ab68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ab6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15ab70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ab74: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15ab74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15ab78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x15AB78u;
    {
        const bool branch_taken_0x15ab78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB78u;
        // 0x15ab7c: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab78) {
            ctx->pc = 0x15AB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ab50;
        }
    }
    ctx->pc = 0x15AB80u;
label_15ab80:
    // 0x15ab80: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ab84: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15AB84u;
    {
        const bool branch_taken_0x15ab84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB84u;
        // 0x15ab88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab84) {
            ctx->pc = 0x15ABE4u;
            goto label_15abe4;
        }
    }
    ctx->pc = 0x15AB8Cu;
    // 0x15ab8c: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x15ab8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15ab90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ab90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab94: 0x0  nop
    ctx->pc = 0x15ab94u;
    // NOP
label_15ab98:
    // 0x15ab98: 0xe92018  mult        $a0, $a3, $t1
    ctx->pc = 0x15ab98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15ab9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15aba0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15aba4: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x15aba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x15aba8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x15aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x15abac: 0xe92818  mult        $a1, $a3, $t1
    ctx->pc = 0x15abacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15abb0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15abb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15abb4: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x15abb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x15abb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15abbc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x15abc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15abc4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15abc8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x15abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x15abcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15abd0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x15abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x15abd4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15abd8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15abd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15abdc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15ABDCu;
    {
        const bool branch_taken_0x15abdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABDCu;
        // 0x15abe0: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abdc) {
            ctx->pc = 0x15AB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15ABE4u;
label_15abe4:
    // 0x15abe4: 0xae50001c  sw          $s0, 0x1C($s2)
    ctx->pc = 0x15abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 16));
    // 0x15abe8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x15abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x15abec: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15ABECu;
    SET_GPR_U32(ctx, 31, 0x15ABF4u);
    ctx->pc = 0x15ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ABECu;
    // 0x15abf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15ABECu, 0x15ABF4u)) {
        return;
    }
    ctx->pc = 0x15ABF4u;
label_15abf4:
    // 0x15abf4: 0x92510030  lbu         $s1, 0x30($s2)
    ctx->pc = 0x15abf4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x15abf8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x15abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x15abfc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15ac00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ac00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac04: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x15ac04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15ac08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ac0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15ac10: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x15ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x15ac14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ac18: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x15ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x15ac1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x15ac20: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x15ac20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15ac24: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x15ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x15ac28: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x15ac2c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x15ac30: 0xc080924  jal         func_202490
    ctx->pc = 0x15AC30u;
    SET_GPR_U32(ctx, 31, 0x15AC38u);
    ctx->pc = 0x15AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC30u;
    // 0x15ac34: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15AC30u, 0x15AC38u)) {
        return;
    }
    ctx->pc = 0x15AC38u;
label_15ac38:
    // 0x15ac38: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x15ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ac3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ac40: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x15ac44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ac48: 0xc080924  jal         func_202490
    ctx->pc = 0x15AC48u;
    SET_GPR_U32(ctx, 31, 0x15AC50u);
    ctx->pc = 0x15AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC48u;
    // 0x15ac4c: 0x642018  mult        $a0, $v1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15AC48u, 0x15AC50u)) {
        return;
    }
    ctx->pc = 0x15AC50u;
label_15ac50:
    // 0x15ac50: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x15ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ac54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ac54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15ac5c: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15AC5Cu;
    {
        const bool branch_taken_0x15ac5c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC5Cu;
        // 0x15ac60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac5c) {
            ctx->pc = 0x15ACA0u;
            goto label_15aca0;
        }
    }
    ctx->pc = 0x15AC64u;
    // 0x15ac64: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x15ac64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15ac68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac6c: 0x0  nop
    ctx->pc = 0x15ac6cu;
    // NOP
label_15ac70:
    // 0x15ac70: 0xe81018  mult        $v0, $a3, $t0
    ctx->pc = 0x15ac70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15ac74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ac78: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ac7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15ac80: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ac84: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x15ac84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x15ac88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ac8c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15ac90: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ac94: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15ac94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15ac98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x15AC98u;
    {
        const bool branch_taken_0x15ac98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC98u;
        // 0x15ac9c: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac98) {
            ctx->pc = 0x15AC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ac70;
        }
    }
    ctx->pc = 0x15ACA0u;
label_15aca0:
    // 0x15aca0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15aca4: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15ACA4u;
    {
        const bool branch_taken_0x15aca4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA4u;
        // 0x15aca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aca4) {
            ctx->pc = 0x15AD04u;
            goto label_15ad04;
        }
    }
    ctx->pc = 0x15ACACu;
    // 0x15acac: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x15acacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15acb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15acb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acb4: 0x0  nop
    ctx->pc = 0x15acb4u;
    // NOP
label_15acb8:
    // 0x15acb8: 0xe92018  mult        $a0, $a3, $t1
    ctx->pc = 0x15acb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15acbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15acc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15acc4: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x15acc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x15acc8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x15acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x15accc: 0xe92818  mult        $a1, $a3, $t1
    ctx->pc = 0x15acccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15acd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15acd4: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x15acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x15acd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15acdc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x15ace0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ace4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ace8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x15acec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15acf0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x15acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x15acf4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15acf8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15acf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15acfc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15ACFCu;
    {
        const bool branch_taken_0x15acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acfc) {
            ctx->pc = 0x15ACB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15acb8;
        }
    }
    ctx->pc = 0x15AD04u;
label_15ad04:
    // 0x15ad04: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x15ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x15ad08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad0c: 0x92450030  lbu         $a1, 0x30($s2)
    ctx->pc = 0x15ad0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x15ad10: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x15ad10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15ad14: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x15ad14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x15ad18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15ad18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad1c: 0xc0573ae  jal         func_15CEB8
    ctx->pc = 0x15AD1Cu;
    SET_GPR_U32(ctx, 31, 0x15AD24u);
    ctx->pc = 0x15AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD1Cu;
    // 0x15ad20: 0x24130a0b  addiu       $s3, $zero, 0xA0B (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CEB8u, 0x15AD1Cu, 0x15AD24u)) {
        return;
    }
    ctx->pc = 0x15AD24u;
label_15ad24:
    // 0x15ad24: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x15ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x15ad28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ad28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x15ad30: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15ad30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad34: 0xc05ee90  jal         func_17BA40
    ctx->pc = 0x15AD34u;
    SET_GPR_U32(ctx, 31, 0x15AD3Cu);
    ctx->pc = 0x15AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD34u;
    // 0x15ad38: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x15AD34u, 0x15AD3Cu)) {
        return;
    }
    ctx->pc = 0x15AD3Cu;
label_15ad3c:
    // 0x15ad3c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x15ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_15ad40:
    // 0x15ad40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ad40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad44: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x15AD44u;
    SET_GPR_U32(ctx, 31, 0x15AD4Cu);
    ctx->pc = 0x15AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD44u;
    // 0x15ad48: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196D70u, 0x15AD44u, 0x15AD4Cu)) {
        return;
    }
    ctx->pc = 0x15AD4Cu;
label_15ad4c:
    // 0x15ad4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ad4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad50: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x15AD50u;
    {
        const bool branch_taken_0x15ad50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad50) {
            ctx->pc = 0x15AD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AD50u;
            // 0x15ad54: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15ADB8u;
            goto label_15adb8;
        }
    }
    ctx->pc = 0x15AD58u;
    // 0x15ad58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15ad5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ad60: 0x5473fff7  bnel        $v1, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15AD60u;
    {
        const bool branch_taken_0x15ad60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x15ad60) {
            ctx->pc = 0x15AD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AD60u;
            // 0x15ad64: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15AD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ad40;
        }
    }
    ctx->pc = 0x15AD68u;
    // 0x15ad68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ad6c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15AD6Cu;
    SET_GPR_U32(ctx, 31, 0x15AD74u);
    ctx->pc = 0x15AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD6Cu;
    // 0x15ad70: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15AD6Cu, 0x15AD74u)) {
        return;
    }
    ctx->pc = 0x15AD74u;
label_15ad74:
    // 0x15ad74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15ad78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ad78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ad80: 0xc09d7cc  jal         func_275F30
    ctx->pc = 0x15AD80u;
    SET_GPR_U32(ctx, 31, 0x15AD88u);
    ctx->pc = 0x15AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD80u;
    // 0x15ad84: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275F30u, 0x15AD80u, 0x15AD88u)) {
        return;
    }
    ctx->pc = 0x15AD88u;
label_15ad88:
    // 0x15ad88: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15ad8c: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x15AD8Cu;
    SET_GPR_U32(ctx, 31, 0x15AD94u);
    ctx->pc = 0x15AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD8Cu;
    // 0x15ad90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x15AD8Cu, 0x15AD94u)) {
        return;
    }
    ctx->pc = 0x15AD94u;
label_15ad94:
    // 0x15ad94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ad98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad9c: 0xc09d55c  jal         func_275570
    ctx->pc = 0x15AD9Cu;
    SET_GPR_U32(ctx, 31, 0x15ADA4u);
    ctx->pc = 0x15ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD9Cu;
    // 0x15ada0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x15AD9Cu, 0x15ADA4u)) {
        return;
    }
    ctx->pc = 0x15ADA4u;
label_15ada4:
    // 0x15ada4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15ada8: 0xc0572b8  jal         func_15CAE0
    ctx->pc = 0x15ADA8u;
    SET_GPR_U32(ctx, 31, 0x15ADB0u);
    ctx->pc = 0x15ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADA8u;
    // 0x15adac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CAE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CAE0u, 0x15ADA8u, 0x15ADB0u)) {
        return;
    }
    ctx->pc = 0x15ADB0u;
label_15adb0:
    // 0x15adb0: 0xae500028  sw          $s0, 0x28($s2)
    ctx->pc = 0x15adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 16));
    // 0x15adb4: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x15adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_15adb8:
    // 0x15adb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15adbc: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x15adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x15adc0: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x15adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x15adc4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15adc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adc8: 0x24a5cb08  addiu       $a1, $a1, -0x34F8
    ctx->pc = 0x15adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953736));
    // 0x15adcc: 0xc09545a  jal         func_255168
    ctx->pc = 0x15ADCCu;
    SET_GPR_U32(ctx, 31, 0x15ADD4u);
    ctx->pc = 0x15ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADCCu;
    // 0x15add0: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x15ADCCu, 0x15ADD4u)) {
        return;
    }
    ctx->pc = 0x15ADD4u;
label_15add4:
    // 0x15add4: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x15add4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x15add8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15add8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15addc: 0xc0773b0  jal         func_1DCEC0
    ctx->pc = 0x15ADDCu;
    SET_GPR_U32(ctx, 31, 0x15ADE4u);
    ctx->pc = 0x15ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADDCu;
    // 0x15ade0: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCEC0u, 0x15ADDCu, 0x15ADE4u)) {
        return;
    }
    ctx->pc = 0x15ADE4u;
label_15ade4:
    // 0x15ade4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15ade4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ade8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x15ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x15adec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x15adecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15adf0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x15adf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15adf4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x15adf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15adf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15adf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15adfc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x15adfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ae00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x15ae00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ae04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x15AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE08u;
        // 0x15ae0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AE10u;
}
