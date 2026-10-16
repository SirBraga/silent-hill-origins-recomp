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

// Function: sub_00216678
// Address: 0x216678 - 0x216a80
void sub_00216678_0x216678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216678_0x216678");
#endif

    switch (ctx->pc) {
        case 0x2166b4u: goto label_2166b4;
        case 0x2166e0u: goto label_2166e0;
        case 0x216720u: goto label_216720;
        case 0x21673cu: goto label_21673c;
        case 0x216760u: goto label_216760;
        case 0x216774u: goto label_216774;
        case 0x21679cu: goto label_21679c;
        case 0x2167a4u: goto label_2167a4;
        case 0x2167b0u: goto label_2167b0;
        case 0x2167c8u: goto label_2167c8;
        case 0x2167d8u: goto label_2167d8;
        case 0x216800u: goto label_216800;
        case 0x216808u: goto label_216808;
        case 0x216878u: goto label_216878;
        case 0x21688cu: goto label_21688c;
        case 0x21689cu: goto label_21689c;
        case 0x2168e8u: goto label_2168e8;
        case 0x216900u: goto label_216900;
        case 0x216a48u: goto label_216a48;
        default: break;
    }

    ctx->pc = 0x216678u;

    // 0x216678: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x216678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21667c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216680: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x216680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x216684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216688: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x216688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x21668c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x21668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x216690: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x216690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x216694: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x216694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x216698: 0x3c16005c  lui         $s6, 0x5C
    ctx->pc = 0x216698u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)92 << 16));
    // 0x21669c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2166a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2166a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2166a4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2166a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2166a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2166a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2166ac: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2166ACu;
    SET_GPR_U32(ctx, 31, 0x2166B4u);
    ctx->pc = 0x2166B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166ACu;
    // 0x2166b0: 0x3c15005c  lui         $s5, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2166ACu, 0x2166B4u)) {
        return;
    }
    ctx->pc = 0x2166B4u;
label_2166b4:
    // 0x2166b4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2166b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2166b8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2166b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2166bc: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2166bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2166c0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x2166c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2166c4: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x2166c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2166c8: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x2166c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2166cc: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2166ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2166d0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2166D0u;
    {
        const bool branch_taken_0x2166d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166D0u;
        // 0x2166d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166d0) {
            ctx->pc = 0x21670Cu;
            goto label_21670c;
        }
    }
    ctx->pc = 0x2166D8u;
    // 0x2166d8: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x2166d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2166dc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2166dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2166e0:
    // 0x2166e0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2166e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2166e4: 0x9624002c  lhu         $a0, 0x2C($s1)
    ctx->pc = 0x2166e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2166e8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2166e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2166ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2166ECu;
    {
        const bool branch_taken_0x2166ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2166ec) {
            ctx->pc = 0x2166F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2166ECu;
            // 0x2166f0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2166F4u;
            goto label_2166f4;
        }
    }
    ctx->pc = 0x2166F4u;
label_2166f4:
    // 0x2166f4: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x2166f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x2166f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2166f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2166fc: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x2166fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x216700: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x216700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x216704: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x216704u;
    {
        const bool branch_taken_0x216704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216704u;
        // 0x216708: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216704) {
            ctx->pc = 0x2166E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2166e0;
        }
    }
    ctx->pc = 0x21670Cu;
label_21670c:
    // 0x21670c: 0x9624002c  lhu         $a0, 0x2C($s1)
    ctx->pc = 0x21670cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x216710: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x216710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216714: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x216714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x216718: 0xc080924  jal         func_202490
    ctx->pc = 0x216718u;
    SET_GPR_U32(ctx, 31, 0x216720u);
    ctx->pc = 0x21671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216718u;
    // 0x21671c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x216718u, 0x216720u)) {
        return;
    }
    ctx->pc = 0x216720u;
label_216720:
    // 0x216720: 0x9626002c  lhu         $a2, 0x2C($s1)
    ctx->pc = 0x216720u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x216724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21672c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x21672cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x216730: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x216730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x216734: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x216734u;
    SET_GPR_U32(ctx, 31, 0x21673Cu);
    ctx->pc = 0x216738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216734u;
    // 0x216738: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x216734u, 0x21673Cu)) {
        return;
    }
    ctx->pc = 0x21673Cu;
