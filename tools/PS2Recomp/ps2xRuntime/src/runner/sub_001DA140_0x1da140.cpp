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

// Function: sub_001DA140
// Address: 0x1da140 - 0x1da228
void sub_001DA140_0x1da140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA140_0x1da140");
#endif

    switch (ctx->pc) {
        case 0x1da140u: goto label_1da140;
        case 0x1da144u: goto label_1da144;
        case 0x1da148u: goto label_1da148;
        case 0x1da14cu: goto label_1da14c;
        case 0x1da150u: goto label_1da150;
        case 0x1da154u: goto label_1da154;
        case 0x1da158u: goto label_1da158;
        case 0x1da15cu: goto label_1da15c;
        case 0x1da160u: goto label_1da160;
        case 0x1da164u: goto label_1da164;
        case 0x1da168u: goto label_1da168;
        case 0x1da16cu: goto label_1da16c;
        case 0x1da170u: goto label_1da170;
        case 0x1da174u: goto label_1da174;
        case 0x1da178u: goto label_1da178;
        case 0x1da17cu: goto label_1da17c;
        case 0x1da180u: goto label_1da180;
        case 0x1da184u: goto label_1da184;
        case 0x1da188u: goto label_1da188;
        case 0x1da18cu: goto label_1da18c;
        case 0x1da190u: goto label_1da190;
        case 0x1da194u: goto label_1da194;
        case 0x1da198u: goto label_1da198;
        case 0x1da19cu: goto label_1da19c;
        case 0x1da1a0u: goto label_1da1a0;
        case 0x1da1a4u: goto label_1da1a4;
        case 0x1da1a8u: goto label_1da1a8;
        case 0x1da1acu: goto label_1da1ac;
        case 0x1da1b0u: goto label_1da1b0;
        case 0x1da1b4u: goto label_1da1b4;
        case 0x1da1b8u: goto label_1da1b8;
        case 0x1da1bcu: goto label_1da1bc;
        case 0x1da1c0u: goto label_1da1c0;
        case 0x1da1c4u: goto label_1da1c4;
        case 0x1da1c8u: goto label_1da1c8;
        case 0x1da1ccu: goto label_1da1cc;
        case 0x1da1d0u: goto label_1da1d0;
        case 0x1da1d4u: goto label_1da1d4;
        case 0x1da1d8u: goto label_1da1d8;
        case 0x1da1dcu: goto label_1da1dc;
        case 0x1da1e0u: goto label_1da1e0;
        case 0x1da1e4u: goto label_1da1e4;
        case 0x1da1e8u: goto label_1da1e8;
        case 0x1da1ecu: goto label_1da1ec;
        case 0x1da1f0u: goto label_1da1f0;
        case 0x1da1f4u: goto label_1da1f4;
        case 0x1da1f8u: goto label_1da1f8;
        case 0x1da1fcu: goto label_1da1fc;
        case 0x1da200u: goto label_1da200;
        case 0x1da204u: goto label_1da204;
        case 0x1da208u: goto label_1da208;
        case 0x1da20cu: goto label_1da20c;
        case 0x1da210u: goto label_1da210;
        case 0x1da214u: goto label_1da214;
        case 0x1da218u: goto label_1da218;
        case 0x1da21cu: goto label_1da21c;
        case 0x1da220u: goto label_1da220;
        case 0x1da224u: goto label_1da224;
        default: break;
    }

    ctx->pc = 0x1da140u;

label_1da140:
    // 0x1da140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1da140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1da144:
    // 0x1da144: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1da144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1da148:
    // 0x1da148: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1da148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1da14c:
    // 0x1da14c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1da14cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da150:
    // 0x1da150: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1da150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1da154:
    // 0x1da154: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1da154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1da158:
    // 0x1da158: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1da158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1da15c:
    // 0x1da15c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1da15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1da160:
    // 0x1da160: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1da160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da164:
    // 0x1da164: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1da164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1da168:
    // 0x1da168: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1da168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1da16c:
    // 0x1da16c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1da16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1da170:
    // 0x1da170: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1da170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1da174:
    // 0x1da174: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1da174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1da178:
    // 0x1da178: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1da178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1da17c:
    // 0x1da17c: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x1da17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_1da180:
    // 0x1da180: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1da180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1da184:
    // 0x1da184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1da184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1da188:
    // 0x1da188: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1da188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1da18c:
    // 0x1da18c: 0x24a51a48  addiu       $a1, $a1, 0x1A48
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6728));
label_1da190:
    // 0x1da190: 0x40f809  jalr        $v0
