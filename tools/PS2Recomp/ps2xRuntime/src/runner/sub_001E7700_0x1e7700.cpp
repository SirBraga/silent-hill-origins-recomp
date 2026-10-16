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

// Function: sub_001E7700
// Address: 0x1e7700 - 0x1e7aa8
void sub_001E7700_0x1e7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7700_0x1e7700");
#endif

    switch (ctx->pc) {
        case 0x1e7764u: goto label_1e7764;
        case 0x1e7774u: goto label_1e7774;
        case 0x1e7790u: goto label_1e7790;
        case 0x1e77a8u: goto label_1e77a8;
        case 0x1e77b8u: goto label_1e77b8;
        case 0x1e77c4u: goto label_1e77c4;
        case 0x1e7800u: goto label_1e7800;
        case 0x1e7808u: goto label_1e7808;
        case 0x1e7810u: goto label_1e7810;
        case 0x1e7828u: goto label_1e7828;
        case 0x1e783cu: goto label_1e783c;
        case 0x1e7848u: goto label_1e7848;
        case 0x1e7878u: goto label_1e7878;
        case 0x1e7888u: goto label_1e7888;
        case 0x1e7898u: goto label_1e7898;
        case 0x1e78b4u: goto label_1e78b4;
        case 0x1e78dcu: goto label_1e78dc;
        case 0x1e7908u: goto label_1e7908;
        case 0x1e7910u: goto label_1e7910;
        case 0x1e791cu: goto label_1e791c;
        case 0x1e7938u: goto label_1e7938;
        case 0x1e7944u: goto label_1e7944;
        case 0x1e7978u: goto label_1e7978;
        case 0x1e7988u: goto label_1e7988;
        case 0x1e7998u: goto label_1e7998;
        case 0x1e79bcu: goto label_1e79bc;
        case 0x1e79d8u: goto label_1e79d8;
        case 0x1e7a00u: goto label_1e7a00;
        case 0x1e7a08u: goto label_1e7a08;
        case 0x1e7a14u: goto label_1e7a14;
        case 0x1e7a20u: goto label_1e7a20;
        case 0x1e7a30u: goto label_1e7a30;
        case 0x1e7a40u: goto label_1e7a40;
        case 0x1e7a50u: goto label_1e7a50;
        case 0x1e7a60u: goto label_1e7a60;
        case 0x1e7a70u: goto label_1e7a70;
        case 0x1e7a78u: goto label_1e7a78;
        default: break;
    }

    ctx->pc = 0x1e7700u;

    // 0x1e7700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e7704: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e7704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e7708: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e770c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e7710: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1e7710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7714: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e7714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e7718: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x1e7718u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x1e771c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e771cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e7720: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x1e7720u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x1e7724: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e7724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e7728: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e7728u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e772c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e772cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e7730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e7730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7734: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e7734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e7738: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e7738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e773c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e7740: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x1e7740u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7748: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e774c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e7750: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1e7750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e7754: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1e7754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7758: 0x2470001f  addiu       $s0, $v1, 0x1F
    ctx->pc = 0x1e7758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e775c: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E775Cu;
    SET_GPR_U32(ctx, 31, 0x1E7764u);
    ctx->pc = 0x1E7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E775Cu;
    // 0x1e7760: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E775Cu, 0x1E7764u)) {
        return;
    }
    ctx->pc = 0x1E7764u;
label_1e7764:
    // 0x1e7764: 0x10b943  sra         $s7, $s0, 5
    ctx->pc = 0x1e7764u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 5));
    // 0x1e7768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e776c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E776Cu;
    SET_GPR_U32(ctx, 31, 0x1E7774u);
    ctx->pc = 0x1E7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E776Cu;
    // 0x1e7770: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E776Cu, 0x1E7774u)) {
        return;
    }
    ctx->pc = 0x1E7774u;
label_1e7774:
    // 0x1e7774: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e7774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e7778: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e7778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e777c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1e777cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e7780: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e7780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e7784: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e7784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e7788: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7788u;
    SET_GPR_U32(ctx, 31, 0x1E7790u);
    ctx->pc = 0x1E778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7788u;
    // 0x1e778c: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7788u, 0x1E7790u)) {
        return;
    }
    ctx->pc = 0x1E7790u;
