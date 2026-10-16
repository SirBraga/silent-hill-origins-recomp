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

// Function: sub_0014F938
// Address: 0x14f938 - 0x150018
void sub_0014F938_0x14f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F938_0x14f938");
#endif

    switch (ctx->pc) {
        case 0x14fa18u: goto label_14fa18;
        case 0x14fa4cu: goto label_14fa4c;
        case 0x14fa60u: goto label_14fa60;
        case 0x14fa80u: goto label_14fa80;
        case 0x14faccu: goto label_14facc;
        case 0x14fae8u: goto label_14fae8;
        case 0x14fc2cu: goto label_14fc2c;
        case 0x14fcacu: goto label_14fcac;
        case 0x14fcb8u: goto label_14fcb8;
        case 0x14fce8u: goto label_14fce8;
        case 0x14fd08u: goto label_14fd08;
        case 0x14fd40u: goto label_14fd40;
        case 0x14fdbcu: goto label_14fdbc;
        case 0x14fe00u: goto label_14fe00;
        case 0x14fe44u: goto label_14fe44;
        case 0x14fe54u: goto label_14fe54;
        case 0x14fe6cu: goto label_14fe6c;
        case 0x14fe7cu: goto label_14fe7c;
        case 0x14fea8u: goto label_14fea8;
        case 0x14fec0u: goto label_14fec0;
        case 0x14fee0u: goto label_14fee0;
        case 0x14fef0u: goto label_14fef0;
        case 0x14ff94u: goto label_14ff94;
        case 0x14ffacu: goto label_14ffac;
        case 0x14ffb8u: goto label_14ffb8;
        case 0x14ffe8u: goto label_14ffe8;
        default: break;
    }

    ctx->pc = 0x14f938u;

    // 0x14f938: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x14f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x14f93c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14f93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f940: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x14f940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x14f944: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x14f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x14f948: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14f948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f94c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x14f94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x14f950: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x14f950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x14f954: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x14f954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x14f958: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x14f958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x14f95c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x14f95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x14f960: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14f960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14f964: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x14f964u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x14f968: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x14f968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x14f96c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x14f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x14f970: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14F970u;
    {
        const bool branch_taken_0x14f970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F970u;
        // 0x14f974: 0x24c50008  addiu       $a1, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f970) {
            ctx->pc = 0x14F9F8u;
            goto label_14f9f8;
        }
    }
    ctx->pc = 0x14F978u;
    // 0x14f978: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x14f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x14f97c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F97Cu;
    {
        const bool branch_taken_0x14f97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f97c) {
            ctx->pc = 0x14F980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F97Cu;
            // 0x14f980: 0x8c830180  lw          $v1, 0x180($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F990u;
            goto label_14f990;
        }
    }
    ctx->pc = 0x14F984u;
    // 0x14f984: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x14f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x14f988: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x14f988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x14f98c: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x14f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_14f990:
    // 0x14f990: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F990u;
    {
        const bool branch_taken_0x14f990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f990) {
            ctx->pc = 0x14F994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F990u;
            // 0x14f994: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F9A4u;
            goto label_14f9a4;
        }
    }
    ctx->pc = 0x14F998u;
    // 0x14f998: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x14f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x14f99c: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x14f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x14f9a0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x14f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_14f9a4:
    // 0x14f9a4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F9A4u;
    {
        const bool branch_taken_0x14f9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14f9a4) {
            ctx->pc = 0x14F9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F9A4u;
            // 0x14f9a8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F9B8u;
            goto label_14f9b8;
        }
    }
    ctx->pc = 0x14F9ACu;
    // 0x14f9ac: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x14f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x14f9b0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x14f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x14f9b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14f9b8:
    // 0x14f9b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f9bc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x14f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x14f9c0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x14f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x14f9c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F9C4u;
    {
        const bool branch_taken_0x14f9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9C4u;
        // 0x14f9c8: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9c4) {
            ctx->pc = 0x14F9D4u;
            goto label_14f9d4;
        }
    }
    ctx->pc = 0x14F9CCu;
    // 0x14f9cc: 0xac440184  sw          $a0, 0x184($v0)
    ctx->pc = 0x14f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 4));
    // 0x14f9d0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x14f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_14f9d4:
    // 0x14f9d4: 0xac800184  sw          $zero, 0x184($a0)
    ctx->pc = 0x14f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 0));
    // 0x14f9d8: 0xac820180  sw          $v0, 0x180($a0)
    ctx->pc = 0x14f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 2));
    // 0x14f9dc: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x14f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x14f9e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14f9e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14f9e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x14f9ec: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x14f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x14f9f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14f9f4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x14f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_14f9f8:
    // 0x14f9f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14f9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9fc: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F9FCu;
    {
        const bool branch_taken_0x14f9fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f9fc) {
            ctx->pc = 0x14FA58u;
            goto label_14fa58;
        }
    }
    ctx->pc = 0x14FA04u;
    // 0x14fa04: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x14fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x14fa08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14fa08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fa0c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14FA0Cu;
    {
        const bool branch_taken_0x14fa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA0Cu;
        // 0x14fa10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa0c) {
            ctx->pc = 0x14FA3Cu;
            goto label_14fa3c;
        }
    }
    ctx->pc = 0x14FA14u;
    // 0x14fa14: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x14fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fa18:
    // 0x14fa18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fa1c: 0x0  nop
    ctx->pc = 0x14fa1cu;
    // NOP
    // 0x14fa20: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA20u;
    {
        const bool branch_taken_0x14fa20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fa20) {
            ctx->pc = 0x14FA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FA20u;
            // 0x14fa24: 0x8c840180  lw          $a0, 0x180($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FA34u;
            goto label_14fa34;
        }
    }
    ctx->pc = 0x14FA28u;
    // 0x14fa28: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14fa28u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14fa2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa30: 0x8c840180  lw          $a0, 0x180($a0)
    ctx->pc = 0x14fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_14fa34:
    // 0x14fa34: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14FA34u;
    {
        const bool branch_taken_0x14fa34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fa34) {
            ctx->pc = 0x14FA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FA34u;
            // 0x14fa38: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fa18;
        }
    }
    ctx->pc = 0x14FA3Cu;
