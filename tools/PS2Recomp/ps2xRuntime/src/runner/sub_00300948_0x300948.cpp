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

// Function: sub_00300948
// Address: 0x300948 - 0x300e00
void sub_00300948_0x300948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300948_0x300948");
#endif

    switch (ctx->pc) {
        case 0x3009b8u: goto label_3009b8;
        case 0x300a44u: goto label_300a44;
        case 0x300ac8u: goto label_300ac8;
        case 0x300aecu: goto label_300aec;
        case 0x300b40u: goto label_300b40;
        case 0x300b60u: goto label_300b60;
        case 0x300b68u: goto label_300b68;
        case 0x300bd8u: goto label_300bd8;
        case 0x300c1cu: goto label_300c1c;
        case 0x300c90u: goto label_300c90;
        case 0x300cb8u: goto label_300cb8;
        case 0x300cd8u: goto label_300cd8;
        case 0x300d60u: goto label_300d60;
        case 0x300d8cu: goto label_300d8c;
        default: break;
    }

    ctx->pc = 0x300948u;

    // 0x300948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x300948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30094c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x300950: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x300950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x300954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300958: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x300958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30095c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x30095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x300960: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x300960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x300964: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x300964u;
    {
        const bool branch_taken_0x300964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300964u;
        // 0x300968: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300964) {
            ctx->pc = 0x300AB0u;
            goto label_300ab0;
        }
    }
    ctx->pc = 0x30096Cu;
    // 0x30096c: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x30096cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x300970: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x300970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x300974: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x300974u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x300978: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x300978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x30097c: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x30097cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x300980: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300984: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x300984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x300988: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x300988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30098c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x30098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x300990: 0x26438d40  addiu       $v1, $s2, -0x72C0
    ctx->pc = 0x300990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937920));
    // 0x300994: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x300994u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x300998: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x300998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30099c: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x30099Cu;
    {
        const bool branch_taken_0x30099c = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x3009A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30099Cu;
        // 0x3009a0: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30099c) {
            ctx->pc = 0x300A38u;
            goto label_300a38;
        }
    }
    ctx->pc = 0x3009A4u;
    // 0x3009a4: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x3009a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x3009a8: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x3009a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x3009ac: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x3009acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3009b0: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x3009b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x3009b4: 0x0  nop
    ctx->pc = 0x3009b4u;
    // NOP
label_3009b8:
    // 0x3009b8: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x3009b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x3009bc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x3009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3009c0: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x3009c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3009c4: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x3009c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x3009c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3009c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3009cc: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x3009ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x3009d0: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x3009d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x3009d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3009d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3009d8: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x3009d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x3009dc: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x3009dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x3009e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3009e4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x3009e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3009e8: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x3009e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3009ec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3009ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3009f0: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3009f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3009f4: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x3009f4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3009f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3009f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3009fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3009fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300a00: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x300a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x300a04: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x300a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x300a08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x300a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x300a0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x300a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300a10: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x300a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x300a14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x300a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x300a18: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x300a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x300a1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x300a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x300a20: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x300a20u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x300a24: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x300a24u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x300a28: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x300A28u;
    {
        const bool branch_taken_0x300a28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x300A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A28u;
        // 0x300a2c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a28) {
            ctx->pc = 0x3009B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3009b8;
        }
    }
    ctx->pc = 0x300A30u;
    // 0x300a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x300A30u;
    {
        const bool branch_taken_0x300a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300a30) {
            ctx->pc = 0x300A3Cu;
            goto label_300a3c;
        }
    }
    ctx->pc = 0x300A38u;
label_300a38:
    // 0x300a38: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x300a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_300a3c:
    // 0x300a3c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x300A3Cu;
    SET_GPR_U32(ctx, 31, 0x300A44u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x300A3Cu, 0x300A44u)) {
        return;
    }
    ctx->pc = 0x300A44u;
label_300a44:
    // 0x300a44: 0xf  sync
    ctx->pc = 0x300a44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x300a48: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x300a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x300a4c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x300a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x300a50: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x300a50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x300a54: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x300a54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x300a58: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x300a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x300a5c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x300a5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x300a60: 0x264a8d40  addiu       $t2, $s2, -0x72C0
    ctx->pc = 0x300a60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937920));
    // 0x300a64: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x300a64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x300a68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x300a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x300a6c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x300a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x300a70: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x300a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x300a74: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x300a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x300a78: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x300a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300a7c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x300a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x300a80: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x300a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x300a84: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x300a84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x300a88: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x300a88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x300a8c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x300a8cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x300a90: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x300a90u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9)); // MMIO: 0x1000d400
    // 0x300a94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300A94u;
    {
        const bool branch_taken_0x300a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A94u;
        // 0x300a98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a94) {
            ctx->pc = 0x300AB0u;
            goto label_300ab0;
        }
    }
    ctx->pc = 0x300A9Cu;
    // 0x300a9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x300a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300aa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x300aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x300aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300aa8: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x300AA8u;
    ctx->pc = 0x300AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AA8u;
    // 0x300aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x300AB0u;
