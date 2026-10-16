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

// Function: sub_001E55B8
// Address: 0x1e55b8 - 0x1e59c8
void sub_001E55B8_0x1e55b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E55B8_0x1e55b8");
#endif

    switch (ctx->pc) {
        case 0x1e5684u: goto label_1e5684;
        case 0x1e56d0u: goto label_1e56d0;
        case 0x1e56dcu: goto label_1e56dc;
        case 0x1e56f8u: goto label_1e56f8;
        case 0x1e5714u: goto label_1e5714;
        case 0x1e5720u: goto label_1e5720;
        case 0x1e5730u: goto label_1e5730;
        case 0x1e5748u: goto label_1e5748;
        case 0x1e5778u: goto label_1e5778;
        case 0x1e5784u: goto label_1e5784;
        case 0x1e5798u: goto label_1e5798;
        case 0x1e57a0u: goto label_1e57a0;
        case 0x1e57acu: goto label_1e57ac;
        case 0x1e57b4u: goto label_1e57b4;
        case 0x1e57c0u: goto label_1e57c0;
        case 0x1e584cu: goto label_1e584c;
        case 0x1e5854u: goto label_1e5854;
        case 0x1e5860u: goto label_1e5860;
        case 0x1e5868u: goto label_1e5868;
        case 0x1e5870u: goto label_1e5870;
        case 0x1e587cu: goto label_1e587c;
        case 0x1e5888u: goto label_1e5888;
        case 0x1e5898u: goto label_1e5898;
        case 0x1e58a4u: goto label_1e58a4;
        case 0x1e596cu: goto label_1e596c;
        case 0x1e5980u: goto label_1e5980;
        case 0x1e5988u: goto label_1e5988;
        case 0x1e5994u: goto label_1e5994;
        default: break;
    }

    ctx->pc = 0x1e55b8u;

    // 0x1e55b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e55b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e55bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e55bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e55c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e55c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55c4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e55c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e55c8: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1e55c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1e55cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e55ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e55d0: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x1e55d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
    // 0x1e55d4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1e55d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1e55d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e55d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e55dc: 0x3c0a0034  lui         $t2, 0x34
    ctx->pc = 0x1e55dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)52 << 16));
    // 0x1e55e0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1e55e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1e55e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e55e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e55e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e55e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e55ec: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1e55ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x1e55f0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1e55f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e55f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e55f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e55f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e55fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e5600: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1e5604: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e5604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e5608: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e5608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e560c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e560cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1e5610: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1e5610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1e5614: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1e5614u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x1e5618: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1e561c: 0xe441e758  swc1        $f1, -0x18A8($v0)
    ctx->pc = 0x1e561cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E758u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E758u, _value); } while (0); }
    // 0x1e5620: 0xe460e75c  swc1        $f0, -0x18A4($v1)
    ctx->pc = 0x1e5620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E75Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E75Cu, _value); } while (0); }
    // 0x1e5624: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e5624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e5628: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e5628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e562c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1e562cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1e5630: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e5634: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e5634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e5638: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1e5638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e563c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e5640: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e5640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5644: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e5644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e5648: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e5648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e564c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1e564cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5650: 0xe4c2e760  swc1        $f2, -0x18A0($a2)
    ctx->pc = 0x1e5650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E760u, _value); } while (0); }
    // 0x1e5654: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1e5654u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5658: 0xe560e748  swc1        $f0, -0x18B8($t3)
    ctx->pc = 0x1e5658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E748u, _value); } while (0); }
    // 0x1e565c: 0xe540e74c  swc1        $f0, -0x18B4($t2)
    ctx->pc = 0x1e565cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E74Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E74Cu, _value); } while (0); }
    // 0x1e5660: 0xe520e750  swc1        $f0, -0x18B0($t1)
    ctx->pc = 0x1e5660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E750u, _value); } while (0); }
    // 0x1e5664: 0xe500e754  swc1        $f0, -0x18AC($t0)
    ctx->pc = 0x1e5664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E754u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E754u, _value); } while (0); }
    // 0x1e5668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e566c: 0xe683e740  swc1        $f3, -0x18C0($s4)
    ctx->pc = 0x1e566cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E740u, _value); } while (0); }
    // 0x1e5670: 0xe664e744  swc1        $f4, -0x18BC($s3)
    ctx->pc = 0x1e5670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x33E744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E744u, _value); } while (0); }
    // 0x1e5674: 0xace0e764  sw          $zero, -0x189C($a3)
    ctx->pc = 0x1e5674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x33E764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E764u, _value); } while (0);
    // 0x1e5678: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e5678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e567c: 0xc058598  jal         func_161660
    ctx->pc = 0x1E567Cu;
    SET_GPR_U32(ctx, 31, 0x1E5684u);
    ctx->pc = 0x1E5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E567Cu;
    // 0x1e5680: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x161660u, 0x1E567Cu, 0x1E5684u)) {
        return;
    }
    ctx->pc = 0x1E5684u;