label_14fa3c:
    // 0x14fa3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA3Cu;
    {
        const bool branch_taken_0x14fa3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA3Cu;
        // 0x14fa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa3c) {
            ctx->pc = 0x14FA50u;
            goto label_14fa50;
        }
    }
    ctx->pc = 0x14FA44u;
    // 0x14fa44: 0xc0538ae  jal         func_14E2B8
    ctx->pc = 0x14FA44u;
    SET_GPR_U32(ctx, 31, 0x14FA4Cu);
    ctx->pc = 0x14FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA44u;
    // 0x14fa48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E2B8u, 0x14FA44u, 0x14FA4Cu)) {
        return;
    }
    ctx->pc = 0x14FA4Cu;
label_14fa4c:
    // 0x14fa4c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x14fa4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14fa50:
    // 0x14fa50: 0x12400166  beqz        $s2, . + 4 + (0x166 << 2)
    ctx->pc = 0x14FA50u;
    {
        const bool branch_taken_0x14fa50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA50u;
        // 0x14fa54: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa50) {
            ctx->pc = 0x14FFECu;
            goto label_14ffec;
        }
    }
    ctx->pc = 0x14FA58u;
label_14fa58:
    // 0x14fa58: 0xc053be8  jal         func_14EFA0
    ctx->pc = 0x14FA58u;
    SET_GPR_U32(ctx, 31, 0x14FA60u);
    ctx->pc = 0x14FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA58u;
    // 0x14fa5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EFA0u, 0x14FA58u, 0x14FA60u)) {
        return;
    }
    ctx->pc = 0x14FA60u;
label_14fa60:
    // 0x14fa60: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x14fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x14fa64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14FA64u;
    {
        const bool branch_taken_0x14fa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA64u;
        // 0x14fa68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa64) {
            ctx->pc = 0x14FA70u;
            goto label_14fa70;
        }
    }
    ctx->pc = 0x14FA6Cu;
    // 0x14fa6c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x14fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_14fa70:
    // 0x14fa70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14fa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa78: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14FA78u;
    SET_GPR_U32(ctx, 31, 0x14FA80u);
    ctx->pc = 0x14FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA78u;
    // 0x14fa7c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14FA78u, 0x14FA80u)) {
        return;
    }
    ctx->pc = 0x14FA80u;
label_14fa80:
    // 0x14fa80: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x14fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x14fa84: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x14fa84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
    // 0x14fa88: 0x8c718668  lw          $s1, -0x7998($v1)
    ctx->pc = 0x14fa88u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x338668u));
    // 0x14fa8c: 0x25290298  addiu       $t1, $t1, 0x298
    ctx->pc = 0x14fa8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 664));
    // 0x14fa90: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14fa94: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x14fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x14fa98: 0x8e660070  lw          $a2, 0x70($s3)
    ctx->pc = 0x14fa98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x14fa9c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x14fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x14faa0: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x14faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x14faa4: 0x246302f0  addiu       $v1, $v1, 0x2F0
    ctx->pc = 0x14faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x14faa8: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x14faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x14faac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14faacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fab0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14fab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fab4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x14fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14fab8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14fabc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14fabcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fac0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x14fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x14fac4: 0xc0596ae  jal         func_165AB8
    ctx->pc = 0x14FAC4u;
    SET_GPR_U32(ctx, 31, 0x14FACCu);
    ctx->pc = 0x14FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FAC4u;
    // 0x14fac8: 0xafb2001c  sw          $s2, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x14FAC4u, 0x14FACCu)) {
        return;
    }
    ctx->pc = 0x14FACCu;
