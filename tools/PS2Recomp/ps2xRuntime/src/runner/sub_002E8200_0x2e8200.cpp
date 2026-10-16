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

// Function: sub_002E8200
// Address: 0x2e8200 - 0x2e82f0
void sub_002E8200_0x2e8200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8200_0x2e8200");
#endif

    switch (ctx->pc) {
        case 0x2e8270u: goto label_2e8270;
        case 0x2e828cu: goto label_2e828c;
        case 0x2e82a0u: goto label_2e82a0;
        case 0x2e82bcu: goto label_2e82bc;
        default: break;
    }

    ctx->pc = 0x2e8200u;

    // 0x2e8200: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e8204: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2e8204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2e8208: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2e8208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2e820c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e820cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e8210: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2e8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2e8214: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e8214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8218: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e8218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2e821c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e821cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8220: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2e8220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2e8224: 0x129800b  movn        $s0, $t1, $t1
    ctx->pc = 0x2e8224u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9));
    // 0x2e8228: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2e8228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2e822c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e822cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8230: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2e8230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2e8234: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2e8234u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8238: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e8238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e823c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2e823cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8240: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8244: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2e8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2e8248: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x2e8248u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e824c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2e824cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2e8250: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x2e8250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x2e8254: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E8254u;
    {
        const bool branch_taken_0x2e8254 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8254u;
        // 0x2e8258: 0x242f018  mult        $fp, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8254) {
            ctx->pc = 0x2E82BCu;
            goto label_2e82bc;
        }
    }
    ctx->pc = 0x2E825Cu;
    // 0x2e825c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8264: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e8264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8268: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E8268u;
    SET_GPR_U32(ctx, 31, 0x2E8270u);
    ctx->pc = 0x2E826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8268u;
    // 0x2e826c: 0x251a823  subu        $s5, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E8268u, 0x2E8270u)) {
        return;
    }
    ctx->pc = 0x2E8270u;
label_2e8270:
    // 0x2e8270: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x2e8270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2e8274: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e827c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e827cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8280: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x2e8280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2e8284: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E8284u;
    SET_GPR_U32(ctx, 31, 0x2E828Cu);
    ctx->pc = 0x2E8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8284u;
    // 0x2e8288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E8284u, 0x2E828Cu)) {
        return;
    }
    ctx->pc = 0x2E828Cu;
label_2e828c:
    // 0x2e828c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e828cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8290: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2e8290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8294: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e8294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8298: 0xc0b99ca  jal         func_2E6728
    ctx->pc = 0x2E8298u;
    SET_GPR_U32(ctx, 31, 0x2E82A0u);
    ctx->pc = 0x2E829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8298u;
    // 0x2e829c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E6728u, 0x2E8298u, 0x2E82A0u)) {
        return;
    }
    ctx->pc = 0x2E82A0u;
label_2e82a0:
    // 0x2e82a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E82A0u;
    {
        const bool branch_taken_0x2e82a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82A0u;
        // 0x2e82a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82a0) {
            ctx->pc = 0x2E82B0u;
            goto label_2e82b0;
        }
    }
    ctx->pc = 0x2E82A8u;
    // 0x2e82a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E82A8u;
    {
        const bool branch_taken_0x2e82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82A8u;
        // 0x2e82ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82a8) {
            ctx->pc = 0x2E82C0u;
            goto label_2e82c0;
        }
    }
    ctx->pc = 0x2E82B0u;
label_2e82b0:
    // 0x2e82b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e82b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e82b4: 0xc0ba0bc  jal         func_2E82F0
    ctx->pc = 0x2E82B4u;
    SET_GPR_U32(ctx, 31, 0x2E82BCu);
    ctx->pc = 0x2E82B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82B4u;
    // 0x2e82b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E82F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E82F0u, 0x2E82B4u, 0x2E82BCu)) {
        return;
    }
    ctx->pc = 0x2E82BCu;
label_2e82bc:
    // 0x2e82bc: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2e82bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e82c0:
    // 0x2e82c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2e82c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e82c4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2e82c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e82c8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2e82c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e82cc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2e82ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e82d0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e82d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e82d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e82d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e82d8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2e82d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e82dc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2e82dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e82e0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2e82e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e82e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e82e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e82e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E82E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82E8u;
        // 0x2e82ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E82E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E82F0u;
}