label_21673c:
    // 0x21673c: 0xc6c002b0  lwc1        $f0, 0x2B0($s6)
    ctx->pc = 0x21673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216740: 0x24074504  addiu       $a3, $zero, 0x4504
    ctx->pc = 0x216740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17668));
    // 0x216744: 0xc6a102b4  lwc1        $f1, 0x2B4($s5)
    ctx->pc = 0x216744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216748: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x21674c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x21674cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216750: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216750u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x216754: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x216754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x216758: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x216758u;
    SET_GPR_U32(ctx, 31, 0x216760u);
    ctx->pc = 0x21675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216758u;
    // 0x21675c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x216758u, 0x216760u)) {
        return;
    }
    ctx->pc = 0x216760u;
label_216760:
    // 0x216760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21676c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x21676Cu;
    SET_GPR_U32(ctx, 31, 0x216774u);
    ctx->pc = 0x216770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21676Cu;
    // 0x216770: 0xae220290  sw          $v0, 0x290($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x21676Cu, 0x216774u)) {
        return;
    }
    ctx->pc = 0x216774u;
label_216774:
    // 0x216774: 0xc6a002b4  lwc1        $f0, 0x2B4($s5)
    ctx->pc = 0x216774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21677c: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x21677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x216780: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x216784: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x216784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x216788: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x216788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21678c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x21678cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x216790: 0x3012  mflo        $a2
    ctx->pc = 0x216790u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x216794: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x216794u;
    SET_GPR_U32(ctx, 31, 0x21679Cu);
    ctx->pc = 0x216798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216794u;
    // 0x216798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x216794u, 0x21679Cu)) {
        return;
    }
    ctx->pc = 0x21679Cu;
label_21679c:
    // 0x21679c: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x21679Cu;
    SET_GPR_U32(ctx, 31, 0x2167A4u);
    ctx->pc = 0x2167A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21679Cu;
    // 0x2167a0: 0x8e240290  lw          $a0, 0x290($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x21679Cu, 0x2167A4u)) {
        return;
    }
    ctx->pc = 0x2167A4u;
label_2167a4:
    // 0x2167a4: 0x8e240290  lw          $a0, 0x290($s1)
    ctx->pc = 0x2167a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x2167a8: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x2167A8u;
    SET_GPR_U32(ctx, 31, 0x2167B0u);
    ctx->pc = 0x2167ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167A8u;
    // 0x2167ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x2167A8u, 0x2167B0u)) {
        return;
    }
    ctx->pc = 0x2167B0u;
label_2167b0:
    // 0x2167b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2167b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167b4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2167B4u;
    {
        const bool branch_taken_0x2167b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167B4u;
        // 0x2167b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167b4) {
            ctx->pc = 0x216800u;
            goto label_216800;
        }
    }
    ctx->pc = 0x2167BCu;
    // 0x2167bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2167bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167c0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2167C0u;
    SET_GPR_U32(ctx, 31, 0x2167C8u);
    ctx->pc = 0x2167C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167C0u;
    // 0x2167c4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2167C0u, 0x2167C8u)) {
        return;
    }
    ctx->pc = 0x2167C8u;
label_2167c8:
    // 0x2167c8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2167c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2167cc: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2167ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2167d0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2167d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2167d4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2167d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2167d8:
    // 0x2167d8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2167d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2167dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2167dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2167e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2167e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2167e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2167e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2167e8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x2167e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2167ec: 0x24630011  addiu       $v1, $v1, 0x11
    ctx->pc = 0x2167ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
    // 0x2167f0: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2167F0u;
    {
        const bool branch_taken_0x2167f0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2167F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167F0u;
        // 0x2167f4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167f0) {
            ctx->pc = 0x2167D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2167d8;
        }
    }
    ctx->pc = 0x2167F8u;
    // 0x2167f8: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x2167F8u;
    SET_GPR_U32(ctx, 31, 0x216800u);
    ctx->pc = 0x2167FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167F8u;
    // 0x2167fc: 0x8e240290  lw          $a0, 0x290($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x2167F8u, 0x216800u)) {
        return;
    }
    ctx->pc = 0x216800u;
label_216800:
    // 0x216800: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x216800u;
    SET_GPR_U32(ctx, 31, 0x216808u);
    ctx->pc = 0x216804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216800u;
    // 0x216804: 0x8e240290  lw          $a0, 0x290($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x216800u, 0x216808u)) {
        return;
    }
    ctx->pc = 0x216808u;