label_14facc:
    // 0x14facc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14faccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fad0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14fad4: 0x10400144  beqz        $v0, . + 4 + (0x144 << 2)
    ctx->pc = 0x14FAD4u;
    {
        const bool branch_taken_0x14fad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAD4u;
        // 0x14fad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fad4) {
            ctx->pc = 0x14FFE8u;
            goto label_14ffe8;
        }
    }
    ctx->pc = 0x14FADCu;
    // 0x14fadc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14fadcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14fae0: 0xc059614  jal         func_165850
    ctx->pc = 0x14FAE0u;
    SET_GPR_U32(ctx, 31, 0x14FAE8u);
    ctx->pc = 0x14FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FAE0u;
    // 0x14fae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165850u, 0x14FAE0u, 0x14FAE8u)) {
        return;
    }
    ctx->pc = 0x14FAE8u;
label_14fae8:
    // 0x14fae8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14fae8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14faec: 0x12c0013e  beqz        $s6, . + 4 + (0x13E << 2)
    ctx->pc = 0x14FAECu;
    {
        const bool branch_taken_0x14faec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAECu;
        // 0x14faf0: 0xae5000d8  sw          $s0, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14faec) {
            ctx->pc = 0x14FFE8u;
            goto label_14ffe8;
        }
    }
    ctx->pc = 0x14FAF4u;
    // 0x14faf4: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x14faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x14faf8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14faf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fafc: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x14fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x14fb00: 0x6a620017  ldl         $v0, 0x17($s3)
    ctx->pc = 0x14fb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14fb04: 0x6e620010  ldr         $v0, 0x10($s3)
    ctx->pc = 0x14fb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14fb08: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x14fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14fb0c: 0xb2420083  sdl         $v0, 0x83($s2)
    ctx->pc = 0x14fb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fb10: 0xb642007c  sdr         $v0, 0x7C($s2)
    ctx->pc = 0x14fb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fb14: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x14fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
    // 0x14fb18: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x14fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb1c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x14fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x14fb20: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x14fb24: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x14fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
    // 0x14fb28: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x14fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x14fb2c: 0xae430108  sw          $v1, 0x108($s2)
    ctx->pc = 0x14fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 3));
    // 0x14fb30: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x14fb34: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x14fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x14fb38: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x14fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x14fb3c: 0xae430110  sw          $v1, 0x110($s2)
    ctx->pc = 0x14fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 3));
    // 0x14fb40: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x14fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x14fb44: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x14fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
    // 0x14fb48: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x14fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14fb4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fb50: 0x0  nop
    ctx->pc = 0x14fb50u;
    // NOP
    // 0x14fb54: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14FB54u;
    {
        const bool branch_taken_0x14fb54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fb54) {
            ctx->pc = 0x14FB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB54u;
            // 0x14fb58: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB6Cu;
            goto label_14fb6c;
        }
    }
    ctx->pc = 0x14FB5Cu;
    // 0x14fb5c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14fb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x14fb60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14fb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fb64: 0x0  nop
    ctx->pc = 0x14fb64u;
    // NOP
    // 0x14fb68: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x14fb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_14fb6c:
    // 0x14fb6c: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x14fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x14fb70: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FB70u;
    {
        const bool branch_taken_0x14fb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb70) {
            ctx->pc = 0x14FB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB70u;
            // 0x14fb74: 0xc6600048  lwc1        $f0, 0x48($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB98u;
            goto label_14fb98;
        }
    }
    ctx->pc = 0x14FB78u;
    // 0x14fb78: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x14fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fb7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fb80: 0x0  nop
    ctx->pc = 0x14fb80u;
    // NOP
    // 0x14fb84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14fb84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fb88: 0x0  nop
    ctx->pc = 0x14fb88u;
    // NOP
    // 0x14fb8c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x14FB8Cu;
    {
        const bool branch_taken_0x14fb8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fb8c) {
            ctx->pc = 0x14FB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB8Cu;
            // 0x14fb90: 0xc674003c  lwc1        $f20, 0x3C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FBB4u;
            goto label_14fbb4;
        }
    }
    ctx->pc = 0x14FB94u;
    // 0x14fb94: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x14fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fb98:
    // 0x14fb98: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14fb98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14fb9c: 0x0  nop
    ctx->pc = 0x14fb9cu;
    // NOP
    // 0x14fba0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x14fba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fba4: 0x0  nop
    ctx->pc = 0x14fba4u;
    // NOP
    // 0x14fba8: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
    ctx->pc = 0x14FBA8u;
    {
        const bool branch_taken_0x14fba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBA8u;
        // 0x14fbac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fba8) {
            ctx->pc = 0x14FD20u;
            goto label_14fd20;
        }
    }
    ctx->pc = 0x14FBB0u;
    // 0x14fbb0: 0xc674003c  lwc1        $f20, 0x3C($s3)
    ctx->pc = 0x14fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14fbb4:
    // 0x14fbb4: 0x27a20084  addiu       $v0, $sp, 0x84
    ctx->pc = 0x14fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x14fbb8: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x14fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbbc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x14fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fbc0: 0x3c01411c  lui         $at, 0x411C
    ctx->pc = 0x14fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16668 << 16));
    // 0x14fbc4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x14fbc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x14fbc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14fbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fbcc: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x14fbccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x14fbd0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14fbd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14fbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14fbd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14fbd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14fbdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14fbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14fbe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14fbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fbe4: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x14fbe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x14fbe8: 0x0  nop
    ctx->pc = 0x14fbe8u;
    // NOP
    // 0x14fbec: 0x0  nop
    ctx->pc = 0x14fbecu;
    // NOP
    // 0x14fbf0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x14fbf0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x14fbf4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x14fbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x14fbf8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x14fbf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fbfc: 0x0  nop
    ctx->pc = 0x14fbfcu;
    // NOP
    // 0x14fc00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FC00u;
    {
        const bool branch_taken_0x14fc00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC00u;
        // 0x14fc04: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc00) {
            ctx->pc = 0x14FC0Cu;
            goto label_14fc0c;
        }
    }
    ctx->pc = 0x14FC08u;
    // 0x14fc08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14fc08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14fc0c:
    // 0x14fc0c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fc10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fc10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc14: 0x0  nop
    ctx->pc = 0x14fc14u;
    // NOP
    // 0x14fc18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FC18u;
    {
        const bool branch_taken_0x14fc18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC18u;
        // 0x14fc1c: 0x27a20088  addiu       $v0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc18) {
            ctx->pc = 0x14FC24u;
            goto label_14fc24;
        }
    }
    ctx->pc = 0x14FC20u;
    // 0x14fc20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14fc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14fc24:
    // 0x14fc24: 0xc09b360  jal         func_26CD80
    ctx->pc = 0x14FC24u;
    SET_GPR_U32(ctx, 31, 0x14FC2Cu);
    ctx->pc = 0x14FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC24u;
    // 0x14fc28: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CD80u, 0x14FC24u, 0x14FC2Cu)) {
        return;
    }
    ctx->pc = 0x14FC2Cu;
