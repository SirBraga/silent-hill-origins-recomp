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

// Function: sub_00100880
// Address: 0x100880 - 0x100a10
void sub_00100880_0x100880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100880_0x100880");
#endif

    switch (ctx->pc) {
        case 0x1008acu: goto label_1008ac;
        case 0x1008c4u: goto label_1008c4;
        case 0x1008ecu: goto label_1008ec;
        case 0x1008f8u: goto label_1008f8;
        case 0x100918u: goto label_100918;
        case 0x10092cu: goto label_10092c;
        case 0x100954u: goto label_100954;
        case 0x100998u: goto label_100998;
        case 0x1009ccu: goto label_1009cc;
        case 0x1009dcu: goto label_1009dc;
        default: break;
    }

    ctx->pc = 0x100880u;

    // 0x100880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x100884: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x100884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x100888: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x100888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x10088c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x100890: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x100890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x100894: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x100894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x100898: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x100898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x10089c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x10089cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1008a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1008a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1008a4: 0xc04ee4a  jal         func_13B928
    ctx->pc = 0x1008A4u;
    SET_GPR_U32(ctx, 31, 0x1008ACu);
    ctx->pc = 0x1008A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008A4u;
    // 0x1008a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B928u, 0x1008A4u, 0x1008ACu)) {
        return;
    }
    ctx->pc = 0x1008ACu;
label_1008ac:
    // 0x1008ac: 0x8e0202a0  lw          $v0, 0x2A0($s0)
    ctx->pc = 0x1008acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x1008b0: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x1008B0u;
    {
        const bool branch_taken_0x1008b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1008b0) {
            ctx->pc = 0x1008B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1008B0u;
            // 0x1008b4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1009ECu;
            goto label_1009ec;
        }
    }
    ctx->pc = 0x1008B8u;
    // 0x1008b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1008b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008bc: 0xc040688  jal         func_101A20
    ctx->pc = 0x1008BCu;
    SET_GPR_U32(ctx, 31, 0x1008C4u);
    ctx->pc = 0x1008C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008BCu;
    // 0x1008c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1008BCu, 0x1008C4u)) {
        return;
    }
    ctx->pc = 0x1008C4u;
label_1008c4:
    // 0x1008c4: 0x26150188  addiu       $s5, $s0, 0x188
    ctx->pc = 0x1008c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x1008c8: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x1008c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1008cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1008ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1008d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1008d8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1008dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1008dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008e0: 0x3c160010  lui         $s6, 0x10
    ctx->pc = 0x1008e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16 << 16));
    // 0x1008e4: 0xc094120  jal         func_250480
    ctx->pc = 0x1008E4u;
    SET_GPR_U32(ctx, 31, 0x1008ECu);
    ctx->pc = 0x1008E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008E4u;
    // 0x1008e8: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250480u, 0x1008E4u, 0x1008ECu)) {
        return;
    }
    ctx->pc = 0x1008ECu;
label_1008ec:
    // 0x1008ec: 0x26110128  addiu       $s1, $s0, 0x128
    ctx->pc = 0x1008ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x1008f0: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1008f4: 0x0  nop
    ctx->pc = 0x1008f4u;
    // NOP
label_1008f8:
    // 0x1008f8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1008f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1008fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1008fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100900: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x100900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x100904: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100908: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10090c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10090cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x100910: 0xc09d964  jal         func_276590
    ctx->pc = 0x100910u;
    SET_GPR_U32(ctx, 31, 0x100918u);
    ctx->pc = 0x100914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100910u;
    // 0x100914: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276590u, 0x100910u, 0x100918u)) {
        return;
    }
    ctx->pc = 0x100918u;
label_100918:
    // 0x100918: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x100918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x10091c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10091cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100920: 0x26c524a8  addiu       $a1, $s6, 0x24A8
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 9384));
    // 0x100924: 0xc09d914  jal         func_276450
    ctx->pc = 0x100924u;
    SET_GPR_U32(ctx, 31, 0x10092Cu);
    ctx->pc = 0x100928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100924u;
    // 0x100928: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276450u, 0x100924u, 0x10092Cu)) {
        return;
    }
    ctx->pc = 0x10092Cu;
