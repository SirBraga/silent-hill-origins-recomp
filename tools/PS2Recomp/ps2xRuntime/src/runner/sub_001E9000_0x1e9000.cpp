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

// Function: sub_001E9000
// Address: 0x1e9000 - 0x1e93f8
void sub_001E9000_0x1e9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9000_0x1e9000");
#endif

    switch (ctx->pc) {
        case 0x1e90dcu: goto label_1e90dc;
        case 0x1e9140u: goto label_1e9140;
        case 0x1e931cu: goto label_1e931c;
        default: break;
    }

    ctx->pc = 0x1e9000u;

    // 0x1e9000: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1e9004: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e9004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e9008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e900c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1e9010: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1e9010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1e9014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9018: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1e901c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1e901cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9020: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1e9024: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e9024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1e9028: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e902c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1e9030: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e9030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1e9034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9038: 0xe7bc00d0  swc1        $f28, 0xD0($sp)
    ctx->pc = 0x1e9038u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e903c: 0xe7bb00c8  swc1        $f27, 0xC8($sp)
    ctx->pc = 0x1e903cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e9040: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x1e9040u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e9044: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x1e9044u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e9048: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x1e9048u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e904c: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x1e904cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e9050: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1e9050u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e9054: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1e9054u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e9058: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1e9058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e905c: 0xc4e0012c  lwc1        $f0, 0x12C($a3)
    ctx->pc = 0x1e905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9060: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1e9060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e9064: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9068: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1e9068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e906c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e9070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9074: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e9078: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e9078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e907c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9080: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9080u;
    {
        const bool branch_taken_0x1e9080 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1E9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9080u;
        // 0x1e9084: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9080) {
            ctx->pc = 0x1E909Cu;
            goto label_1e909c;
        }
    }
    ctx->pc = 0x1E9088u;
    // 0x1e9088: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e9088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e908c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e9090: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1e9090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e9094: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9094u;
    {
        const bool branch_taken_0x1e9094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9094) {
            ctx->pc = 0x1E9098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9094u;
            // 0x1e9098: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E90A8u;
            goto label_1e90a8;
        }
    }
    ctx->pc = 0x1E909Cu;
label_1e909c:
    // 0x1e909c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e90a0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e90a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e90a4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1e90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1e90a8:
    // 0x1e90a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e90ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e90acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e90b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e90b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e90b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e90b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e90bc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e90bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e90c0: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1e90c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
    // 0x1e90c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e90c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e90c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e90c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e90cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1e90ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e90d0: 0x46020642  mul.s       $f25, $f0, $f2
    ctx->pc = 0x1e90d0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e90d4: 0xc07b016  jal         func_1EC058
    ctx->pc = 0x1E90D4u;
    SET_GPR_U32(ctx, 31, 0x1E90DCu);
    ctx->pc = 0x1E90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E90D4u;
    // 0x1e90d8: 0x4601ce42  mul.s       $f25, $f25, $f1 (Delay Slot)
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC058u, 0x1E90D4u, 0x1E90DCu)) {
        return;
    }
    ctx->pc = 0x1E90DCu;
label_1e90dc:
    // 0x1e90dc: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1E90DCu;
    {
        const bool branch_taken_0x1e90dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e90dc) {
            ctx->pc = 0x1E90E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E90DCu;
            // 0x1e90e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E93A8u;
            goto label_1e93a8;
        }
    }
    ctx->pc = 0x1E90E4u;
    // 0x1e90e4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1e90e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e90e8: 0xc61c0040  lwc1        $f28, 0x40($s0)
    ctx->pc = 0x1e90e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1e90ec: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x1e90ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e90f0: 0xc6180038  lwc1        $f24, 0x38($s0)
    ctx->pc = 0x1e90f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e90f4: 0x188000ab  blez        $a0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1E90F4u;
    {
        const bool branch_taken_0x1e90f4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1E90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90F4u;
        // 0x1e90f8: 0xc617003c  lwc1        $f23, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90f4) {
            ctx->pc = 0x1E93A4u;
            goto label_1e93a4;
        }
    }
    ctx->pc = 0x1E90FCu;
    // 0x1e90fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e9100: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e9104: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e9104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e9108: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x1e9108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
    // 0x1e910c: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1e910cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1e9110: 0x2452a230  addiu       $s2, $v0, -0x5DD0
    ctx->pc = 0x1e9110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
    // 0x1e9114: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1e9114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1e9118: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1e9118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1e911c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1e911cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1e9120: 0x24709e30  addiu       $s0, $v1, -0x61D0
    ctx->pc = 0x1e9120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942256));
    // 0x1e9124: 0x3c014222  lui         $at, 0x4222
    ctx->pc = 0x1e9124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16930 << 16));
    // 0x1e9128: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x1e9128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x1e912c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e912cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e9130: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e9130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9134: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x1e9134u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x1e9138: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x1e9138u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x1e913c: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1e913cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