label_300ab0:
    // 0x300ab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x300ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300ab4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x300ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x300ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300abc: 0x3e00008  jr          $ra
    ctx->pc = 0x300ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300ABCu;
        // 0x300ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300AC4u;
    // 0x300ac4: 0x0  nop
    ctx->pc = 0x300ac4u;
    // NOP
label_300ac8:
    // 0x300ac8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300ac8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300acc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300ad0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300ad4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x300ad4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300ad8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x300ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300adc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x300adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300ae0: 0x5180000  mtsab       $t0, 0x0
    ctx->pc = 0x300ae0u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300ae4: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x300ae4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x300ae8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x300ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300aec:
    // 0x300aec: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x300aecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300af0: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x300af0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300af4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x300af4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x300af8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x300af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x300afc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x300afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x300b00: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x300b00u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300b04: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x300b04u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x300b08: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x300b08u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x300b0c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x300b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x300b10: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x300b10u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x300b14: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x300B14u;
    {
        const bool branch_taken_0x300b14 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x300B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B14u;
        // 0x300b18: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b14) {
            ctx->pc = 0x300AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300aec;
        }
    }
    ctx->pc = 0x300B1Cu;
    // 0x300b1c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x300b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x300b20: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x300b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x300b24: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x300b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x300b28: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x300b28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x300b2c: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x300B2Cu;
    {
        const bool branch_taken_0x300b2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x300B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B2Cu;
        // 0x300b30: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b2c) {
            ctx->pc = 0x300AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300aec;
        }
    }
    ctx->pc = 0x300B34u;
    // 0x300b34: 0x3e00008  jr          $ra
    ctx->pc = 0x300B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300B3Cu;
    // 0x300b3c: 0x0  nop
    ctx->pc = 0x300b3cu;
    // NOP
label_300b40:
    // 0x300b40: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x300b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300b44: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x300b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300b48: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x300b48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300b4c: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x300b4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300b50: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x300b50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300b54: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x300b54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x300b58: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x300b58u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300b5c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x300b5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300b60:
    // 0x300b60: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x300b60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300b64: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x300b64u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300b68:
    // 0x300b68: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x300b68u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300b6c: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x300b6cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x300b70: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x300b70u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x300b74: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x300b74u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300b78: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x300b78u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x300b7c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x300b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x300b80: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x300b80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x300b84: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x300b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x300b88: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x300b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x300b8c: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x300B8Cu;
    {
        const bool branch_taken_0x300b8c = (GPR_S64(ctx, 15) > 0);
        ctx->pc = 0x300B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B8Cu;
        // 0x300b90: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b8c) {
            ctx->pc = 0x300B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300b68;
        }
    }
    ctx->pc = 0x300B94u;
    // 0x300b94: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x300b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x300b98: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x300b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x300b9c: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x300b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x300ba0: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x300ba0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x300ba4: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x300BA4u;
    {
        const bool branch_taken_0x300ba4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x300BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BA4u;
        // 0x300ba8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ba4) {
            ctx->pc = 0x300B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300b68;
        }
    }
    ctx->pc = 0x300BACu;
    // 0x300bac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x300bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300bb0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x300bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300bb4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x300bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300bb8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x300bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x300bbc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x300bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x300bc0: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x300bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x300bc4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x300BC4u;
    {
        const bool branch_taken_0x300bc4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x300BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BC4u;
        // 0x300bc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bc4) {
            ctx->pc = 0x300B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300b60;
        }
    }
    ctx->pc = 0x300BCCu;
    // 0x300bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x300BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300BD4u;
    // 0x300bd4: 0x0  nop
    ctx->pc = 0x300bd4u;
    // NOP
label_300bd8:
    // 0x300bd8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300bd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300bdc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300be0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300be4: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x300be4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300be8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x300be8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300bec: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x300becu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300bf0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x300bf0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300bf4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x300bf4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x300bf8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x300bf8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300bfc: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x300bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x300c00: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x300c00u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300c04: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x300c04u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300c08: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x300c08u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300c0c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x300c0cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x300c10: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x300c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300c14: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x300C14u;
    {
        const bool branch_taken_0x300c14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x300C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C14u;
        // 0x300c18: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c14) {
            ctx->pc = 0x300C6Cu;
            goto label_300c6c;
        }
    }
    ctx->pc = 0x300C1Cu;
label_300c1c:
    // 0x300c1c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x300c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x300c20: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x300c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x300c24: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x300c24u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300c28: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x300c28u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300c2c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x300c2cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x300c30: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x300c30u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x300c34: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x300c34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x300c38: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x300c38u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x300c3c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x300c3cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x300c40: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x300c40u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x300c44: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x300c44u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x300c48: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x300c48u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x300c4c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x300c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x300c50: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x300c50u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x300c54: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x300c54u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x300c58: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x300c58u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x300c5c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x300c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x300c60: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x300c60u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x300c64: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x300C64u;
    {
        const bool branch_taken_0x300c64 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x300C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C64u;
        // 0x300c68: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c64) {
            ctx->pc = 0x300C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300c1c;
        }
    }
    ctx->pc = 0x300C6Cu;