label_14fc2c:
    // 0x14fc2c: 0xc6620044  lwc1        $f2, 0x44($s3)
    ctx->pc = 0x14fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fc30: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x14fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x14fc34: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x14fc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x14fc38: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x14fc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x14fc3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14fc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fc40: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x14fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14fc44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14fc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14fc48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14fc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fc4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc50: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14fc50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14fc54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14fc54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14fc58: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x14fc58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x14fc5c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x14fc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc60: 0x0  nop
    ctx->pc = 0x14fc60u;
    // NOP
    // 0x14fc64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FC64u;
    {
        const bool branch_taken_0x14fc64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC64u;
        // 0x14fc68: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc64) {
            ctx->pc = 0x14FC70u;
            goto label_14fc70;
        }
    }
    ctx->pc = 0x14FC6Cu;
    // 0x14fc6c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14fc70:
    // 0x14fc70: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x14fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fc74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14fc74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc78: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x14fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc7c: 0x27a20094  addiu       $v0, $sp, 0x94
    ctx->pc = 0x14fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x14fc80: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14fc80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14fc84: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x14fc84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x14fc88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fc88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc8c: 0x0  nop
    ctx->pc = 0x14fc8cu;
    // NOP
    // 0x14fc90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FC90u;
    {
        const bool branch_taken_0x14fc90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC90u;
        // 0x14fc94: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc90) {
            ctx->pc = 0x14FC9Cu;
            goto label_14fc9c;
        }
    }
    ctx->pc = 0x14FC98u;
    // 0x14fc98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14fc98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14fc9c:
    // 0x14fc9c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fca0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x14fca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x14fca4: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x14FCA4u;
    SET_GPR_U32(ctx, 31, 0x14FCACu);
    ctx->pc = 0x14FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCA4u;
    // 0x14fca8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x14FCA4u, 0x14FCACu)) {
        return;
    }
    ctx->pc = 0x14FCACu;