label_1e5684:
    // 0x1e5684: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1e5684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e5688: 0x3c072402  lui         $a3, 0x2402
    ctx->pc = 0x1e5688u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9218 << 16));
    // 0x1e568c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e5690: 0x3406c000  ori         $a2, $zero, 0xC000
    ctx->pc = 0x1e5690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1e5694: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x1e5694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x1e5698: 0xde1134c8  ld          $s1, 0x34C8($s0)
    ctx->pc = 0x1e5698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 13512)));
    // 0x1e569c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e56a0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1e56a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e56a4: 0x323101ff  andi        $s1, $s1, 0x1FF
    ctx->pc = 0x1e56a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)511);
    // 0x1e56a8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1e56a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1e56ac: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1e56acu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1e56b0: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x1e56b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1e56b4: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1e56b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e56b8: 0x24b0001f  addiu       $s0, $a1, 0x1F
    ctx->pc = 0x1e56b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x1e56bc: 0xa3800b  movn        $s0, $a1, $v1
    ctx->pc = 0x1e56bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5));
    // 0x1e56c0: 0x101143  sra         $v0, $s0, 5
    ctx->pc = 0x1e56c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 5));
    // 0x1e56c4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1e56c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1e56c8: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E56C8u;
    SET_GPR_U32(ctx, 31, 0x1E56D0u);
    ctx->pc = 0x1E56CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E56C8u;
    // 0x1e56cc: 0x46b025  or          $s6, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E56C8u, 0x1E56D0u)) {
        return;
    }
    ctx->pc = 0x1E56D0u;
label_1e56d0:
    // 0x1e56d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e56d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56d4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E56D4u;
    SET_GPR_U32(ctx, 31, 0x1E56DCu);
    ctx->pc = 0x1E56D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E56D4u;
    // 0x1e56d8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E56D4u, 0x1E56DCu)) {
        return;
    }
    ctx->pc = 0x1E56DCu;
label_1e56dc:
    // 0x1e56dc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1e56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e56e0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e56e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e56e4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1e56e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e56e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e56e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e56ec: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e56ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e56f0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E56F0u;
    SET_GPR_U32(ctx, 31, 0x1E56F8u);
    ctx->pc = 0x1E56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E56F0u;
    // 0x1e56f4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E56F0u, 0x1E56F8u)) {
        return;
    }
    ctx->pc = 0x1E56F8u;
label_1e56f8:
    // 0x1e56f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e56fc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e56fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5700: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x1e5700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x1e5704: 0xdc4534c0  ld          $a1, 0x34C0($v0)
    ctx->pc = 0x1e5704u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13504)));
    // 0x1e5708: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e5708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e570c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E570Cu;
    SET_GPR_U32(ctx, 31, 0x1E5714u);
    ctx->pc = 0x1E5710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E570Cu;
    // 0x1e5710: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E570Cu, 0x1E5714u)) {
        return;
    }
    ctx->pc = 0x1E5714u;
label_1e5714:
    // 0x1e5714: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e5714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e5718: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5718u;
    SET_GPR_U32(ctx, 31, 0x1E5720u);
    ctx->pc = 0x1E571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5718u;
    // 0x1e571c: 0x24050058  addiu       $a1, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5718u, 0x1E5720u)) {
        return;
    }
    ctx->pc = 0x1E5720u;
label_1e5720:
    // 0x1e5720: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e5720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e5724: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e5724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e5728: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5728u;
    SET_GPR_U32(ctx, 31, 0x1E5730u);
    ctx->pc = 0x1E572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5728u;
    // 0x1e572c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5728u, 0x1E5730u)) {
        return;
    }
    ctx->pc = 0x1E5730u;
label_1e5730:
    // 0x1e5730: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e5730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e5734: 0x108283  sra         $s0, $s0, 10
    ctx->pc = 0x1e5734u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 10));
    // 0x1e5738: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e5738u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e573c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e5740: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5740u;
    SET_GPR_U32(ctx, 31, 0x1E5748u);
    ctx->pc = 0x1E5744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5740u;
    // 0x1e5744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5740u, 0x1E5748u)) {
        return;
    }
    ctx->pc = 0x1E5748u;