label_10092c:
    // 0x10092c: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x10092cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x100930: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x100930u;
    {
        const bool branch_taken_0x100930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100930u;
        // 0x100934: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100930) {
            ctx->pc = 0x1008F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1008f8;
        }
    }
    ctx->pc = 0x100938u;
    // 0x100938: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x10093c: 0x26c524a8  addiu       $a1, $s6, 0x24A8
    ctx->pc = 0x10093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 9384));
    // 0x100940: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x100940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100944: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x100944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x100948: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x100948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x10094c: 0xc09d914  jal         func_276450
    ctx->pc = 0x10094Cu;
    SET_GPR_U32(ctx, 31, 0x100954u);
    ctx->pc = 0x100950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10094Cu;
    // 0x100950: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276450u, 0x10094Cu, 0x100954u)) {
        return;
    }
    ctx->pc = 0x100954u;
label_100954:
    // 0x100954: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x100958: 0x8e0601d4  lw          $a2, 0x1D4($s0)
    ctx->pc = 0x100958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x10095c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x100960: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x100960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x100964: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x100964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x100968: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10096c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10096cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x100970: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x100970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x100974: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x100978: 0xae050194  sw          $a1, 0x194($s0)
    ctx->pc = 0x100978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 5));
    // 0x10097c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100980: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x100980u;
    {
        const bool branch_taken_0x100980 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x100984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100980u;
        // 0x100984: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100980) {
            ctx->pc = 0x10098Cu;
            goto label_10098c;
        }
    }
    ctx->pc = 0x100988u;
    // 0x100988: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x100988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
label_10098c:
    // 0x10098c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10098cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100990: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x100994: 0x0  nop
    ctx->pc = 0x100994u;
    // NOP
label_100998:
    // 0x100998: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x100998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x10099c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10099Cu;
    {
        const bool branch_taken_0x10099c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10099Cu;
        // 0x1009a0: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10099c) {
            ctx->pc = 0x1009E0u;
            goto label_1009e0;
        }
    }
    ctx->pc = 0x1009A4u;
    // 0x1009a4: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x1009a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1009a8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1009a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1009ac: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1009b0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1009b4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1009B4u;
    {
        const bool branch_taken_0x1009b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1009b4) {
            ctx->pc = 0x1009B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1009B4u;
            // 0x1009b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100998;
        }
    }
    ctx->pc = 0x1009BCu;
    // 0x1009bc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1009c0: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1009c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1009c4: 0xc09d55c  jal         func_275570
    ctx->pc = 0x1009C4u;
    SET_GPR_U32(ctx, 31, 0x1009CCu);
    ctx->pc = 0x1009C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009C4u;
    // 0x1009c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x1009C4u, 0x1009CCu)) {
        return;
    }
    ctx->pc = 0x1009CCu;
label_1009cc:
    // 0x1009cc: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1009ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1009d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1009d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1009d4: 0xc09d926  jal         func_276498
    ctx->pc = 0x1009D4u;
    SET_GPR_U32(ctx, 31, 0x1009DCu);
    ctx->pc = 0x1009D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009D4u;
    // 0x1009d8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1009D4u, 0x1009DCu)) {
        return;
    }
    ctx->pc = 0x1009DCu;
label_1009dc:
    // 0x1009dc: 0xae1101a8  sw          $s1, 0x1A8($s0)
    ctx->pc = 0x1009dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 17));
label_1009e0:
    // 0x1009e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1009e4: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x1009e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x1009e8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1009e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1009ec:
    // 0x1009ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1009ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1009f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1009f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1009f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1009f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1009f8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1009f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1009fc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1009fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100a00: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x100a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100a08: 0x3e00008  jr          $ra
    ctx->pc = 0x100A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A08u;
        // 0x100a0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100A10u;
}
