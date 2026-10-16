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

// Function: sub_001561F8
// Address: 0x1561f8 - 0x156388
void sub_001561F8_0x1561f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001561F8_0x1561f8");
#endif

    switch (ctx->pc) {
        case 0x15622cu: goto label_15622c;
        case 0x156318u: goto label_156318;
        case 0x156328u: goto label_156328;
        case 0x15634cu: goto label_15634c;
        case 0x156364u: goto label_156364;
        case 0x156374u: goto label_156374;
        default: break;
    }

    ctx->pc = 0x1561f8u;

    // 0x1561f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1561f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1561fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1561fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x156200: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x156200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x156204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156208: 0x14a2005a  bne         $a1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x156208u;
    {
        const bool branch_taken_0x156208 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156208u;
        // 0x15620c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156208) {
            ctx->pc = 0x156374u;
            goto label_156374;
        }
    }
    ctx->pc = 0x156210u;
    // 0x156210: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x156210u;
    {
        const bool branch_taken_0x156210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x156214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156210u;
        // 0x156214: 0x3c11006c  lui         $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156210) {
            ctx->pc = 0x156354u;
            goto label_156354;
        }
    }
    ctx->pc = 0x156218u;
    // 0x156218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15621c: 0x2630f028  addiu       $s0, $s1, -0xFD8
    ctx->pc = 0x15621cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963240));
    // 0x156220: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x156220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156224: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x156224u;
    SET_GPR_U32(ctx, 31, 0x15622Cu);
    ctx->pc = 0x156228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156224u;
    // 0x156228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x156224u, 0x15622Cu)) {
        return;
    }
    ctx->pc = 0x15622Cu;
label_15622c:
    // 0x15622c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x156230: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x156234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156238: 0x24622a08  addiu       $v0, $v1, 0x2A08
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10760));
    // 0x15623c: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
    // 0x156240: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x156240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x156244: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x156244u;
    { uint32_t bits = FAST_READ32(0x692A30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156248: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x156248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x15624c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x15624cu;
    { uint32_t bits = FAST_READ32(0x692A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156250: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x156250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x156254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156258: 0xc4460040  lwc1        $f6, 0x40($v0)
    ctx->pc = 0x156258u;
    { uint32_t bits = FAST_READ32(0x692A48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15625c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15625cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156260: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x156260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x156264: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x156264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x156268: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x156268u;
    { uint32_t bits = FAST_READ32(0x692A50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15626c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x15626cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x156270: 0xc4490024  lwc1        $f9, 0x24($v0)
    ctx->pc = 0x156270u;
    { uint32_t bits = FAST_READ32(0x692A2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x156274: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x156274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x156278: 0xc4682a08  lwc1        $f8, 0x2A08($v1)
    ctx->pc = 0x156278u;
    { uint32_t bits = FAST_READ32(0x692A08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15627c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x15627cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x156280: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x156280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x156284: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x156284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x156288: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x156288u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x15628c: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x15628cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x156290: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x156290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x156294: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156298: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x156298u;
    { uint32_t bits = FAST_READ32(0x692A28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15629c: 0x46074201  sub.s       $f8, $f8, $f7
    ctx->pc = 0x15629cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1562a0: 0x46044901  sub.s       $f4, $f9, $f4
    ctx->pc = 0x1562a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[4]);
    // 0x1562a4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1562a4u;
    { uint32_t bits = FAST_READ32(0x692A0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1562a8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1562a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1562ac: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1562acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1562b0: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x1562b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x1562b4: 0x3c01422c  lui         $at, 0x422C
    ctx->pc = 0x1562b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16940 << 16));
    // 0x1562b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1562b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1562bc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1562bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1562c0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1562c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1562c4: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x1562c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
    // 0x1562c8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1562c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1562cc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1562ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1562d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1562d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1562d4: 0x460a2101  sub.s       $f4, $f4, $f10
    ctx->pc = 0x1562d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x1562d8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1562d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1562dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1562dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1562e0: 0x460a4201  sub.s       $f8, $f8, $f10
    ctx->pc = 0x1562e0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
    // 0x1562e4: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x1562e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1562e8: 0x46074a40  add.s       $f9, $f9, $f7
    ctx->pc = 0x1562e8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[7]);
    // 0x1562ec: 0xe4e3f038  swc1        $f3, -0xFC8($a3)
    ctx->pc = 0x1562ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BF038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF038u, _value); } while (0); }
    // 0x1562f0: 0xe4a6f040  swc1        $f6, -0xFC0($a1)
    ctx->pc = 0x1562f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BF040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF040u, _value); } while (0); }
    // 0x1562f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1562f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1562f8: 0xe4c8f03c  swc1        $f8, -0xFC4($a2)
    ctx->pc = 0x1562f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BF03Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF03Cu, _value); } while (0); }
    // 0x1562fc: 0x2484f050  addiu       $a0, $a0, -0xFB0
    ctx->pc = 0x1562fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
    // 0x156300: 0xe461f044  swc1        $f1, -0xFBC($v1)
    ctx->pc = 0x156300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BF044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF044u, _value); } while (0); }
    // 0x156304: 0xe620f028  swc1        $f0, -0xFD8($s1)
    ctx->pc = 0x156304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294963240), bits); }
    // 0x156308: 0xe444f048  swc1        $f4, -0xFB8($v0)
    ctx->pc = 0x156308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BF048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF048u, _value); } while (0); }
    // 0x15630c: 0xe6090004  swc1        $f9, 0x4($s0)
    ctx->pc = 0x15630cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x156310: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x156310u;
    SET_GPR_U32(ctx, 31, 0x156318u);
    ctx->pc = 0x156314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156310u;
    // 0x156314: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x156310u, 0x156318u)) {
        return;
    }
    ctx->pc = 0x156318u;