label_1e7790:
    // 0x1e7790: 0xde4234c0  ld          $v0, 0x34C0($s2)
    ctx->pc = 0x1e7790u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 13504)));
    // 0x1e7794: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e7794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7798: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1e7798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1e779c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e77a0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E77A0u;
    SET_GPR_U32(ctx, 31, 0x1E77A8u);
    ctx->pc = 0x1E77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77A0u;
    // 0x1e77a4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E77A0u, 0x1E77A8u)) {
        return;
    }
    ctx->pc = 0x1E77A8u;
label_1e77a8:
    // 0x1e77a8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e77a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e77ac: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e77acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e77b0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E77B0u;
    SET_GPR_U32(ctx, 31, 0x1E77B8u);
    ctx->pc = 0x1E77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77B0u;
    // 0x1e77b4: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E77B0u, 0x1E77B8u)) {
        return;
    }
    ctx->pc = 0x1E77B8u;
label_1e77b8:
    // 0x1e77b8: 0x24050261  addiu       $a1, $zero, 0x261
    ctx->pc = 0x1e77b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x1e77bc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E77BCu;
    SET_GPR_U32(ctx, 31, 0x1E77C4u);
    ctx->pc = 0x1E77C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77BCu;
    // 0x1e77c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E77BCu, 0x1E77C4u)) {
        return;
    }
    ctx->pc = 0x1E77C4u;
label_1e77c4:
    // 0x1e77c4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e77c8: 0x3407cc80  ori         $a3, $zero, 0xCC80
    ctx->pc = 0x1e77c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52352);
    // 0x1e77cc: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x1e77ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x1e77d0: 0xde6534c8  ld          $a1, 0x34C8($s3)
    ctx->pc = 0x1e77d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 13512)));
    // 0x1e77d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e77d8: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x1e77d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e77dc: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x1e77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x1e77e0: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x1e77e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
    // 0x1e77e4: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x1e77e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x1e77e8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1e77e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e77ec: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1e77ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1e77f0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1e77f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1e77f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e77f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e77f8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E77F8u;
    SET_GPR_U32(ctx, 31, 0x1E7800u);
    ctx->pc = 0x1E77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77F8u;
    // 0x1e77fc: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E77F8u, 0x1E7800u)) {
        return;
    }
    ctx->pc = 0x1E7800u;
label_1e7800:
    // 0x1e7800: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E7800u;
    SET_GPR_U32(ctx, 31, 0x1E7808u);
    ctx->pc = 0x1E7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7800u;
    // 0x1e7804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E7800u, 0x1E7808u)) {
        return;
    }
    ctx->pc = 0x1E7808u;
label_1e7808:
    // 0x1e7808: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E7808u;
    SET_GPR_U32(ctx, 31, 0x1E7810u);
    ctx->pc = 0x1E780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7808u;
    // 0x1e780c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E7808u, 0x1E7810u)) {
        return;
    }
    ctx->pc = 0x1E7810u;
label_1e7810:
    // 0x1e7810: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e7810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e7814: 0x108283  sra         $s0, $s0, 10
    ctx->pc = 0x1e7814u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 10));
    // 0x1e7818: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e7818u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e781c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e7820: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7820u;
    SET_GPR_U32(ctx, 31, 0x1E7828u);
    ctx->pc = 0x1E7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7820u;
    // 0x1e7824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7820u, 0x1E7828u)) {
        return;
    }
    ctx->pc = 0x1E7828u;
label_1e7828:
    // 0x1e7828: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e7828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e782c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7830: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e7830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e7834: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7834u;
    SET_GPR_U32(ctx, 31, 0x1E783Cu);
    ctx->pc = 0x1E7838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7834u;
    // 0x1e7838: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7834u, 0x1E783Cu)) {
        return;
    }
    ctx->pc = 0x1E783Cu;
label_1e783c:
    // 0x1e783c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7840: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7840u;
    SET_GPR_U32(ctx, 31, 0x1E7848u);
    ctx->pc = 0x1E7844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7840u;
    // 0x1e7844: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7840u, 0x1E7848u)) {
        return;
    }
    ctx->pc = 0x1E7848u;