label_14fcac:
    // 0x14fcac: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x14fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fcb0: 0xc09b164  jal         func_26C590
    ctx->pc = 0x14FCB0u;
    SET_GPR_U32(ctx, 31, 0x14FCB8u);
    ctx->pc = 0x14FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCB0u;
    // 0x14fcb4: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x14FCB0u, 0x14FCB8u)) {
        return;
    }
    ctx->pc = 0x14FCB8u;
label_14fcb8:
    // 0x14fcb8: 0x6a660027  ldl         $a2, 0x27($s3)
    ctx->pc = 0x14fcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14fcbc: 0x6e660020  ldr         $a2, 0x20($s3)
    ctx->pc = 0x14fcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14fcc0: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x14fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x14fcc4: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x14fcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fcc8: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x14fcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fccc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x14fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x14fcd0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x14fcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14fcd4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x14fcd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x14fcd8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x14fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x14fcdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fce0: 0xc05357c  jal         func_14D5F0
    ctx->pc = 0x14FCE0u;
    SET_GPR_U32(ctx, 31, 0x14FCE8u);
    ctx->pc = 0x14FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCE0u;
    // 0x14fce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D5F0u, 0x14FCE0u, 0x14FCE8u)) {
        return;
    }
    ctx->pc = 0x14FCE8u;
label_14fce8:
    // 0x14fce8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x14fce8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fcf0: 0xe6540074  swc1        $f20, 0x74($s2)
    ctx->pc = 0x14fcf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x14fcf4: 0xe6550130  swc1        $f21, 0x130($s2)
    ctx->pc = 0x14fcf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x14fcf8: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x14fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
    // 0x14fcfc: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x14fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x14fd00: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x14FD00u;
    {
        const bool branch_taken_0x14fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD00u;
        // 0x14fd04: 0xe6550078  swc1        $f21, 0x78($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd00) {
            ctx->pc = 0x14FE94u;
            goto label_14fe94;
        }
    }
    ctx->pc = 0x14FD08u;
label_14fd08:
    // 0x14fd08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14fd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14fd0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14fd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd10: 0x0  nop
    ctx->pc = 0x14fd10u;
    // NOP
    // 0x14fd14: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x14fd14u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x14fd18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14FD18u;
    {
        const bool branch_taken_0x14fd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD18u;
        // 0x14fd1c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd18) {
            ctx->pc = 0x14FD60u;
            goto label_14fd60;
        }
    }
    ctx->pc = 0x14FD20u;
label_14fd20:
    // 0x14fd20: 0x6a650027  ldl         $a1, 0x27($s3)
    ctx->pc = 0x14fd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14fd24: 0x6e650020  ldr         $a1, 0x20($s3)
    ctx->pc = 0x14fd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14fd28: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x14fd2c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x14fd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fd30: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x14fd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fd34: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x14fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x14fd38: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x14FD38u;
    SET_GPR_U32(ctx, 31, 0x14FD40u);
    ctx->pc = 0x14FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD38u;
    // 0x14fd3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x14FD38u, 0x14FD40u)) {
        return;
    }
    ctx->pc = 0x14FD40u;
label_14fd40:
    // 0x14fd40: 0x0  nop
    ctx->pc = 0x14fd40u;
    // NOP
    // 0x14fd44: 0x0  nop
    ctx->pc = 0x14fd44u;
    // NOP
    // 0x14fd48: 0x46000044  c1          0x44
    ctx->pc = 0x14fd48u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x14fd4c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x14fd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd50: 0x0  nop
    ctx->pc = 0x14fd50u;
    // NOP
    // 0x14fd54: 0x4501ffec  bc1t        . + 4 + (-0x14 << 2)
    ctx->pc = 0x14FD54u;
    {
        const bool branch_taken_0x14fd54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD54u;
        // 0x14fd58: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd54) {
            ctx->pc = 0x14FD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fd08;
        }
    }
    ctx->pc = 0x14FD5Cu;
    // 0x14fd5c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x14fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fd60:
    // 0x14fd60: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x14fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd64: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x14fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fd68: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14fd68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14fd6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14fd6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14fd70: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14fd70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14fd74: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x14fd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14fd78: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x14fd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14fd7c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x14fd7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14fd80: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x14fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x14fd84: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x14FD84u;
    {
        const bool branch_taken_0x14fd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD84u;
        // 0x14fd88: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd84) {
            ctx->pc = 0x14FE70u;
            goto label_14fe70;
        }
    }
    ctx->pc = 0x14FD8Cu;
    // 0x14fd8c: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x14fd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14fd90: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x14fd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14fd94: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x14fd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14fd98: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x14fd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fd9c: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x14fd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fda0: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x14fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x14fda4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14fda8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14fda8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdac: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x14fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x14fdb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14fdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdb4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x14FDB4u;
    SET_GPR_U32(ctx, 31, 0x14FDBCu);
    ctx->pc = 0x14FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDB4u;
    // 0x14fdb8: 0x3c11006c  lui         $s1, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x14FDB4u, 0x14FDBCu)) {
        return;
    }
    ctx->pc = 0x14FDBCu;
