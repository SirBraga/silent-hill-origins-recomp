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

// Function: sub_0016B170
// Address: 0x16b170 - 0x16b298
void sub_0016B170_0x16b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B170_0x16b170");
#endif

    switch (ctx->pc) {
        case 0x16b18cu: goto label_16b18c;
        case 0x16b1a0u: goto label_16b1a0;
        case 0x16b1b8u: goto label_16b1b8;
        case 0x16b224u: goto label_16b224;
        case 0x16b240u: goto label_16b240;
        case 0x16b274u: goto label_16b274;
        default: break;
    }

    ctx->pc = 0x16b170u;

    // 0x16b170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b174: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b17c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16b17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b184: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16B184u;
    SET_GPR_U32(ctx, 31, 0x16B18Cu);
    ctx->pc = 0x16B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B184u;
    // 0x16b188: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16B184u, 0x16B18Cu)) {
        return;
    }
    ctx->pc = 0x16B18Cu;
label_16b18c:
    // 0x16b18c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16b190: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b194: 0x8c46f668  lw          $a2, -0x998($v0)
    ctx->pc = 0x16b194u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF668u));
    // 0x16b198: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16B198u;
    SET_GPR_U32(ctx, 31, 0x16B1A0u);
    ctx->pc = 0x16B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B198u;
    // 0x16b19c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16B198u, 0x16B1A0u)) {
        return;
    }
    ctx->pc = 0x16B1A0u;
label_16b1a0:
    // 0x16b1a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b1a8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x16B1A8u;
    {
        const bool branch_taken_0x16b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1A8u;
        // 0x16b1ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1a8) {
            ctx->pc = 0x16B288u;
            goto label_16b288;
        }
    }
    ctx->pc = 0x16B1B0u;
    // 0x16b1b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16b1b8:
    // 0x16b1b8: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x16b1b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16b1bc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16B1BCu;
    {
        const bool branch_taken_0x16b1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1BCu;
        // 0x16b1c0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1bc) {
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B1C4u;
    // 0x16b1c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b1c8: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x16b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x16b1cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b1d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b1d4: 0x800008  jr          $a0
    ctx->pc = 0x16B1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B1DCu: goto label_16b1dc;
            case 0x16B1ECu: goto label_16b1ec;
            case 0x16B1FCu: goto label_16b1fc;
            case 0x16B20Cu: goto label_16b20c;
            case 0x16B22Cu: goto label_16b22c;
            case 0x16B248u: goto label_16b248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B1D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16B1DCu;
label_16b1dc:
    // 0x16b1dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1e0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b1e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16B1E4u;
    {
        const bool branch_taken_0x16b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1E4u;
        // 0x16b1e8: 0xae230058  sw          $v1, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1e4) {
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B1ECu;
label_16b1ec:
    // 0x16b1ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b1f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16B1F4u;
    {
        const bool branch_taken_0x16b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1F4u;
        // 0x16b1f8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1f4) {
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B1FCu;
label_16b1fc:
    // 0x16b1fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b200: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b204: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16B204u;
    {
        const bool branch_taken_0x16b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B204u;
        // 0x16b208: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b204) {
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B20Cu;
label_16b20c:
    // 0x16b20c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16b20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b210: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16b214: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16b218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16b218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b21c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16B21Cu;
    SET_GPR_U32(ctx, 31, 0x16B224u);
    ctx->pc = 0x16B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B21Cu;
    // 0x16b220: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16B21Cu, 0x16B224u)) {
        return;
    }
    ctx->pc = 0x16B224u;
label_16b224:
    // 0x16b224: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16B224u;
    {
        const bool branch_taken_0x16b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B224u;
        // 0x16b228: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b224) {
            ctx->pc = 0x16B25Cu;
            goto label_16b25c;
        }
    }
    ctx->pc = 0x16B22Cu;
label_16b22c:
    // 0x16b22c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b230: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16b234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b238: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16B238u;
    SET_GPR_U32(ctx, 31, 0x16B240u);
    ctx->pc = 0x16B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B238u;
    // 0x16b23c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16B238u, 0x16B240u)) {
        return;
    }
    ctx->pc = 0x16B240u;
label_16b240:
    // 0x16b240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16B240u;
    {
        const bool branch_taken_0x16b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B240u;
        // 0x16b244: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b240) {
            ctx->pc = 0x16B25Cu;
            goto label_16b25c;
        }
    }
    ctx->pc = 0x16B248u;
label_16b248:
    // 0x16b248: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b24c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16b250: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16b250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b254: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x16b254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_16b258:
    // 0x16b258: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16b25c:
    // 0x16b25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b260: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b264: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b268: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b26c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16B26Cu;
    SET_GPR_U32(ctx, 31, 0x16B274u);
    ctx->pc = 0x16B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B26Cu;
    // 0x16b270: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16B26Cu, 0x16B274u)) {
        return;
    }
    ctx->pc = 0x16B274u;
label_16b274:
    // 0x16b274: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b278: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b27c: 0x5460ffce  bnel        $v1, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x16B27Cu;
    {
        const bool branch_taken_0x16b27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b27c) {
            ctx->pc = 0x16B280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B27Cu;
            // 0x16b280: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b1b8;
        }
    }
    ctx->pc = 0x16B284u;
    // 0x16b284: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b288:
    // 0x16b288: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b28c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b290: 0x3e00008  jr          $ra
    ctx->pc = 0x16B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B290u;
        // 0x16b294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B298u;
}
