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

// Function: sub_00115010
// Address: 0x115010 - 0x115360
void sub_00115010_0x115010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115010_0x115010");
#endif

    switch (ctx->pc) {
        case 0x11503cu: goto label_11503c;
        case 0x115058u: goto label_115058;
        case 0x115098u: goto label_115098;
        case 0x1150d8u: goto label_1150d8;
        case 0x115118u: goto label_115118;
        case 0x115198u: goto label_115198;
        case 0x1152dcu: goto label_1152dc;
        default: break;
    }

    ctx->pc = 0x115010u;

    // 0x115010: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x115010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x115014: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x115014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x115018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11501c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x11501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x115020: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x115020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x115024: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x115024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x115028: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x115028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x11502c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x11502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x115030: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115034: 0xc065aa0  jal         func_196A80
    ctx->pc = 0x115034u;
    SET_GPR_U32(ctx, 31, 0x11503Cu);
    ctx->pc = 0x115038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115034u;
    // 0x115038: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196A80u, 0x115034u, 0x11503Cu)) {
        return;
    }
    ctx->pc = 0x11503Cu;
label_11503c:
    // 0x11503c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11503cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115040: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x115040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x115044: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x115044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x115048: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11504c: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x11504cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x115050: 0xc080924  jal         func_202490
    ctx->pc = 0x115050u;
    SET_GPR_U32(ctx, 31, 0x115058u);
    ctx->pc = 0x115054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115050u;
    // 0x115054: 0xae220204  sw          $v0, 0x204($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x115050u, 0x115058u)) {
        return;
    }
    ctx->pc = 0x115058u;
label_115058:
    // 0x115058: 0x8e300204  lw          $s0, 0x204($s1)
    ctx->pc = 0x115058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x11505c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115060: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115068: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x115068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11506c: 0xe62101ec  swc1        $f1, 0x1EC($s1)
    ctx->pc = 0x11506cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 492), bits); }
    // 0x115070: 0xae220208  sw          $v0, 0x208($s1)
    ctx->pc = 0x115070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 2));
    // 0x115074: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x115074u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x115078: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x115078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11507c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11507cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115080: 0xe62001f0  swc1        $f0, 0x1F0($s1)
    ctx->pc = 0x115080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
    // 0x115084: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x115084u;
    {
        const bool branch_taken_0x115084 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x115088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115084u;
        // 0x115088: 0xe62001e8  swc1        $f0, 0x1E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115084) {
            ctx->pc = 0x1150B0u;
            goto label_1150b0;
        }
    }
    ctx->pc = 0x11508Cu;
    // 0x11508c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x115090: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x115090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x115094: 0x0  nop
    ctx->pc = 0x115094u;
    // NOP
label_115098:
    // 0x115098: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x115098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11509c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11509cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1150a0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1150a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1150a4: 0x0  nop
    ctx->pc = 0x1150a4u;
    // NOP
    // 0x1150a8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1150A8u;
    {
        const bool branch_taken_0x1150a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150a8) {
            ctx->pc = 0x115098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115098;
        }
    }
    ctx->pc = 0x1150B0u;
label_1150b0:
    // 0x1150b0: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1150b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1150b4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1150b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1150b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1150b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1150bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1150bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1150c0: 0x0  nop
    ctx->pc = 0x1150c0u;
    // NOP
    // 0x1150c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1150c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1150c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1150c8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1150cc: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1150CCu;
    {
        const bool branch_taken_0x1150cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1150D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150CCu;
        // 0x1150d0: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150cc) {
            ctx->pc = 0x115100u;
            goto label_115100;
        }
    }
    ctx->pc = 0x1150D4u;
    // 0x1150d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1150d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1150d8:
    // 0x1150d8: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x1150d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1150dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1150dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1150e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1150e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1150e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1150e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1150e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1150e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1150ec: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1150ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1150f0: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1150f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1150f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1150f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1150f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1150F8u;
    {
        const bool branch_taken_0x1150f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1150FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150F8u;
        // 0x1150fc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150f8) {
            ctx->pc = 0x1150D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1150d8;
        }
    }
    ctx->pc = 0x115100u;
label_115100:
    // 0x115100: 0x8e250204  lw          $a1, 0x204($s1)
    ctx->pc = 0x115100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x115104: 0x18a0008c  blez        $a1, . + 4 + (0x8C << 2)
    ctx->pc = 0x115104u;
    {
        const bool branch_taken_0x115104 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x115108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115104u;
        // 0x115108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115104) {
            ctx->pc = 0x115338u;
            goto label_115338;
        }
    }
    ctx->pc = 0x11510Cu;
    // 0x11510c: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x11510cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x115110: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x115110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115114: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x115114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115118:
    // 0x115118: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x115118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11511c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11511Cu;
    {
        const bool branch_taken_0x11511c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11511c) {
            ctx->pc = 0x115120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11511Cu;
            // 0x115120: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115124u;
            goto label_115124;
        }
    }
    ctx->pc = 0x115124u;