label_14fdbc:
    // 0x14fdbc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x14fdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x14fdc0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x14fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fdc4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x14fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fdc8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x14fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fdcc: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x14fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14fdd0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14fdd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14fdd4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x14fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fdd8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x14fdd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x14fddc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x14fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fde0: 0x8e22efac  lw          $v0, -0x1054($s1)
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963116)));
    // 0x14fde4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14fde4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14fde8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14fde8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14fdec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FDECu;
    {
        const bool branch_taken_0x14fdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDECu;
        // 0x14fdf0: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdec) {
            ctx->pc = 0x14FE0Cu;
            goto label_14fe0c;
        }
    }
    ctx->pc = 0x14FDF4u;
    // 0x14fdf4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14fdf8: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x14FDF8u;
    SET_GPR_U32(ctx, 31, 0x14FE00u);
    ctx->pc = 0x14FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDF8u;
    // 0x14fdfc: 0xc44c84f8  lwc1        $f12, -0x7B08($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x14FDF8u, 0x14FE00u)) {
        return;
    }
    ctx->pc = 0x14FE00u;
label_14fe00:
    // 0x14fe00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fe04: 0xe600efa8  swc1        $f0, -0x1058($s0)
    ctx->pc = 0x14fe04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294963112), bits); }
    // 0x14fe08: 0xae22efac  sw          $v0, -0x1054($s1)
    ctx->pc = 0x14fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963116), GPR_U32(ctx, 2));
label_14fe0c:
    // 0x14fe0c: 0xc600efa8  lwc1        $f0, -0x1058($s0)
    ctx->pc = 0x14fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294963112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14fe10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fe14: 0x0  nop
    ctx->pc = 0x14fe14u;
    // NOP
    // 0x14fe18: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x14FE18u;
    {
        const bool branch_taken_0x14fe18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE18u;
        // 0x14fe1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe18) {
            ctx->pc = 0x14FE74u;
            goto label_14fe74;
        }
    }
    ctx->pc = 0x14FE20u;
    // 0x14fe20: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x14fe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fe24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fe24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fe28: 0x0  nop
    ctx->pc = 0x14fe28u;
    // NOP
    // 0x14fe2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fe2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fe30: 0x0  nop
    ctx->pc = 0x14fe30u;
    // NOP
    // 0x14fe34: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14FE34u;
    {
        const bool branch_taken_0x14fe34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE34u;
        // 0x14fe38: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe34) {
            ctx->pc = 0x14FE4Cu;
            goto label_14fe4c;
        }
    }
    ctx->pc = 0x14FE3Cu;
    // 0x14fe3c: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x14FE3Cu;
    SET_GPR_U32(ctx, 31, 0x14FE44u);
    ctx->pc = 0x14FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE3Cu;
    // 0x14fe40: 0xc44c84f8  lwc1        $f12, -0x7B08($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x14FE3Cu, 0x14FE44u)) {
        return;
    }
    ctx->pc = 0x14FE44u;
label_14fe44:
    // 0x14fe44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FE44u;
    {
        const bool branch_taken_0x14fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE44u;
        // 0x14fe48: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe44) {
            ctx->pc = 0x14FE5Cu;
            goto label_14fe5c;
        }
    }
    ctx->pc = 0x14FE4Cu;
label_14fe4c:
    // 0x14fe4c: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x14FE4Cu;
    SET_GPR_U32(ctx, 31, 0x14FE54u);
    ctx->pc = 0x14FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE4Cu;
    // 0x14fe50: 0xc44c84f8  lwc1        $f12, -0x7B08($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x14FE4Cu, 0x14FE54u)) {
        return;
    }
    ctx->pc = 0x14FE54u;
label_14fe54:
    // 0x14fe54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14fe54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14fe58: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x14fe58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14fe5c:
    // 0x14fe5c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x14fe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x14fe60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14fe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe64: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x14FE64u;
    SET_GPR_U32(ctx, 31, 0x14FE6Cu);
    ctx->pc = 0x14FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE64u;
    // 0x14fe68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x14FE64u, 0x14FE6Cu)) {
        return;
    }
    ctx->pc = 0x14FE6Cu;