label_216808:
    // 0x216808: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x216808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x21680c: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x21680cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x216810: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x216810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x216814: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x216814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216818: 0xc6a002b4  lwc1        $f0, 0x2B4($s5)
    ctx->pc = 0x216818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21681c: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x21681cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x216820: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x216820u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x216824: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x216824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x216828: 0x0  nop
    ctx->pc = 0x216828u;
    // NOP
    // 0x21682c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x21682cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x216830: 0xc6c202b0  lwc1        $f2, 0x2B0($s6)
    ctx->pc = 0x216830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216834: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x216834u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216838: 0x0  nop
    ctx->pc = 0x216838u;
    // NOP
    // 0x21683c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21683cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x216840: 0x0  nop
    ctx->pc = 0x216840u;
    // NOP
    // 0x216844: 0x0  nop
    ctx->pc = 0x216844u;
    // NOP
    // 0x216848: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x216848u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x21684c: 0x0  nop
    ctx->pc = 0x21684cu;
    // NOP
    // 0x216850: 0x0  nop
    ctx->pc = 0x216850u;
    // NOP
    // 0x216854: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x216854u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x216858: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21685c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x21685cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x216860: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x216864: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x216864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x216868: 0x253a018  mult        $s4, $s2, $s3
    ctx->pc = 0x216868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x21686c: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x21686cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x216870: 0xc080924  jal         func_202490
    ctx->pc = 0x216870u;
    SET_GPR_U32(ctx, 31, 0x216878u);
    ctx->pc = 0x216874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216870u;
    // 0x216874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x216870u, 0x216878u)) {
        return;
    }
    ctx->pc = 0x216878u;
label_216878:
    // 0x216878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21687c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21687cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216884: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x216884u;
    SET_GPR_U32(ctx, 31, 0x21688Cu);
    ctx->pc = 0x216888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216884u;
    // 0x216888: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x216884u, 0x21688Cu)) {
        return;
    }
    ctx->pc = 0x21688Cu;
label_21688c:
    // 0x21688c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x216890: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x216890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216894: 0xc080924  jal         func_202490
    ctx->pc = 0x216894u;
    SET_GPR_U32(ctx, 31, 0x21689Cu);
    ctx->pc = 0x216898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216894u;
    // 0x216898: 0x2842018  mult        $a0, $s4, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x216894u, 0x21689Cu)) {
        return;
    }
    ctx->pc = 0x21689Cu;
label_21689c:
    // 0x21689c: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x21689cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
    // 0x2168a0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2168a0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168a4: 0xae20028c  sw          $zero, 0x28C($s1)
    ctx->pc = 0x2168a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 0));
    // 0x2168a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2168a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2168ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2168acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2168b0: 0xc6c002b0  lwc1        $f0, 0x2B0($s6)
    ctx->pc = 0x2168b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2168b4: 0xc6a102b4  lwc1        $f1, 0x2B4($s5)
    ctx->pc = 0x2168b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2168b8: 0x0  nop
    ctx->pc = 0x2168b8u;
    // NOP
    // 0x2168bc: 0x0  nop
    ctx->pc = 0x2168bcu;
    // NOP
    // 0x2168c0: 0x460010c3  div.s       $f3, $f2, $f0
    ctx->pc = 0x2168c0u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x2168c4: 0x0  nop
    ctx->pc = 0x2168c4u;
    // NOP
    // 0x2168c8: 0x0  nop
    ctx->pc = 0x2168c8u;
    // NOP
    // 0x2168cc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2168ccu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x2168d0: 0x1a600052  blez        $s3, . + 4 + (0x52 << 2)
    ctx->pc = 0x2168D0u;
    {
        const bool branch_taken_0x2168d0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2168D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168D0u;
        // 0x2168d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168d0) {
            ctx->pc = 0x216A1Cu;
            goto label_216a1c;
        }
    }
    ctx->pc = 0x2168D8u;
    // 0x2168d8: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x2168d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2168dc: 0x240f0018  addiu       $t7, $zero, 0x18
    ctx->pc = 0x2168dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2168e0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2168e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2168e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2168e8:
    // 0x2168e8: 0x1a400048  blez        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x2168E8u;
    {
        const bool branch_taken_0x2168e8 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2168ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168E8u;
        // 0x2168ec: 0x256e0001  addiu       $t6, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168e8) {
            ctx->pc = 0x216A0Cu;
            goto label_216a0c;
        }
    }
    ctx->pc = 0x2168F0u;
    // 0x2168f0: 0x18f4018  mult        $t0, $t4, $t7
    ctx->pc = 0x2168f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2168f4: 0x1904818  mult        $t1, $t4, $s0
    ctx->pc = 0x2168f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2168f8: 0x25a70014  addiu       $a3, $t5, 0x14
    ctx->pc = 0x2168f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
    // 0x2168fc: 0x0  nop
    ctx->pc = 0x2168fcu;
    // NOP
