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

// Function: sub_00112FB8
// Address: 0x112fb8 - 0x1132f0
void sub_00112FB8_0x112fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112FB8_0x112fb8");
#endif

    switch (ctx->pc) {
        case 0x11315cu: goto label_11315c;
        case 0x113248u: goto label_113248;
        default: break;
    }

    ctx->pc = 0x112fb8u;

    // 0x112fb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x112fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x112fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fc0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x112fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x112fc4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x112fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x112fc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x112fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x112fcc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x112fccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fd0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x112fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x112fd4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x112fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x112fd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x112fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x112fdc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x112fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x112fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112fe4: 0x8ec301a8  lw          $v1, 0x1A8($s6)
    ctx->pc = 0x112fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 424)));
    // 0x112fe8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x112FE8u;
    {
        const bool branch_taken_0x112fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FE8u;
        // 0x112fec: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fe8) {
            ctx->pc = 0x112FF4u;
            goto label_112ff4;
        }
    }
    ctx->pc = 0x112FF0u;
    // 0x112ff0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x112ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_112ff4:
    // 0x112ff4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x112FF4u;
    {
        const bool branch_taken_0x112ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112ff4) {
            ctx->pc = 0x112FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112FF4u;
            // 0x112ff8: 0x8ec2002c  lw          $v0, 0x2C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113004u;
            goto label_113004;
        }
    }
    ctx->pc = 0x112FFCu;
    // 0x112ffc: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x112FFCu;
    {
        const bool branch_taken_0x112ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FFCu;
        // 0x113000: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ffc) {
            ctx->pc = 0x1132C4u;
            goto label_1132c4;
        }
    }
    ctx->pc = 0x113004u;
label_113004:
    // 0x113004: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x113004u;
    {
        const bool branch_taken_0x113004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113004u;
        // 0x113008: 0x26d40040  addiu       $s4, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113004) {
            ctx->pc = 0x1132B0u;
            goto label_1132b0;
        }
    }
    ctx->pc = 0x11300Cu;
    // 0x11300c: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x113010: 0xc6c30028  lwc1        $f3, 0x28($s6)
    ctx->pc = 0x113010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x113014: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x113014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x113018: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x113018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11301c: 0x26c50070  addiu       $a1, $s6, 0x70
    ctx->pc = 0x11301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x113020: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x113020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x113024: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x113024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x113028: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x113028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11302c: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x11302cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x113030: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x113030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x113034: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x113034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113038: 0xc6c10070  lwc1        $f1, 0x70($s6)
    ctx->pc = 0x113038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11303c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11303cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x113040: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x113040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x113044: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x113044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113048: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x113048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11304c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11304cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x113050: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x113050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x113054: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x113054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113058: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x113058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11305c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11305cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x113060: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x113060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x113064: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x113064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113068: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x113068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11306c: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x11306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x113070: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x113070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113074: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x113074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113078: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x113078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11307c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11307cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x113080: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x113080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x113084: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x113084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x113088: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x113088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11308c: 0xc6c10070  lwc1        $f1, 0x70($s6)
    ctx->pc = 0x11308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x113090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x113094: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x113094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x113098: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x113098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11309c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1130a0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1130a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1130a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1130a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1130a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1130a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1130ac: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1130acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1130b0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1130b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1130b4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1130b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1130b8: 0x26b00020  addiu       $s0, $s5, 0x20
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1130bc: 0xc6c30028  lwc1        $f3, 0x28($s6)
    ctx->pc = 0x1130bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1130c0: 0x26b10010  addiu       $s1, $s5, 0x10
    ctx->pc = 0x1130c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1130c4: 0x26c30060  addiu       $v1, $s6, 0x60
    ctx->pc = 0x1130c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x1130c8: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x1130c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1130cc: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1130ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1130d0: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1130d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1130d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1130d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1130d8: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x1130d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x1130dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1130dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1130e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1130e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1130e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1130e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1130e8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1130e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1130ec: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1130ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1130f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1130f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1130f4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1130f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1130f8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1130f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1130fc: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x1130fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113100: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x113100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x113104: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x113104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x113108: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x113108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11310c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x11310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113110: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x113110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x113114: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x113114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x113118: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x113118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x11311c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11311cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x113120: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x113120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113124: 0xc6c10060  lwc1        $f1, 0x60($s6)
    ctx->pc = 0x113124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x113128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11312c: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x11312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x113130: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x113130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113134: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x113134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113138: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x113138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11313c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11313cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x113140: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x113140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x113144: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x113144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113148: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x113148u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11314c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11314cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x113150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113154: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x113154u;
    SET_GPR_U32(ctx, 31, 0x11315Cu);
    ctx->pc = 0x113158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113154u;
    // 0x113158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x113154u, 0x11315Cu)) {
        return;
    }
    ctx->pc = 0x11315Cu;