label_1e9140:
    // 0x1e9140: 0x8ec6a630  lw          $a2, -0x59D0($s6)
    ctx->pc = 0x1e9140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944304)));
    // 0x1e9144: 0x4617e181  sub.s       $f6, $f28, $f23
    ctx->pc = 0x1e9144u;
    ctx->f[6] = FPU_SUB_S(ctx->f[28], ctx->f[23]);
    // 0x1e9148: 0x8ea7a634  lw          $a3, -0x59CC($s5)
    ctx->pc = 0x1e9148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944308)));
    // 0x1e914c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9150: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9154: 0x8e85a638  lw          $a1, -0x59C8($s4)
    ctx->pc = 0x1e9154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944312)));
    // 0x1e9158: 0x24e70009  addiu       $a3, $a3, 0x9
    ctx->pc = 0x1e9158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
    // 0x1e915c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e915cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e9160: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e9160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e9164: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e9164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e9168: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e9168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e916c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e9170: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e9170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e9174: 0x24a5001b  addiu       $a1, $a1, 0x1B
    ctx->pc = 0x1e9174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1e9178: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e9178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e917c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e917cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e9180: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x1e9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e9184: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9188: 0x24e70009  addiu       $a3, $a3, 0x9
    ctx->pc = 0x1e9188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
    // 0x1e918c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e918cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e9190: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e9190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e9194: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e9194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9198: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e9198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e919c: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1e919cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e91a0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1e91a0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1e91a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e91a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e91a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e91ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e91acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e91b0: 0x24a5001b  addiu       $a1, $a1, 0x1B
    ctx->pc = 0x1e91b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1e91b4: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x1e91b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x1e91b8: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x1e91b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e91bc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e91bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e91c0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1e91c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e91c4: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1e91c4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1e91c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e91cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e91ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e91d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e91d4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e91d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e91d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e91d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e91dc: 0x461ba942  mul.s       $f5, $f21, $f27
    ctx->pc = 0x1e91dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[27]);
    // 0x1e91e0: 0x24e70009  addiu       $a3, $a3, 0x9
    ctx->pc = 0x1e91e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
    // 0x1e91e4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e91e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e91e8: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1e91e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1e91ec: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e91ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e91f0: 0x461a2841  sub.s       $f1, $f5, $f26
    ctx->pc = 0x1e91f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[26]);
    // 0x1e91f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e91f8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e91fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e9200: 0x461ba502  mul.s       $f20, $f20, $f27
    ctx->pc = 0x1e9200u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
    // 0x1e9204: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e9208: 0x24a5001b  addiu       $a1, $a1, 0x1B
    ctx->pc = 0x1e9208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1e920c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x1e920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e9210: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e9210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e9214: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e9214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e9218: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1e9218u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1e921c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9220: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x1e9220u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x1e9224: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e9224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e9228: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1e9228u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1e922c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e9230: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x1e9230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x1e9234: 0xaec6a630  sw          $a2, -0x59D0($s6)
    ctx->pc = 0x1e9234u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294944304), GPR_U32(ctx, 6));
    // 0x1e9238: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e9238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e923c: 0xaea7a634  sw          $a3, -0x59CC($s5)
    ctx->pc = 0x1e923cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944308), GPR_U32(ctx, 7));
    // 0x1e9240: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1e9240u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1e9244: 0xae85a638  sw          $a1, -0x59C8($s4)
    ctx->pc = 0x1e9244u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294944312), GPR_U32(ctx, 5));
    // 0x1e9248: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e924c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1e924cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e9250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9254: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e9258: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e9258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e925c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1e9260: 0x461aa081  sub.s       $f2, $f20, $f26
    ctx->pc = 0x1e9260u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x1e9264: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e9264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9268: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1e9268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1e926c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e926cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e927c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x1e927cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x1e9280: 0x4603b8c0  add.s       $f3, $f23, $f3
    ctx->pc = 0x1e9280u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
    // 0x1e9284: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e9288: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e928c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9290: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9294: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1e9294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x1e9298: 0x4601c042  mul.s       $f1, $f24, $f1
    ctx->pc = 0x1e9298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x1e929c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1e929cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e92a0: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e92a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1e92a4: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1e92a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e92a8: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x1e92a8u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
    // 0x1e92ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e92acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e92b0: 0x4600a085  abs.s       $f2, $f20
    ctx->pc = 0x1e92b0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[20]);
    // 0x1e92b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e92b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e92b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e92bc: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x1e92bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x1e92c0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1e92c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1e92c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e92c8: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1e92c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x1e92cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e92ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e92d0: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e92d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e92d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e92d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e92d8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e92d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e92dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e92dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e92e0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1e92e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e92e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e92e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e92e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e92e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e92ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e92f0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1e92f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1e92f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e92f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e92fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e9300: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e9300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9304: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e9304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9308: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1e9308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1e930c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e930cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e9310: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e9310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e9314: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1E9314u;
    SET_GPR_U32(ctx, 31, 0x1E931Cu);
    ctx->pc = 0x1E9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9314u;
    // 0x1e9318: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1E9314u, 0x1E931Cu)) {
        return;
    }
    ctx->pc = 0x1E931Cu;