label_1e5748:
    // 0x1e5748: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1e5748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e574c: 0x3405cd00  ori         $a1, $zero, 0xCD00
    ctx->pc = 0x1e574cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52480);
    // 0x1e5750: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x1e5750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x1e5754: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e5754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e5758: 0x243902a  slt         $s2, $s2, $v1
    ctx->pc = 0x1e5758u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e575c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1e575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e5760: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x1e5760u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e5764: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1e5764u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e5768: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1e5768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1e576c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1e576cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1e5770: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5770u;
    SET_GPR_U32(ctx, 31, 0x1E5778u);
    ctx->pc = 0x1E5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5770u;
    // 0x1e5774: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5770u, 0x1E5778u)) {
        return;
    }
    ctx->pc = 0x1E5778u;
label_1e5778:
    // 0x1e5778: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e5778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e577c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E577Cu;
    SET_GPR_U32(ctx, 31, 0x1E5784u);
    ctx->pc = 0x1E5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E577Cu;
    // 0x1e5780: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E577Cu, 0x1E5784u)) {
        return;
    }
    ctx->pc = 0x1E5784u;
label_1e5784:
    // 0x1e5784: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e5784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e5788: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e5788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e578c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e578cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e5790: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5790u;
    SET_GPR_U32(ctx, 31, 0x1E5798u);
    ctx->pc = 0x1E5794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5790u;
    // 0x1e5794: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5790u, 0x1E5798u)) {
        return;
    }
    ctx->pc = 0x1E5798u;
label_1e5798:
    // 0x1e5798: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E5798u;
    SET_GPR_U32(ctx, 31, 0x1E57A0u);
    ctx->pc = 0x1E579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5798u;
    // 0x1e579c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E5798u, 0x1E57A0u)) {
        return;
    }
    ctx->pc = 0x1E57A0u;
label_1e57a0:
    // 0x1e57a0: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1e57a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1e57a4: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x1E57A4u;
    SET_GPR_U32(ctx, 31, 0x1E57ACu);
    ctx->pc = 0x1E57A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57A4u;
    // 0x1e57a8: 0x24050101  addiu       $a1, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x1E57A4u, 0x1E57ACu)) {
        return;
    }
    ctx->pc = 0x1E57ACu;
label_1e57ac:
    // 0x1e57ac: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E57ACu;
    SET_GPR_U32(ctx, 31, 0x1E57B4u);
    ctx->pc = 0x1E57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57ACu;
    // 0x1e57b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E57ACu, 0x1E57B4u)) {
        return;
    }
    ctx->pc = 0x1E57B4u;
label_1e57b4:
    // 0x1e57b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e57b8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E57B8u;
    SET_GPR_U32(ctx, 31, 0x1E57C0u);
    ctx->pc = 0x1E57BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57B8u;
    // 0x1e57bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E57B8u, 0x1E57C0u)) {
        return;
    }
    ctx->pc = 0x1E57C0u;
label_1e57c0:
    // 0x1e57c0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1e57c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1e57c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e57c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e57c8: 0xc680e740  lwc1        $f0, -0x18C0($s4)
    ctx->pc = 0x1e57c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294960960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e57cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e57ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e57d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e57d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e57d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e57d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e57d8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E57D8u;
    {
        const bool branch_taken_0x1e57d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1E57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57D8u;
        // 0x1e57dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57d8) {
            ctx->pc = 0x1E57F0u;
            goto label_1e57f0;
        }
    }
    ctx->pc = 0x1E57E0u;
    // 0x1e57e0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1e57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e57e4: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1e57e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e57e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E57E8u;
    {
        const bool branch_taken_0x1e57e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57E8u;
        // 0x1e57ec: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57e8) {
            ctx->pc = 0x1E57F4u;
            goto label_1e57f4;
        }
    }
    ctx->pc = 0x1E57F0u;
label_1e57f0:
    // 0x1e57f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e57f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e57f4:
    // 0x1e57f4: 0xc660e744  lwc1        $f0, -0x18BC($s3)
    ctx->pc = 0x1e57f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294960964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e57f8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1e57f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1e57fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e57fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5800: 0x0  nop
    ctx->pc = 0x1e5800u;
    // NOP
    // 0x1e5804: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e5804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e5808: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5808u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e580c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x1e580cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1e5810: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5810u;
    {
        const bool branch_taken_0x1e5810 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1E5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5810u;
        // 0x1e5814: 0x2a620100  slti        $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5810) {
            ctx->pc = 0x1E5824u;
            goto label_1e5824;
        }
    }
    ctx->pc = 0x1E5818u;
    // 0x1e5818: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1e5818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e581c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E581Cu;
    {
        const bool branch_taken_0x1e581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E581Cu;
        // 0x1e5820: 0x262180b  movn        $v1, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e581c) {
            ctx->pc = 0x1E5828u;
            goto label_1e5828;
        }
    }
    ctx->pc = 0x1E5824u;