label_14fe6c:
    // 0x14fe6c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x14fe6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14fe70:
    // 0x14fe70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14fe74:
    // 0x14fe74: 0xc05357c  jal         func_14D5F0
    ctx->pc = 0x14FE74u;
    SET_GPR_U32(ctx, 31, 0x14FE7Cu);
    ctx->pc = 0x14FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE74u;
    // 0x14fe78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D5F0u, 0x14FE74u, 0x14FE7Cu)) {
        return;
    }
    ctx->pc = 0x14FE7Cu;
label_14fe7c:
    // 0x14fe7c: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x14fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe80: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x14fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x14fe84: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x14fe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x14fe88: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x14fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x14fe8c: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x14fe8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x14fe90: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x14fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_14fe94:
    // 0x14fe94: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x14fe98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14FE98u;
    {
        const bool branch_taken_0x14fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE98u;
        // 0x14fe9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe98) {
            ctx->pc = 0x14FECCu;
            goto label_14fecc;
        }
    }
    ctx->pc = 0x14FEA0u;
    // 0x14fea0: 0xc053c4e  jal         func_14F138
    ctx->pc = 0x14FEA0u;
    SET_GPR_U32(ctx, 31, 0x14FEA8u);
    ctx->pc = 0x14FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEA0u;
    // 0x14fea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F138u, 0x14FEA0u, 0x14FEA8u)) {
        return;
    }
    ctx->pc = 0x14FEA8u;
label_14fea8:
    // 0x14fea8: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x14fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x14feac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FEACu;
    {
        const bool branch_taken_0x14feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14feac) {
            ctx->pc = 0x14FEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FEACu;
            // 0x14feb0: 0x8e62007c  lw          $v0, 0x7C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FEC8u;
            goto label_14fec8;
        }
    }
    ctx->pc = 0x14FEB4u;
    // 0x14feb4: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x14feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x14feb8: 0xc053c4c  jal         func_14F130
    ctx->pc = 0x14FEB8u;
    SET_GPR_U32(ctx, 31, 0x14FEC0u);
    ctx->pc = 0x14FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEB8u;
    // 0x14febc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F130u, 0x14FEB8u, 0x14FEC0u)) {
        return;
    }
    ctx->pc = 0x14FEC0u;
label_14fec0:
    // 0x14fec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14FEC0u;
    {
        const bool branch_taken_0x14fec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEC0u;
        // 0x14fec4: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fec0) {
            ctx->pc = 0x14FED0u;
            goto label_14fed0;
        }
    }
    ctx->pc = 0x14FEC8u;
label_14fec8:
    // 0x14fec8: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x14fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_14fecc:
    // 0x14fecc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_14fed0:
    // 0x14fed0: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14fed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fed8: 0xc053c20  jal         func_14F080
    ctx->pc = 0x14FED8u;
    SET_GPR_U32(ctx, 31, 0x14FEE0u);
    ctx->pc = 0x14FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FED8u;
    // 0x14fedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F080u, 0x14FED8u, 0x14FEE0u)) {
        return;
    }
    ctx->pc = 0x14FEE0u;
label_14fee0:
    // 0x14fee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fee8: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x14FEE8u;
    SET_GPR_U32(ctx, 31, 0x14FEF0u);
    ctx->pc = 0x14FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEE8u;
    // 0x14feec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x14FEE8u, 0x14FEF0u)) {
        return;
    }
    ctx->pc = 0x14FEF0u;