label_300c6c:
    // 0x300c6c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x300c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x300c70: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x300c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x300c74: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x300c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x300c78: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x300c78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x300c7c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x300C7Cu;
    {
        const bool branch_taken_0x300c7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x300C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C7Cu;
        // 0x300c80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c7c) {
            ctx->pc = 0x300C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300c1c;
        }
    }
    ctx->pc = 0x300C84u;
    // 0x300c84: 0x3e00008  jr          $ra
    ctx->pc = 0x300C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300C8Cu;
    // 0x300c8c: 0x0  nop
    ctx->pc = 0x300c8cu;
    // NOP
label_300c90:
    // 0x300c90: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300c90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300c94: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300c98: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300c9c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x300c9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300ca0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x300ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300ca4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x300ca4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300ca8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x300ca8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x300cac: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x300cacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300cb0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x300cb0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x300cb4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x300cb4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_300cb8:
    // 0x300cb8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x300cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300cbc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x300cbcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300cc0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x300cc0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300cc4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x300cc4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x300cc8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x300cc8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300ccc: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x300cccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x300cd0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x300CD0u;
    {
        const bool branch_taken_0x300cd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x300CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CD0u;
        // 0x300cd4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300cd0) {
            ctx->pc = 0x300D14u;
            goto label_300d14;
        }
    }
    ctx->pc = 0x300CD8u;
label_300cd8:
    // 0x300cd8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x300cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x300cdc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x300cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x300ce0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x300ce0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300ce4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x300ce4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300ce8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x300ce8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x300cec: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x300cecu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x300cf0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x300cf0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x300cf4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x300cf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x300cf8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x300cf8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x300cfc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x300cfcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x300d00: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x300d00u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x300d04: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x300d04u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x300d08: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x300d08u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x300d0c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x300D0Cu;
    {
        const bool branch_taken_0x300d0c = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x300D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D0Cu;
        // 0x300d10: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d0c) {
            ctx->pc = 0x300CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300cd8;
        }
    }
    ctx->pc = 0x300D14u;
label_300d14:
    // 0x300d14: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x300d14u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x300d18: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x300d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x300d1c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x300d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x300d20: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x300d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x300d24: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x300d24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x300d28: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x300D28u;
    {
        const bool branch_taken_0x300d28 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x300D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D28u;
        // 0x300d2c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d28) {
            ctx->pc = 0x300CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300cd8;
        }
    }
    ctx->pc = 0x300D30u;
    // 0x300d30: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300d30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300d34: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300d38: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300d3c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x300d3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x300d40: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x300d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x300d44: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x300d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x300d48: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x300d48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x300d4c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x300D4Cu;
    {
        const bool branch_taken_0x300d4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x300D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D4Cu;
        // 0x300d50: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d4c) {
            ctx->pc = 0x300CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300cb8;
        }
    }
    ctx->pc = 0x300D54u;
    // 0x300d54: 0x3e00008  jr          $ra
    ctx->pc = 0x300D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300D5Cu;
    // 0x300d5c: 0x0  nop
    ctx->pc = 0x300d5cu;
    // NOP
label_300d60:
    // 0x300d60: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x300d60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300d64: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x300d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300d68: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x300d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x300d6c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x300d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300d70: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x300d70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x300d74: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x300d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x300d78: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x300d78u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300d7c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x300d7cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x300d80: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x300d80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300d84: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x300d84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x300d88: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x300d88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300d8c:
    // 0x300d8c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x300d8cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300d90: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x300d90u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300d94: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x300d94u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300d98: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x300d98u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x300d9c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x300d9cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x300da0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x300da0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x300da4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x300da4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x300da8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x300da8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x300dac: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x300dacu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x300db0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x300db0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x300db4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x300db4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x300db8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x300db8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x300dbc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x300dbcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x300dc0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x300dc0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x300dc4: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x300dc4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x300dc8: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x300dc8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x300dcc: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x300dccu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x300dd0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x300dd0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x300dd4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x300dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x300dd8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x300dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x300ddc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x300ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x300de0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x300de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x300de4: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x300DE4u;
    {
        const bool branch_taken_0x300de4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x300DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DE4u;
        // 0x300de8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300de4) {
            ctx->pc = 0x300D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300d8c;
        }
    }
    ctx->pc = 0x300DECu;
    // 0x300dec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x300decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x300df0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x300df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x300df4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x300df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x300df8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x300df8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x300dfc: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x300DFCu;
    {
        const bool branch_taken_0x300dfc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x300dfc) {
            ctx->pc = 0x300D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300d8c;
        }
    }
    ctx->pc = 0x300E04u;
}
