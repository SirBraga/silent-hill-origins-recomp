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

// Function: sub_00257658
// Address: 0x257658 - 0x2577d0
void sub_00257658_0x257658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257658_0x257658");
#endif

    switch (ctx->pc) {
        case 0x25767cu: goto label_25767c;
        case 0x2576a8u: goto label_2576a8;
        case 0x2576b8u: goto label_2576b8;
        case 0x2576ccu: goto label_2576cc;
        case 0x257784u: goto label_257784;
        case 0x2577a4u: goto label_2577a4;
        case 0x2577b0u: goto label_2577b0;
        default: break;
    }

    ctx->pc = 0x257658u;

    // 0x257658: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x257658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25765c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257660: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x257660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x257664: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x257664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257668: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25766c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x257670: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x257670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x257674: 0xc09270a  jal         func_249C28
    ctx->pc = 0x257674u;
    SET_GPR_U32(ctx, 31, 0x25767Cu);
    ctx->pc = 0x257678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257674u;
    // 0x257678: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x257674u, 0x25767Cu)) {
        return;
    }
    ctx->pc = 0x25767Cu;
label_25767c:
    // 0x25767c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x25767Cu;
    {
        const bool branch_taken_0x25767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25767Cu;
        // 0x257680: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25767c) {
            ctx->pc = 0x2577B0u;
            goto label_2577b0;
        }
    }
    ctx->pc = 0x257684u;
    // 0x257684: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x257684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x257688: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x257688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x25768c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257690: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x257690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x257694: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x257694u;
    {
        const bool branch_taken_0x257694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257694u;
        // 0x257698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257694) {
            ctx->pc = 0x257790u;
            goto label_257790;
        }
    }
    ctx->pc = 0x25769Cu;
    // 0x25769c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576a0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2576A0u;
    SET_GPR_U32(ctx, 31, 0x2576A8u);
    ctx->pc = 0x2576A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576A0u;
    // 0x2576a4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2576A0u, 0x2576A8u)) {
        return;
    }
    ctx->pc = 0x2576A8u;
label_2576a8:
    // 0x2576a8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2576a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2576ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2576acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576b0: 0xc093546  jal         func_24D518
    ctx->pc = 0x2576B0u;
    SET_GPR_U32(ctx, 31, 0x2576B8u);
    ctx->pc = 0x2576B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576B0u;
    // 0x2576b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2576B0u, 0x2576B8u)) {
        return;
    }
    ctx->pc = 0x2576B8u;
label_2576b8:
    // 0x2576b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2576b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2576bc: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2576BCu;
    {
        const bool branch_taken_0x2576bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2576C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576BCu;
        // 0x2576c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576bc) {
            ctx->pc = 0x2577B4u;
            goto label_2577b4;
        }
    }
    ctx->pc = 0x2576C4u;
    // 0x2576c4: 0xc095e0c  jal         func_257830
    ctx->pc = 0x2576C4u;
    SET_GPR_U32(ctx, 31, 0x2576CCu);
    ctx->pc = 0x2576C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576C4u;
    // 0x2576c8: 0x93a40016  lbu         $a0, 0x16($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x2576C4u, 0x2576CCu)) {
        return;
    }
    ctx->pc = 0x2576CCu;
label_2576cc:
    // 0x2576cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2576ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576d0: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2576D0u;
    {
        const bool branch_taken_0x2576d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576D0u;
        // 0x2576d4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576d0) {
            ctx->pc = 0x2577B0u;
            goto label_2577b0;
        }
    }
    ctx->pc = 0x2576D8u;
    // 0x2576d8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2576d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2576dc: 0x346302ff  ori         $v1, $v1, 0x2FF
    ctx->pc = 0x2576dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)767);
    // 0x2576e0: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2576e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2576e4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2576e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2576e8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2576e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2576ec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2576ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2576f0: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x2576f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2576f4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2576f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2576f8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2576f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2576fc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2576fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x257700: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x257700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x257704: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x257704u;
    {
        const bool branch_taken_0x257704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257704) {
            ctx->pc = 0x257708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257704u;
            // 0x257708: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x257730u;
            goto label_257730;
        }
    }
    ctx->pc = 0x25770Cu;
    // 0x25770c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x25770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257718: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x257718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25771c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25771cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257720: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x257720u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x257724: 0x46000004  c1          0x4
    ctx->pc = 0x257724u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x257728: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257728u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25772c: 0x0  nop
    ctx->pc = 0x25772cu;
    // NOP
label_257730:
    // 0x257730: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x257730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x257734: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x257734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257738: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x257738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25773c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25773cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257740: 0x0  nop
    ctx->pc = 0x257740u;
    // NOP
    // 0x257744: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x257744u;
    {
        const bool branch_taken_0x257744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257744) {
            ctx->pc = 0x257748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257744u;
            // 0x257748: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257768u;
            goto label_257768;
        }
    }
    ctx->pc = 0x25774Cu;
    // 0x25774c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x25774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257750: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x257750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257754: 0x0  nop
    ctx->pc = 0x257754u;
    // NOP
    // 0x257758: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x257758u;
    {
        const bool branch_taken_0x257758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257758) {
            ctx->pc = 0x25775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257758u;
            // 0x25775c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257768u;
            goto label_257768;
        }
    }
    ctx->pc = 0x257760u;
    // 0x257760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257764: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x257764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_257768:
    // 0x257768: 0x93a20014  lbu         $v0, 0x14($sp)
    ctx->pc = 0x257768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25776c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x25776cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x257770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x257770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257774: 0x24841228  addiu       $a0, $a0, 0x1228
    ctx->pc = 0x257774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4648));
    // 0x257778: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x257778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x25777c: 0xc093708  jal         func_24DC20
    ctx->pc = 0x25777Cu;
    SET_GPR_U32(ctx, 31, 0x257784u);
    ctx->pc = 0x257780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25777Cu;
    // 0x257780: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x25777Cu, 0x257784u)) {
        return;
    }
    ctx->pc = 0x257784u;
label_257784:
    // 0x257784: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x257784u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x257788: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x257788u;
    {
        const bool branch_taken_0x257788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257788u;
        // 0x25778c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257788) {
            ctx->pc = 0x2577B4u;
            goto label_2577b4;
        }
    }
    ctx->pc = 0x257790u;
label_257790:
    // 0x257790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257794: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x257794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x257798: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x257798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x25779c: 0xc092848  jal         func_24A120
    ctx->pc = 0x25779Cu;
    SET_GPR_U32(ctx, 31, 0x2577A4u);
    ctx->pc = 0x2577A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25779Cu;
    // 0x2577a0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25779Cu, 0x2577A4u)) {
        return;
    }
    ctx->pc = 0x2577A4u;
label_2577a4:
    // 0x2577a4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2577a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2577a8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2577A8u;
    SET_GPR_U32(ctx, 31, 0x2577B0u);
    ctx->pc = 0x2577ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577A8u;
    // 0x2577ac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2577A8u, 0x2577B0u)) {
        return;
    }
    ctx->pc = 0x2577B0u;
label_2577b0:
    // 0x2577b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2577b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2577b4:
    // 0x2577b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2577b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2577b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2577b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2577bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2577bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2577c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2577C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2577C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577C0u;
        // 0x2577c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2577C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2577C8u;
    // 0x2577c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2577c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2577cc: 0x0  nop
    ctx->pc = 0x2577ccu;
    // NOP
    ctx->pc = 0x2577d0u;
}