label_216900:
    // 0x216900: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x216900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x216904: 0x25ad0014  addiu       $t5, $t5, 0x14
    ctx->pc = 0x216904u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
    // 0x216908: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x216908u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x21690c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x21690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x216910: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x216910u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x216914: 0x8e230288  lw          $v1, 0x288($s1)
    ctx->pc = 0x216914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x216918: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x216918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x21691c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x21691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x216920: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x216920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x216924: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x216924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x216928: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x216928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x21692c: 0x8e230288  lw          $v1, 0x288($s1)
    ctx->pc = 0x21692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x216930: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x216930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x216934: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x216934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x216938: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x216938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21693c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x21693cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x216940: 0x152302a  slt         $a2, $t2, $s2
    ctx->pc = 0x216940u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x216944: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x216944u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x216948: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x216948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x21694c: 0x8e240288  lw          $a0, 0x288($s1)
    ctx->pc = 0x21694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x216950: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x216950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x216954: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x216954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x216958: 0x1631818  mult        $v1, $t3, $v1
    ctx->pc = 0x216958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21695c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x21695cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x216960: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x216960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x216964: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x216964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x216968: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x216968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x21696c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x21696cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x216970: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x216970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x216974: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x216974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x216978: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x216978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x21697c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x21697cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x216980: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x216980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x216984: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x216984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x216988: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x216988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x21698c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x21698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x216990: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x216990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x216994: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x216994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x216998: 0x8e230288  lw          $v1, 0x288($s1)
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x21699c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x21699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2169a0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2169a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2169a4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2169a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2169a8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2169a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2169ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2169acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2169b0: 0x0  nop
    ctx->pc = 0x2169b0u;
    // NOP
    // 0x2169b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2169b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2169b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2169b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2169bc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2169bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2169c0: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x2169c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x2169c4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2169c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2169c8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2169c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2169cc: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x2169ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2169d0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2169d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2169d4: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x2169d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x2169d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2169d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2169dc: 0x0  nop
    ctx->pc = 0x2169dcu;
    // NOP
    // 0x2169e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2169e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2169e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2169e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2169e8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2169e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2169ec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2169ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2169f0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2169f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2169f4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2169f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2169f8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2169f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2169fc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2169fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x216a00: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x216a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x216a04: 0x14c0ffbe  bnez        $a2, . + 4 + (-0x42 << 2)
    ctx->pc = 0x216A04u;
    {
        const bool branch_taken_0x216a04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x216A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A04u;
        // 0x216a08: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a04) {
            ctx->pc = 0x216900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216900;
        }
    }
    ctx->pc = 0x216A0Cu;
label_216a0c:
    // 0x216a0c: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x216a0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a10: 0x173102a  slt         $v0, $t3, $s3
    ctx->pc = 0x216a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x216a14: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x216A14u;
    {
        const bool branch_taken_0x216a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A14u;
        // 0x216a18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a14) {
            ctx->pc = 0x2168E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2168e8;
        }
    }
    ctx->pc = 0x216A1Cu;
label_216a1c:
    // 0x216a1c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x216a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x216a20: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x216a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x216a24: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x216a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x216a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a30: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x216a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x216a34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216a38: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x216a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
    // 0x216a3c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x216a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x216a40: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x216A40u;
    SET_GPR_U32(ctx, 31, 0x216A48u);
    ctx->pc = 0x216A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A40u;
    // 0x216a44: 0xac510080  sw          $s1, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x216A40u, 0x216A48u)) {
        return;
    }
    ctx->pc = 0x216A48u;
label_216a48:
    // 0x216a48: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x216a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x216a4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216a50: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x216a50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x216a54: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x216a54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x216a58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x216a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216a5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x216a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216a60: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x216a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216a64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x216a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216a68: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x216a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216a6c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x216a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216a70: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x216a70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216a78: 0x3e00008  jr          $ra
    ctx->pc = 0x216A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A78u;
        // 0x216a7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A80u;
}