label_115124:
    // 0x115124: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x115124u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x115128: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11512c: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x11512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x115130: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x115130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115134: 0x2010  mfhi        $a0
    ctx->pc = 0x115134u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x115138: 0x952018  mult        $a0, $a0, $s5
    ctx->pc = 0x115138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11513c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x115140: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x115140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115144: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x115144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x115148: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x115148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11514c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x115150: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x115154: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x115154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115158: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x115158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11515c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115160: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x115160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x115164: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x115164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x115168: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x115168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11516c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115170: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x115170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x115174: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x115174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115178: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x115178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11517c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11517cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x115180: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x115180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x115184: 0x8e240208  lw          $a0, 0x208($s1)
    ctx->pc = 0x115184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x115188: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x115188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11518c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115190: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x115190u;
    SET_GPR_U32(ctx, 31, 0x115198u);
    ctx->pc = 0x115194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115190u;
    // 0x115194: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x115190u, 0x115198u)) {
        return;
    }
    ctx->pc = 0x115198u;
label_115198:
    // 0x115198: 0x8e240208  lw          $a0, 0x208($s1)
    ctx->pc = 0x115198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x11519c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1151a0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1151a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1151a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1151a8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1151a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1151ac: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1151acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1151b0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1151b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1151b4: 0xb083002b  sdl         $v1, 0x2B($a0)
    ctx->pc = 0x1151b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1151b8: 0xb4830024  sdr         $v1, 0x24($a0)
    ctx->pc = 0x1151b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1151bc: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1151bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1151c0: 0x8e230204  lw          $v1, 0x204($s1)
    ctx->pc = 0x1151c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1151c4: 0x8e250208  lw          $a1, 0x208($s1)
    ctx->pc = 0x1151c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x1151c8: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1151c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1151cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1151CCu;
    {
        const bool branch_taken_0x1151cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151cc) {
            ctx->pc = 0x1151D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1151CCu;
            // 0x1151d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1151D4u;
            goto label_1151d4;
        }
    }
    ctx->pc = 0x1151D4u;
label_1151d4:
    // 0x1151d4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1151d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1151d8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1151d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1151dc: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1151dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1151e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1151e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1151e4: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x1151e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1151e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1151e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1151ec: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1151ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1151f0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1151f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1151f4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1151f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1151f8: 0xb0a30037  sdl         $v1, 0x37($a1)
    ctx->pc = 0x1151f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1151fc: 0xb4a30030  sdr         $v1, 0x30($a1)
    ctx->pc = 0x1151fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115200: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x115200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
    // 0x115204: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x115204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x115208: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x115208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x11520c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x11520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x115210: 0x24640024  addiu       $a0, $v1, 0x24
    ctx->pc = 0x115210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x115214: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x115214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115218: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x115218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11521c: 0xc4640024  lwc1        $f4, 0x24($v1)
    ctx->pc = 0x11521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115220: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x115220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115224: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x115224u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x115228: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x115228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11522c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11522cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x115230: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x115230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115234: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x115234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x115238: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x115238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11523c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11523cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115240: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x115240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x115244: 0x8e220208  lw          $v0, 0x208($s1)
    ctx->pc = 0x115244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x115248: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x115248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11524c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x11524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x115250: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x115254: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x115254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115258: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x115258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11525c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x11525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115260: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x115260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115264: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x115264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x115268: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x115268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11526c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11526cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x115270: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x115270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115274: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x115274u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x115278: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x115278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11527c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11527cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115280: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x115280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x115284: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x115284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115288: 0xc62001ec  lwc1        $f0, 0x1EC($s1)
    ctx->pc = 0x115288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11528c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x11528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115290: 0xc62601f0  lwc1        $f6, 0x1F0($s1)
    ctx->pc = 0x115290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x115294: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x115294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115298: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x115298u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11529c: 0xc62301e8  lwc1        $f3, 0x1E8($s1)
    ctx->pc = 0x11529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1152a0: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x1152a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1152a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1152a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1152a8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1152a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1152ac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1152acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1152b0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1152b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1152b4: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x1152b4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x1152b8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1152b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1152bc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1152bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1152c0: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x1152c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1152c4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1152c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1152c8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1152c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1152cc: 0x8e240208  lw          $a0, 0x208($s1)
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x1152d0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1152d4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1152D4u;
    SET_GPR_U32(ctx, 31, 0x1152DCu);
    ctx->pc = 0x1152D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152D4u;
    // 0x1152d8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1152D4u, 0x1152DCu)) {
        return;
    }
    ctx->pc = 0x1152DCu;
label_1152dc:
    // 0x1152dc: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x1152dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x1152e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1152e4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1152e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1152e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1152e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1152ec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1152ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1152f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1152f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1152f4: 0x2673003c  addiu       $s3, $s3, 0x3C
    ctx->pc = 0x1152f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x1152f8: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1152f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1152fc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1152fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115300: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x115300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115304: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x115304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115308: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x115308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11530c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x11530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115310: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x115310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x115314: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x115314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115318: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x115318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11531c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11531cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x115320: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x115320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x115324: 0x8e250204  lw          $a1, 0x204($s1)
    ctx->pc = 0x115324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x115328: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x115328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11532c: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x11532Cu;
    {
        const bool branch_taken_0x11532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11532Cu;
        // 0x115330: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11532c) {
            ctx->pc = 0x115118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115118;
        }
    }
    ctx->pc = 0x115334u;
    // 0x115334: 0x0  nop
    ctx->pc = 0x115334u;
    // NOP
label_115338:
    // 0x115338: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x115338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11533c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x11533cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115340: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x115340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115344: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x115344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115348: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x115348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11534c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x11534cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115350: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x115350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115354: 0x3e00008  jr          $ra
    ctx->pc = 0x115354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115354u;
        // 0x115358: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11535Cu;
    // 0x11535c: 0x0  nop
    ctx->pc = 0x11535cu;
    // NOP
    ctx->pc = 0x115360u;
}