label_14fef0:
    // 0x14fef0: 0xc660005c  lwc1        $f0, 0x5C($s3)
    ctx->pc = 0x14fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fef4: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x14fef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x14fef8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14fefc: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x14fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
    // 0x14ff00: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x14ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ff04: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x14ff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x14ff08: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x14ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ff0c: 0xe64100f0  swc1        $f1, 0xF0($s2)
    ctx->pc = 0x14ff0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x14ff10: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x14ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ff14: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x14ff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x14ff18: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x14ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ff1c: 0xe64100f8  swc1        $f1, 0xF8($s2)
    ctx->pc = 0x14ff1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x14ff20: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x14ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ff24: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x14ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x14ff28: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x14ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x14ff2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FF2Cu;
    {
        const bool branch_taken_0x14ff2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff2c) {
            ctx->pc = 0x14FF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF2Cu;
            // 0x14ff30: 0x8e630074  lw          $v1, 0x74($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF44u;
            goto label_14ff44;
        }
    }
    ctx->pc = 0x14FF34u;
    // 0x14ff34: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x14ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x14ff38: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14FF38u;
    {
        const bool branch_taken_0x14ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff38) {
            ctx->pc = 0x14FF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF38u;
            // 0x14ff3c: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF80u;
            goto label_14ff80;
        }
    }
    ctx->pc = 0x14FF40u;
    // 0x14ff40: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x14ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_14ff44:
    // 0x14ff44: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x14ff44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x14ff48: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14FF48u;
    {
        const bool branch_taken_0x14ff48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ff48) {
            ctx->pc = 0x14FF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF48u;
            // 0x14ff4c: 0xae430100  sw          $v1, 0x100($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF7Cu;
            goto label_14ff7c;
        }
    }
    ctx->pc = 0x14FF50u;
    // 0x14ff50: 0xc64100ec  lwc1        $f1, 0xEC($s2)
    ctx->pc = 0x14ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ff54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ff58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ff58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ff5c: 0x0  nop
    ctx->pc = 0x14ff5cu;
    // NOP
    // 0x14ff60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14ff60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ff64: 0x0  nop
    ctx->pc = 0x14ff64u;
    // NOP
    // 0x14ff68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FF68u;
    {
        const bool branch_taken_0x14ff68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF68u;
        // 0x14ff6c: 0xae400100  sw          $zero, 0x100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff68) {
            ctx->pc = 0x14FF74u;
            goto label_14ff74;
        }
    }
    ctx->pc = 0x14FF70u;
    // 0x14ff70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ff70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ff74:
    // 0x14ff74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FF74u;
    {
        const bool branch_taken_0x14ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF74u;
        // 0x14ff78: 0xae4200a8  sw          $v0, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff74) {
            ctx->pc = 0x14FF80u;
            goto label_14ff80;
        }
    }
    ctx->pc = 0x14FF7Cu;
label_14ff7c:
    // 0x14ff7c: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x14ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
label_14ff80:
    // 0x14ff80: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x14ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x14ff84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff88: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x14ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
    // 0x14ff8c: 0xc053c90  jal         func_14F240
    ctx->pc = 0x14FF8Cu;
    SET_GPR_U32(ctx, 31, 0x14FF94u);
    ctx->pc = 0x14FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF8Cu;
    // 0x14ff90: 0x8e65006c  lw          $a1, 0x6C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F240u, 0x14FF8Cu, 0x14FF94u)) {
        return;
    }
    ctx->pc = 0x14FF94u;
label_14ff94:
    // 0x14ff94: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x14ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x14ff98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff9c: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x14ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    // 0x14ffa0: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x14ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x14ffa4: 0xc053814  jal         func_14E050
    ctx->pc = 0x14FFA4u;
    SET_GPR_U32(ctx, 31, 0x14FFACu);
    ctx->pc = 0x14FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFA4u;
    // 0x14ffa8: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E050u, 0x14FFA4u, 0x14FFACu)) {
        return;
    }
    ctx->pc = 0x14FFACu;
label_14ffac:
    // 0x14ffac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffb0: 0xc053c88  jal         func_14F220
    ctx->pc = 0x14FFB0u;
    SET_GPR_U32(ctx, 31, 0x14FFB8u);
    ctx->pc = 0x14FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFB0u;
    // 0x14ffb4: 0x2665004c  addiu       $a1, $s3, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F220u, 0x14FFB0u, 0x14FFB8u)) {
        return;
    }
    ctx->pc = 0x14FFB8u;
label_14ffb8:
    // 0x14ffb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14ffbc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x14ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x14ffc0: 0x8c63efc0  lw          $v1, -0x1040($v1)
    ctx->pc = 0x14ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BEFC0u));
    // 0x14ffc4: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x14ffc8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14FFC8u;
    {
        const bool branch_taken_0x14ffc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFC8u;
        // 0x14ffcc: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffc8) {
            ctx->pc = 0x14FFECu;
            goto label_14ffec;
        }
    }
    ctx->pc = 0x14FFD0u;
    // 0x14ffd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ffd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FFD4u;
    {
        const bool branch_taken_0x14ffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFD4u;
        // 0x14ffd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffd4) {
            ctx->pc = 0x14FFECu;
            goto label_14ffec;
        }
    }
    ctx->pc = 0x14FFDCu;
    // 0x14ffdc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x14ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x14ffe0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14FFE0u;
    SET_GPR_U32(ctx, 31, 0x14FFE8u);
    ctx->pc = 0x14FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFE0u;
    // 0x14ffe4: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14FFE0u, 0x14FFE8u)) {
        return;
    }
    ctx->pc = 0x14FFE8u;
label_14ffe8:
    // 0x14ffe8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x14ffe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_14ffec:
    // 0x14ffec: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x14ffecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14fff0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x14fff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14fff4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x14fff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14fff8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x14fff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14fffc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x14fffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x150000: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x150000u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x150004: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x150004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150008: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x150008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15000c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x15000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150010: 0x3e00008  jr          $ra
    ctx->pc = 0x150010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150010u;
        // 0x150014: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150018u;
}