label_1e931c:
    // 0x1e931c: 0x4615cd42  mul.s       $f21, $f25, $f21
    ctx->pc = 0x1e931cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1e9320: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1e9320u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x1e9324: 0x4600ad45  abs.s       $f21, $f21
    ctx->pc = 0x1e9324u;
    ctx->f[21] = FPU_ABS_S(ctx->f[21]);
    // 0x1e9328: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1e9328u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1e932c: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x1e932cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x1e9330: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e9334: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e9334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e9338: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e933c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e933cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e9340: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1e9340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1e9344: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e9344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9348: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1e9348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e934c: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x1e934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1e9350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9358: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e9358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e935c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9360: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e9364: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e9364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e9368: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e9368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e936c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9370: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1e9374: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1e9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e9378: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e9378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e937c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1e937cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e9380: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e9380u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9384: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1e9388: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e9388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e938c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1e938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9390: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x1e9390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e9394: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1e9394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e9398: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x1e9398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e939c: 0x1660ff68  bnez        $s3, . + 4 + (-0x98 << 2)
    ctx->pc = 0x1E939Cu;
    {
        const bool branch_taken_0x1e939c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E939Cu;
        // 0x1e93a0: 0x8e31003c  lw          $s1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e939c) {
            ctx->pc = 0x1E9140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9140;
        }
    }
    ctx->pc = 0x1E93A4u;
label_1e93a4:
    // 0x1e93a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e93a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e93a8:
    // 0x1e93a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e93a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e93ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e93acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e93b0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e93b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e93b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e93b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e93b8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e93b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e93bc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e93bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e93c0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1e93c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e93c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e93c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e93c8: 0xc7bc00d0  lwc1        $f28, 0xD0($sp)
    ctx->pc = 0x1e93c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1e93cc: 0xc7bb00c8  lwc1        $f27, 0xC8($sp)
    ctx->pc = 0x1e93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1e93d0: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x1e93d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1e93d4: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x1e93d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1e93d8: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x1e93d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1e93dc: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x1e93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e93e0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1e93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e93e4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1e93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e93e8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1e93e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e93ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E93ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93ECu;
        // 0x1e93f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E93ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E93F4u;
    // 0x1e93f4: 0x0  nop
    ctx->pc = 0x1e93f4u;
    // NOP
    ctx->pc = 0x1e93f8u;
}