label_1e7848:
    // 0x1e7848: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e7848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e784c: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x1e784cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7850: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1e7850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e7854: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x1e7854u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e7858: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e785c: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E785Cu;
    {
        const bool branch_taken_0x1e785c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E785Cu;
        // 0x1e7860: 0x3c160010  lui         $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e785c) {
            ctx->pc = 0x1E78FCu;
            goto label_1e78fc;
        }
    }
    ctx->pc = 0x1E7864u;
    // 0x1e7864: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e7864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7868: 0x24120200  addiu       $s2, $zero, 0x200
    ctx->pc = 0x1e7868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e786c: 0x24110410  addiu       $s1, $zero, 0x410
    ctx->pc = 0x1e786cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1e7870: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e7874: 0x0  nop
    ctx->pc = 0x1e7874u;
    // NOP
label_1e7878:
    // 0x1e7878: 0x2162825  or          $a1, $s0, $s6
    ctx->pc = 0x1e7878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 22));
    // 0x1e787c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7880: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7880u;
    SET_GPR_U32(ctx, 31, 0x1E7888u);
    ctx->pc = 0x1E7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7880u;
    // 0x1e7884: 0x26100400  addiu       $s0, $s0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7880u, 0x1E7888u)) {
        return;
    }
    ctx->pc = 0x1E7888u;
label_1e7888:
    // 0x1e7888: 0x152a40  sll         $a1, $s5, 9
    ctx->pc = 0x1e7888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x1e788c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7890: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7890u;
    SET_GPR_U32(ctx, 31, 0x1E7898u);
    ctx->pc = 0x1E7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7890u;
    // 0x1e7894: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7890u, 0x1E7898u)) {
        return;
    }
    ctx->pc = 0x1E7898u;
label_1e7898:
    // 0x1e7898: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1e7898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e789c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e78a0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e78a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e78a4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1e78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e78a8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e78a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e78ac: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E78ACu;
    SET_GPR_U32(ctx, 31, 0x1E78B4u);
    ctx->pc = 0x1E78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78ACu;
    // 0x1e78b0: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E78ACu, 0x1E78B4u)) {
        return;
    }
    ctx->pc = 0x1E78B4u;
label_1e78b4:
    // 0x1e78b4: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x1e78b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e78b8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1e78b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e78bc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e78c0: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1e78c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1e78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e78c8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1e78c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1e78cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e78ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e78d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e78d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e78d4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E78D4u;
    SET_GPR_U32(ctx, 31, 0x1E78DCu);
    ctx->pc = 0x1E78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78D4u;
    // 0x1e78d8: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E78D4u, 0x1E78DCu)) {
        return;
    }
    ctx->pc = 0x1E78DCu;
label_1e78dc:
    // 0x1e78dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e78dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e78e0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1e78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e78e4: 0x263202a  slt         $a0, $s3, $v1
    ctx->pc = 0x1e78e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e78e8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e78e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e78ec: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1e78ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e78f0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1e78f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e78f4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1E78F4u;
    {
        const bool branch_taken_0x1e78f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78F4u;
        // 0x1e78f8: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78f4) {
            ctx->pc = 0x1E7878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7878;
        }
    }
    ctx->pc = 0x1E78FCu;
label_1e78fc:
    // 0x1e78fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e78fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7900: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E7900u;
    SET_GPR_U32(ctx, 31, 0x1E7908u);
    ctx->pc = 0x1E7904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7900u;
    // 0x1e7904: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E7900u, 0x1E7908u)) {
        return;
    }
    ctx->pc = 0x1E7908u;
label_1e7908:
    // 0x1e7908: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E7908u;
    SET_GPR_U32(ctx, 31, 0x1E7910u);
    ctx->pc = 0x1E790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7908u;
    // 0x1e790c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E7908u, 0x1E7910u)) {
        return;
    }
    ctx->pc = 0x1E7910u;
label_1e7910:
    // 0x1e7910: 0xdfc534c8  ld          $a1, 0x34C8($fp)
    ctx->pc = 0x1e7910u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 13512)));
    // 0x1e7914: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7914u;
    SET_GPR_U32(ctx, 31, 0x1E791Cu);
    ctx->pc = 0x1E7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7914u;
    // 0x1e7918: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7914u, 0x1E791Cu)) {
        return;
    }
    ctx->pc = 0x1E791Cu;