label_1da194:
    if (ctx->pc == 0x1DA194u) {
        ctx->pc = 0x1DA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA190u;
        // 0x1da194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA198u;
        goto label_1da198;
    }
    ctx->pc = 0x1DA190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA198u);
        ctx->pc = 0x1DA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA190u;
        // 0x1da194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA190u, 0x1DA198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA198u;
label_1da198:
    // 0x1da198: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1da19c:
    if (ctx->pc == 0x1DA19Cu) {
        ctx->pc = 0x1DA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA198u;
        // 0x1da19c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1A0u;
        goto label_1da1a0;
    }
    ctx->pc = 0x1DA198u;
    {
        const bool branch_taken_0x1da198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA198u;
        // 0x1da19c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da198) {
            ctx->pc = 0x1DA1C4u;
            goto label_1da1c4;
        }
    }
    ctx->pc = 0x1DA1A0u;
label_1da1a0:
    // 0x1da1a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1da1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1da1a4:
    // 0x1da1a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1da1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da1a8:
    // 0x1da1a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1da1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da1ac:
    // 0x1da1ac: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1da1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da1b0:
    // 0x1da1b0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1da1b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da1b4:
    // 0x1da1b4: 0xc08031c  jal         func_200C70
label_1da1b8:
    if (ctx->pc == 0x1DA1B8u) {
        ctx->pc = 0x1DA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1B4u;
        // 0x1da1b8: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1BCu;
        goto label_1da1bc;
    }
    ctx->pc = 0x1DA1B4u;
    SET_GPR_U32(ctx, 31, 0x1DA1BCu);
    ctx->pc = 0x1DA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1B4u;
    // 0x1da1b8: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200C70u, 0x1DA1B4u, 0x1DA1BCu)) {
        return;
    }
    ctx->pc = 0x1DA1BCu;
label_1da1bc:
    // 0x1da1bc: 0x10000010  b           . + 4 + (0x10 << 2)
label_1da1c0:
    if (ctx->pc == 0x1DA1C0u) {
        ctx->pc = 0x1DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1BCu;
        // 0x1da1c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1C4u;
        goto label_1da1c4;
    }
    ctx->pc = 0x1DA1BCu;
    {
        const bool branch_taken_0x1da1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1BCu;
        // 0x1da1c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1bc) {
            ctx->pc = 0x1DA200u;
            goto label_1da200;
        }
    }
    ctx->pc = 0x1DA1C4u;
label_1da1c4:
    // 0x1da1c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1da1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1da1c8:
    // 0x1da1c8: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1da1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_1da1cc:
    // 0x1da1cc: 0x24421af8  addiu       $v0, $v0, 0x1AF8
    ctx->pc = 0x1da1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6904));
label_1da1d0:
    // 0x1da1d0: 0x2610ac60  addiu       $s0, $s0, -0x53A0
    ctx->pc = 0x1da1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945888));
label_1da1d4:
    // 0x1da1d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1da1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1da1d8:
    // 0x1da1d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1da1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da1dc:
    // 0x1da1dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1da1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da1e0:
    // 0x1da1e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1da1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1da1e4:
    // 0x1da1e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1da1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1da1e8:
    // 0x1da1e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1da1ec:
    // 0x1da1ec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1da1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1da1f0:
    // 0x1da1f0: 0xc076912  jal         func_1DA448
label_1da1f4:
    if (ctx->pc == 0x1DA1F4u) {
        ctx->pc = 0x1DA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F0u;
        // 0x1da1f4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1F8u;
        goto label_1da1f8;
    }
    ctx->pc = 0x1DA1F0u;
    SET_GPR_U32(ctx, 31, 0x1DA1F8u);
    ctx->pc = 0x1DA1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1F0u;
    // 0x1da1f4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA448u, 0x1DA1F0u, 0x1DA1F8u)) {
        return;
    }
    ctx->pc = 0x1DA1F8u;
label_1da1f8:
    // 0x1da1f8: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1da1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1da1fc:
    // 0x1da1fc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1da1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1da200:
    // 0x1da200: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1da200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1da204:
    // 0x1da204: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1da204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1da208:
    // 0x1da208: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1da208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1da20c:
    // 0x1da20c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1da20cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1da210:
    // 0x1da210: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1da210u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1da214:
    // 0x1da214: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1da214u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1da218:
    // 0x1da218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1da218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1da21c:
    // 0x1da21c: 0x3e00008  jr          $ra
label_1da220:
    if (ctx->pc == 0x1DA220u) {
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA224u;
        goto label_1da224;
    }
    ctx->pc = 0x1DA21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA224u;
label_1da224:
    // 0x1da224: 0x0  nop
    ctx->pc = 0x1da224u;
    // NOP
    ctx->pc = 0x1da228u;
}