label_1e5824:
    // 0x1e5824: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5828:
    // 0x1e5828: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e5828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e582c: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x1e582cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x1e5830: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x1e5830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
    // 0x1e5834: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e5834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e5838: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1e5838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1e583c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1e583cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e5840: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e5840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e5844: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5844u;
    SET_GPR_U32(ctx, 31, 0x1E584Cu);
    ctx->pc = 0x1E5848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5844u;
    // 0x1e5848: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5844u, 0x1E584Cu)) {
        return;
    }
    ctx->pc = 0x1E584Cu;
label_1e584c:
    // 0x1e584c: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E584Cu;
    SET_GPR_U32(ctx, 31, 0x1E5854u);
    ctx->pc = 0x1E5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E584Cu;
    // 0x1e5850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E584Cu, 0x1E5854u)) {
        return;
    }
    ctx->pc = 0x1E5854u;
label_1e5854:
    // 0x1e5854: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1e5854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1e5858: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x1E5858u;
    SET_GPR_U32(ctx, 31, 0x1E5860u);
    ctx->pc = 0x1E585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5858u;
    // 0x1e585c: 0x24050101  addiu       $a1, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x1E5858u, 0x1E5860u)) {
        return;
    }
    ctx->pc = 0x1E5860u;
label_1e5860:
    // 0x1e5860: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E5860u;
    SET_GPR_U32(ctx, 31, 0x1E5868u);
    ctx->pc = 0x1E5864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5860u;
    // 0x1e5864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E5860u, 0x1E5868u)) {
        return;
    }
    ctx->pc = 0x1E5868u;
label_1e5868:
    // 0x1e5868: 0xc079486  jal         func_1E5218
    ctx->pc = 0x1E5868u;
    SET_GPR_U32(ctx, 31, 0x1E5870u);
    ctx->pc = 0x1E586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5868u;
    // 0x1e586c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E5218u, 0x1E5868u, 0x1E5870u)) {
        return;
    }
    ctx->pc = 0x1E5870u;
label_1e5870:
    // 0x1e5870: 0xdee534c8  ld          $a1, 0x34C8($s7)
    ctx->pc = 0x1e5870u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 13512)));
    // 0x1e5874: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5874u;
    SET_GPR_U32(ctx, 31, 0x1E587Cu);
    ctx->pc = 0x1E5878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5874u;
    // 0x1e5878: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5874u, 0x1E587Cu)) {
        return;
    }
    ctx->pc = 0x1E587Cu;
label_1e587c:
    // 0x1e587c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e587cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5880: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5880u;
    SET_GPR_U32(ctx, 31, 0x1E5888u);
    ctx->pc = 0x1E5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5880u;
    // 0x1e5884: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5880u, 0x1E5888u)) {
        return;
    }
    ctx->pc = 0x1E5888u;
label_1e5888:
    // 0x1e5888: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e5888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e588c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e588cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e5890: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5890u;
    SET_GPR_U32(ctx, 31, 0x1E5898u);
    ctx->pc = 0x1E5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5890u;
    // 0x1e5894: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5890u, 0x1E5898u)) {
        return;
    }
    ctx->pc = 0x1E5898u;
label_1e5898:
    // 0x1e5898: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x1e5898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x1e589c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E589Cu;
    SET_GPR_U32(ctx, 31, 0x1E58A4u);
    ctx->pc = 0x1E58A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E589Cu;
    // 0x1e58a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E589Cu, 0x1E58A4u)) {
        return;
    }
    ctx->pc = 0x1E58A4u;