label_1e791c:
    // 0x1e791c: 0x3c022002  lui         $v0, 0x2002
    ctx->pc = 0x1e791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8194 << 16));
    // 0x1e7920: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x1e7920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1e7924: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x1e7924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x1e7928: 0x2e21025  or          $v0, $s7, $v0
    ctx->pc = 0x1e7928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1e792c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e7930: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7930u;
    SET_GPR_U32(ctx, 31, 0x1E7938u);
    ctx->pc = 0x1E7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7930u;
    // 0x1e7934: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7930u, 0x1E7938u)) {
        return;
    }
    ctx->pc = 0x1E7938u;
label_1e7938:
    // 0x1e7938: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e7938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e793c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E793Cu;
    SET_GPR_U32(ctx, 31, 0x1E7944u);
    ctx->pc = 0x1E7940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E793Cu;
    // 0x1e7940: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E793Cu, 0x1E7944u)) {
        return;
    }
    ctx->pc = 0x1E7944u;
label_1e7944:
    // 0x1e7944: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e7944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e7948: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e794c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e794cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e7950: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e7954: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e7954u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e7958: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e7958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e795c: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E795Cu;
    {
        const bool branch_taken_0x1e795c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E795Cu;
        // 0x1e7960: 0x3c160008  lui         $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e795c) {
            ctx->pc = 0x1E79F8u;
            goto label_1e79f8;
        }
    }
    ctx->pc = 0x1E7964u;
    // 0x1e7964: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1e7964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7968: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x1e7968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e796c: 0x24120108  addiu       $s2, $zero, 0x108
    ctx->pc = 0x1e796cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1e7970: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1e7970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e7974: 0x0  nop
    ctx->pc = 0x1e7974u;
    // NOP
label_1e7978:
    // 0x1e7978: 0x2162825  or          $a1, $s0, $s6
    ctx->pc = 0x1e7978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 22));
    // 0x1e797c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7980: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7980u;
    SET_GPR_U32(ctx, 31, 0x1E7988u);
    ctx->pc = 0x1E7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7980u;
    // 0x1e7984: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7980u, 0x1E7988u)) {
        return;
    }
    ctx->pc = 0x1E7988u;
label_1e7988:
    // 0x1e7988: 0x112a40  sll         $a1, $s1, 9
    ctx->pc = 0x1e7988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x1e798c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7990: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7990u;
    SET_GPR_U32(ctx, 31, 0x1E7998u);
    ctx->pc = 0x1E7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7990u;
    // 0x1e7994: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7990u, 0x1E7998u)) {
        return;
    }
    ctx->pc = 0x1E7998u;
label_1e7998:
    // 0x1e7998: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1e7998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e799c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e79a0: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1e79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1e79a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1e79a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e79a8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1e79a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1e79ac: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e79acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e79b0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e79b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e79b4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E79B4u;
    SET_GPR_U32(ctx, 31, 0x1E79BCu);
    ctx->pc = 0x1E79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79B4u;
    // 0x1e79b8: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E79B4u, 0x1E79BCu)) {
        return;
    }
    ctx->pc = 0x1E79BCu;
label_1e79bc:
    // 0x1e79bc: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1e79bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x1e79c0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1e79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e79c4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e79c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e79c8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e79cc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e79ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e79d0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E79D0u;
    SET_GPR_U32(ctx, 31, 0x1E79D8u);
    ctx->pc = 0x1E79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79D0u;
    // 0x1e79d4: 0x2652825  or          $a1, $s3, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E79D0u, 0x1E79D8u)) {
        return;
    }
    ctx->pc = 0x1E79D8u;
label_1e79d8:
    // 0x1e79d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e79dc: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e79dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e79e0: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x1e79e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e79e4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e79e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e79e8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e79e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e79ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e79ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e79f0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E79F0u;
    {
        const bool branch_taken_0x1e79f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79F0u;
        // 0x1e79f4: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79f0) {
            ctx->pc = 0x1E7978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7978;
        }
    }
    ctx->pc = 0x1E79F8u;