label_11315c:
    // 0x11315c: 0xc6c30028  lwc1        $f3, 0x28($s6)
    ctx->pc = 0x11315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x113160: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x113160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x113164: 0x26c20050  addiu       $v0, $s6, 0x50
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x113168: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x113168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11316c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x11316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x113170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x113174: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x113174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x113178: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x113178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11317c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x11317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113180: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x113180u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x113184: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x113184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x113188: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x113188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11318c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113190: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x113190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x113194: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x113194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x113198: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x113198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11319c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11319cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1131a0: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x1131a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x1131a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1131a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1131a8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1131a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1131ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1131acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1131b0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1131b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1131b4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1131b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1131b8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1131b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1131bc: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x1131bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1131c0: 0xc6c10050  lwc1        $f1, 0x50($s6)
    ctx->pc = 0x1131c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1131c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1131c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1131c8: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x1131c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x1131cc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1131ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1131d0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1131d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1131d4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1131d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1131d8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1131d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1131dc: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x1131dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1131e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1131e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1131e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1131e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1131e8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1131e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1131ec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1131ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1131f0: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x1131f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1131f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1131f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1131f8: 0xc6a50020  lwc1        $f5, 0x20($s5)
    ctx->pc = 0x1131f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1131fc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1131fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x113200: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x113200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x113204: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x113204u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x113208: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x113208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x11320c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x11320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113210: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x113210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113214: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x113214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x113218: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x113218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11321c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11321cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x113220: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x113220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x113224: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x113224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113228: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x113228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11322c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x11322cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x113230: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x113230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x113234: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x113234u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x113238: 0xe6a30008  swc1        $f3, 0x8($s5)
    ctx->pc = 0x113238u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x11323c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113240: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x113240u;
    SET_GPR_U32(ctx, 31, 0x113248u);
    ctx->pc = 0x113244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113240u;
    // 0x113244: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x113240u, 0x113248u)) {
        return;
    }
    ctx->pc = 0x113248u;
label_113248:
    // 0x113248: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x113248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11324c: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x11324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x113250: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x113250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113254: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x113254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x113258: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x113258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11325c: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x11325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x113260: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x113260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x113264: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x113264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113268: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x113268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11326c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11326cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x113270: 0xe6a20010  swc1        $f2, 0x10($s5)
    ctx->pc = 0x113270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x113274: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x113274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113278: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x113278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11327c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11327cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x113280: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x113280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x113284: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x113284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113288: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x113288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11328c: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x11328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113290: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x113290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x113294: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x113294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x113298: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x113298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11329c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11329cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1132a0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1132a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1132a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1132A4u;
    {
        const bool branch_taken_0x1132a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132A4u;
        // 0x1132a8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132a4) {
            ctx->pc = 0x1132C8u;
            goto label_1132c8;
        }
    }
    ctx->pc = 0x1132ACu;
    // 0x1132ac: 0x0  nop
    ctx->pc = 0x1132acu;
    // NOP
label_1132b0:
    // 0x1132b0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1132b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1132b8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1132b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1132bc: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x1132bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1132c0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1132c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1132c4:
    // 0x1132c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1132c8:
    // 0x1132c8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1132c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1132cc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1132ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1132d0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1132d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1132d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1132d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1132d8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1132d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1132dc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1132dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132e0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1132e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1132e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1132e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1132e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1132E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1132ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132E8u;
        // 0x1132ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1132E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1132F0u;
}