label_1e58a4:
    // 0x1e58a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e58a8: 0xc7c4e754  lwc1        $f4, -0x18AC($fp)
    ctx->pc = 0x1e58a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294960980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e58ac: 0xc442e748  lwc1        $f2, -0x18B8($v0)
    ctx->pc = 0x1e58acu;
    { uint32_t bits = FAST_READ32(0x33E748u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e58b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e58b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e58b8: 0xc463e74c  lwc1        $f3, -0x18B4($v1)
    ctx->pc = 0x1e58b8u;
    { uint32_t bits = FAST_READ32(0x33E74Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e58bc: 0xc441e750  lwc1        $f1, -0x18B0($v0)
    ctx->pc = 0x1e58bcu;
    { uint32_t bits = FAST_READ32(0x33E750u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e58c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1e58c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1e58c4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1e58c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1e58c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e58c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e58cc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1e58ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1e58d0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1e58d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1e58d4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e58d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e58d8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1e58d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e58dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e58dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e58e0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e58e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e58e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e58e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e58e8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e58e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e58ec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e58ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e58f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e58f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e58f4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1e58f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1e58f8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E58F8u;
    {
        const bool branch_taken_0x1e58f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1E58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58F8u;
        // 0x1e58fc: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58f8) {
            ctx->pc = 0x1E5910u;
            goto label_1e5910;
        }
    }
    ctx->pc = 0x1E5900u;
    // 0x1e5900: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1e5900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e5904: 0x29620100  slti        $v0, $t3, 0x100
    ctx->pc = 0x1e5904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e5908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5908u;
    {
        const bool branch_taken_0x1e5908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5908u;
        // 0x1e590c: 0x62580a  movz        $t3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5908) {
            ctx->pc = 0x1E5914u;
            goto label_1e5914;
        }
    }
    ctx->pc = 0x1E5910u;
label_1e5910:
    // 0x1e5910: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e5910u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5914:
    // 0x1e5914: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5914u;
    {
        const bool branch_taken_0x1e5914 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1E5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5914u;
        // 0x1e5918: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5914) {
            ctx->pc = 0x1E5928u;
            goto label_1e5928;
        }
    }
    ctx->pc = 0x1E591Cu;
    // 0x1e591c: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1e591cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e5920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5920u;
    {
        const bool branch_taken_0x1e5920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5920u;
        // 0x1e5924: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5920) {
            ctx->pc = 0x1E592Cu;
            goto label_1e592c;
        }
    }
    ctx->pc = 0x1E5928u;
label_1e5928:
    // 0x1e5928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e592c:
    // 0x1e592c: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E592Cu;
    {
        const bool branch_taken_0x1e592c = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1E5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E592Cu;
        // 0x1e5930: 0x29020100  slti        $v0, $t0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e592c) {
            ctx->pc = 0x1E5940u;
            goto label_1e5940;
        }
    }
    ctx->pc = 0x1E5934u;
    // 0x1e5934: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1e5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e5938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5938u;
    {
        const bool branch_taken_0x1e5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5938u;
        // 0x1e593c: 0x102180b  movn        $v1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5938) {
            ctx->pc = 0x1E5944u;
            goto label_1e5944;
        }
    }
    ctx->pc = 0x1E5940u;
label_1e5940:
    // 0x1e5940: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5944:
    // 0x1e5944: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e5944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5948: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x1e5948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x1e594c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e5950: 0x1652825  or          $a1, $t3, $a1
    ctx->pc = 0x1e5950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x1e5954: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5958: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e5958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e595c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e595cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e5960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5964: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5964u;
    SET_GPR_U32(ctx, 31, 0x1E596Cu);
    ctx->pc = 0x1E5968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5964u;
    // 0x1e5968: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5964u, 0x1E596Cu)) {
        return;
    }
    ctx->pc = 0x1E596Cu;
label_1e596c:
    // 0x1e596c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e596cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5970: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1e5970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1e5974: 0x34a50068  ori         $a1, $a1, 0x68
    ctx->pc = 0x1e5974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)104);
    // 0x1e5978: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E5978u;
    SET_GPR_U32(ctx, 31, 0x1E5980u);
    ctx->pc = 0x1E597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5978u;
    // 0x1e597c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E5978u, 0x1E5980u)) {
        return;
    }
    ctx->pc = 0x1E5980u;
label_1e5980:
    // 0x1e5980: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E5980u;
    SET_GPR_U32(ctx, 31, 0x1E5988u);
    ctx->pc = 0x1E5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5980u;
    // 0x1e5984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E5980u, 0x1E5988u)) {
        return;
    }
    ctx->pc = 0x1E5988u;
label_1e5988:
    // 0x1e5988: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x1e5988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1e598c: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x1E598Cu;
    SET_GPR_U32(ctx, 31, 0x1E5994u);
    ctx->pc = 0x1E5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E598Cu;
    // 0x1e5990: 0x24050101  addiu       $a1, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x1E598Cu, 0x1E5994u)) {
        return;
    }
    ctx->pc = 0x1E5994u;
label_1e5994:
    // 0x1e5994: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e5994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e5998: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e5998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e599c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e599cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e59a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e59a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e59a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e59a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e59a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e59a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e59ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e59acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e59b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e59b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e59b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e59b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e59b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e59b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e59bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E59BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59BCu;
        // 0x1e59c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E59BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E59C4u;
    // 0x1e59c4: 0x0  nop
    ctx->pc = 0x1e59c4u;
    // NOP
    ctx->pc = 0x1e59c8u;
}