label_1e79f8:
    // 0x1e79f8: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E79F8u;
    SET_GPR_U32(ctx, 31, 0x1E7A00u);
    ctx->pc = 0x1E79FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79F8u;
    // 0x1e79fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E79F8u, 0x1E7A00u)) {
        return;
    }
    ctx->pc = 0x1E7A00u;
label_1e7a00:
    // 0x1e7a00: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E7A00u;
    SET_GPR_U32(ctx, 31, 0x1E7A08u);
    ctx->pc = 0x1E7A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A00u;
    // 0x1e7a04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E7A00u, 0x1E7A08u)) {
        return;
    }
    ctx->pc = 0x1E7A08u;
label_1e7a08:
    // 0x1e7a08: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x1e7a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1e7a0c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1E7A14u);
    ctx->pc = 0x1E7A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A0Cu;
    // 0x1e7a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7A0Cu, 0x1E7A14u)) {
        return;
    }
    ctx->pc = 0x1E7A14u;
label_1e7a14:
    // 0x1e7a14: 0xdfc534c8  ld          $a1, 0x34C8($fp)
    ctx->pc = 0x1e7a14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 13512)));
    // 0x1e7a18: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7A18u;
    SET_GPR_U32(ctx, 31, 0x1E7A20u);
    ctx->pc = 0x1E7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A18u;
    // 0x1e7a1c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7A18u, 0x1E7A20u)) {
        return;
    }
    ctx->pc = 0x1E7A20u;
label_1e7a20:
    // 0x1e7a20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7a24: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e7a28: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7A28u;
    SET_GPR_U32(ctx, 31, 0x1E7A30u);
    ctx->pc = 0x1E7A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A28u;
    // 0x1e7a2c: 0xdc4534c0  ld          $a1, 0x34C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7A28u, 0x1E7A30u)) {
        return;
    }
    ctx->pc = 0x1E7A30u;
label_1e7a30:
    // 0x1e7a30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7a34: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7a38: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7A38u;
    SET_GPR_U32(ctx, 31, 0x1E7A40u);
    ctx->pc = 0x1E7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A38u;
    // 0x1e7a3c: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7A38u, 0x1E7A40u)) {
        return;
    }
    ctx->pc = 0x1E7A40u;
label_1e7a40:
    // 0x1e7a40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7a44: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e7a48: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7A48u;
    SET_GPR_U32(ctx, 31, 0x1E7A50u);
    ctx->pc = 0x1E7A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A48u;
    // 0x1e7a4c: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7A48u, 0x1E7A50u)) {
        return;
    }
    ctx->pc = 0x1E7A50u;
label_1e7a50:
    // 0x1e7a50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7a54: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e7a58: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7A58u;
    SET_GPR_U32(ctx, 31, 0x1E7A60u);
    ctx->pc = 0x1E7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A58u;
    // 0x1e7a5c: 0xdc4534e0  ld          $a1, 0x34E0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7A58u, 0x1E7A60u)) {
        return;
    }
    ctx->pc = 0x1E7A60u;
label_1e7a60:
    // 0x1e7a60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7a64: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e7a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e7a68: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7A68u;
    SET_GPR_U32(ctx, 31, 0x1E7A70u);
    ctx->pc = 0x1E7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A68u;
    // 0x1e7a6c: 0xdc4534f0  ld          $a1, 0x34F0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7A68u, 0x1E7A70u)) {
        return;
    }
    ctx->pc = 0x1E7A70u;
label_1e7a70:
    // 0x1e7a70: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E7A70u;
    SET_GPR_U32(ctx, 31, 0x1E7A78u);
    ctx->pc = 0x1E7A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A70u;
    // 0x1e7a74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E7A70u, 0x1E7A78u)) {
        return;
    }
    ctx->pc = 0x1E7A78u;
label_1e7a78:
    // 0x1e7a78: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e7a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7a7c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e7a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7a80: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e7a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7a84: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e7a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7a88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e7a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7a8c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e7a8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7a90: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e7a90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7a94: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e7a94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7a98: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e7a98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AA0u;
        // 0x1e7aa4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7AA8u;
}