label_156318:
    // 0x156318: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x156318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x15631c: 0x261029f8  addiu       $s0, $s0, 0x29F8
    ctx->pc = 0x15631cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10744));
    // 0x156320: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x156320u;
    SET_GPR_U32(ctx, 31, 0x156328u);
    ctx->pc = 0x156324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156320u;
    // 0x156324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x156320u, 0x156328u)) {
        return;
    }
    ctx->pc = 0x156328u;
label_156328:
    // 0x156328: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15632c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x156330: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x156330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x156334: 0xac62f058  sw          $v0, -0xFA8($v1)
    ctx->pc = 0x156334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF058u, _value); } while (0);
    // 0x156338: 0x2484f060  addiu       $a0, $a0, -0xFA0
    ctx->pc = 0x156338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963296));
    // 0x15633c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156340: 0x24c66388  addiu       $a2, $a2, 0x6388
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25480));
    // 0x156344: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x156344u;
    SET_GPR_U32(ctx, 31, 0x15634Cu);
    ctx->pc = 0x156348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156344u;
    // 0x156348: 0x2407010c  addiu       $a3, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x156344u, 0x15634Cu)) {
        return;
    }
    ctx->pc = 0x15634Cu;
label_15634c:
    // 0x15634c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15634Cu;
    {
        const bool branch_taken_0x15634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15634Cu;
        // 0x156350: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15634c) {
            ctx->pc = 0x156378u;
            goto label_156378;
        }
    }
    ctx->pc = 0x156354u;
label_156354:
    // 0x156354: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x156358: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x156358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15635c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x15635Cu;
    SET_GPR_U32(ctx, 31, 0x156364u);
    ctx->pc = 0x156360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15635Cu;
    // 0x156360: 0x2484f060  addiu       $a0, $a0, -0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x15635Cu, 0x156364u)) {
        return;
    }
    ctx->pc = 0x156364u;
label_156364:
    // 0x156364: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x156368: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x156368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15636c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x15636Cu;
    SET_GPR_U32(ctx, 31, 0x156374u);
    ctx->pc = 0x156370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15636Cu;
    // 0x156370: 0x2484f050  addiu       $a0, $a0, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x15636Cu, 0x156374u)) {
        return;
    }
    ctx->pc = 0x156374u;
label_156374:
    // 0x156374: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x156374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156378:
    // 0x156378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15637c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15637cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156380: 0x3e00008  jr          $ra
    ctx->pc = 0x156380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156380u;
        // 0x156384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156388u;
}
